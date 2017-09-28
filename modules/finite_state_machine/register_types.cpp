/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "fsm_graph_parameter.h"

void register_finite_state_machine_types() {

        ClassDB::register_class<FiniteStateMachineGraphParameter>();
}

void unregister_finite_state_machine_types() {
   //nothing to do here
}
