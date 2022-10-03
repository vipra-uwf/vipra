
import { Nullable } from '../../types/typeDefs';
import { evLogger } from './eventLogger';
import { EventHandler, EventType, RequestHandler, RequestType } from './eventTypes';

/**
 * @description System for handling events
 */
export class EventSystem {

  private handlersMap : Map<EventType, EventHandler[]>;

  private requestMap : Map<RequestType, RequestHandler>;

  constructor() {
    this.handlersMap = new Map();
  }

  /**
   * @description Emits an event for all registered handlers
   * @param {EventType} event - type of event
   * @param {any} data - data that goes along with the event
   * @param {any} source - what object the event originated from
   */
  public emit<DataType, Source>(event : EventType, data : Nullable<DataType>, source : Source) : void {
    if (data) {
      evLogger.info(`EMIT: ${event} ; SOURCE: ${source as string} ; DATA: ${data as string}`);
      const handlers : Nullable<EventHandler[]> = this.handlersMap.get(event) || null;
      if (handlers) {
        for (const handler of handlers) {
          evLogger.info(`HANDLE: ${event} ; SOURCE: ${source as string} ; DATA: ${data as string}`);
          handler(data, source);
        }
      }
    } else {
      evLogger.error(`NO DATA : EMIT ; EVENT : ${event} ; SOURCE : ${typeof source} ; DATATYPE : ${typeof data}`);
    }
  }

  /**
   * @description Emits a request event, if a handler is attached the requested object is returned
   * @param {any} select - information used to find specific object
   * @param {RequestType} datatype - type of object requested
   */
  public async request(datatype : RequestType, select : any) : Promise<Nullable<unknown>> {
    evLogger.info(`REQUEST : ${datatype}, SELECT: ${select as string || 'NULL'}`);
    const handler : Nullable<RequestHandler> = this.requestMap.get(datatype) || null;
    if (handler) {
      return handler(select);
    } else {
      evLogger.error(`FAIL: REQUEST: ${datatype}, SELECT: ${select as string || 'NULL'}`);
      return null;
    }
  }

  /**
   * @throws
   * @description Sets the request handler for a data request, throws error if there is already a request handler for the type
   * @param {RequestType} datatype - type of request the handler is for
   * @param {RequestHandler} handler - handler for request
   */
  public setRequestHandler(datatype : RequestType, handler : RequestHandler) : void {
    evLogger.info(`REGISTER : ${datatype}`);
    if (this.requestMap.has(datatype)) {
      evLogger.info(`FAIL: REGISTER: ${datatype}`);
      throw new Error(`Attempt to Set Multiple Request Handlers for: ${datatype}`);
    }
    this.requestMap.set(datatype, handler);
  }
  
  /**
   * @description Subscribes a handler to an event
   * @param  {EventType} event - type of event to subscribe to
   * @param  {EventHandler} handler - handler function to subscribe
   */
  public subscribe(event : EventType, handler : EventHandler) : void {
    evLogger.info(`SUBSCRIBE: ${event}`);
    const handlerArray : Nullable<EventHandler[]> = this.handlersMap.get(event) || null;
    if (handlerArray) {
      handlerArray.push(handler);
    }
  }
}