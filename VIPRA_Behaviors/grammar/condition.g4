grammar condition;

import lexer_rules, values, directions, objects;

condition:
  sub_condition connector*;

connector:
  or_Connector |
  and_Connector
  ;

or_Connector:
  OR sub_condition;

and_Connector:
  AND sub_condition;

sub_condition:
  condition_Time_Elapsed_From_Event |
  condition_Event_Occurred |
  condition_Event_Occurring |
  condition_Event_One_Time
  ;

condition_Time_Elapsed_From_Event:
  AFTER value_number SECONDS FROM (AN | THE)? EVNT (EVENT)?
  ;

condition_Event_Occurred:
  GIVEN (AN | THE)? EVNT (EVENT)? HAS OCCURRED;

condition_Event_Occurring:
  WHILE (AN | THEN)? EVNT (EVENT)? IS OCCURRING;

condition_Event_One_Time:
  WHEN (AN | THEN)? EVNT (EVENT)? (ENDS | STARTS);