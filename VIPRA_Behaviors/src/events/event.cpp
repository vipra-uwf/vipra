
#include <utility>

#include <spdlog/spdlog.h>

#include <events/event.hpp>
#include "definitions/sim_pack.hpp"
#include "events/event_status.hpp"
#include "targets/target.hpp"

namespace BHVR {

/**
 * @brief Evaluates whether an event should start or end based on its conditions
 * 
 * @param pedSet : pedestrian set object
 * @param obsSet : obstacle set object
 * @param goals : goals object
 * @param context : behavior context
 * @param dT : simulation timestep size
 */
void Event::evaluate(Simpack pack) {
  if (_status == EventStatus::ENDING) {
    _status = EventStatus::NOT_OCCURRING;
  }
  if (_status == EventStatus::STARTING) {
    _status = EventStatus::OCCURRING;
  }

  // TODO (rolland) : These might need target selectors?
  if (_status == EventStatus::OCCURRING) {
    if (_endCondition.evaluate(pack, 0, {})) {
      spdlog::info("Event {} is Ending", _name);
      _status = EventStatus::ENDING;
    }

    return;
  }

  if (_startCondition.evaluate(pack, 0, {})) {
    spdlog::info("Event {} is Starting", _name);
    _occurred = true;
    _status = EventStatus::STARTING;
  }
}

/**
 * @brief Sets the events current _status
 * 
 * @param stat : 
 */
void Event::set_status(EventStatus stat) { _status = stat; }

/**
 * @brief Checks if the event is occurring
 * 
 * @return true 
 * @return false 
 */
auto Event::is_occurring() const -> bool {
  return _status == EventStatus::OCCURRING || _status == EventStatus::STARTING;
}

/**
 * @brief Checks if the event has occurred at all during the simulation
 * 
 * @return true 
 * @return false 
 */
auto Event::has_occurred() const -> bool { return _occurred; }

/**
 * @brief Checks if the event is starting
 * 
 * @return true 
 * @return false 
 */
auto Event::is_starting() const -> bool { return _status == EventStatus::STARTING; }

/**
 * @brief Checks if the event is ending
 * 
 * @return true 
 * @return false 
 */
auto Event::is_ending() const -> bool { return _status == EventStatus::ENDING; }

/**
 * @brief Sets the condition for the event to start
 * 
 * @param condition : condition for event to start
 */
void Event::set_start_condition(const Condition& condition) { _startCondition = condition; }

/**
 * @brief Sets the condition for the event to end
 * 
 * @param condition : condition for event to end
 */
void Event::set_end_condition(const Condition& condition) { _endCondition = condition; }

/**
 * @brief Returns the events _name
 * 
 * @return const std::string& 
 */
auto Event::get_name() const -> const std::string& { return _name; }

auto Event::get_status() const -> const EventStatus& { return _status; }

// ---------------------------------- CONSTRUCTORS -----------------------------------------------------------

Event::Event(std::string evName) : _name(std::move(evName)) {}

// ---------------------------------- END CONSTRUCTORS -----------------------------------------------------------

}  // namespace BHVR
