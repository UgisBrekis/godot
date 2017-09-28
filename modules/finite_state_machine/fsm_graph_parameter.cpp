/* finite_state_machine.cpp */

#include "fsm_graph_parameter.h"

void FiniteStateMachineGraphParameter::set_type(Variant::Type p_type) {

    if (type == p_type)
		return;

    switch (p_type) {

        case Variant::BOOL:
            type = p_type;
            break;

        case Variant::INT:
            type = p_type;
            break;

        case Variant::REAL:
            type = p_type;
            break;

        default:
            type = Variant::BOOL;
            break;
    }

    emit_signal("type_changed");
    set_value(NULL);

}

Variant::Type FiniteStateMachineGraphParameter::get_type() const {

    return type;
}

void FiniteStateMachineGraphParameter::set_value(Variant p_value) {

    value = p_value;
    emit_signal("value_changed");
}

Variant FiniteStateMachineGraphParameter::get_value() const {
    return value;
}

void FiniteStateMachineGraphParameter::_bind_methods() {

    ClassDB::bind_method(D_METHOD("set_type", "type"), &FiniteStateMachineGraphParameter::set_type);
	ClassDB::bind_method(D_METHOD("get_type"), &FiniteStateMachineGraphParameter::get_type);
    ClassDB::bind_method(D_METHOD("set_value", "value"), &FiniteStateMachineGraphParameter::set_value);
	ClassDB::bind_method(D_METHOD("get_value"), &FiniteStateMachineGraphParameter::get_value);

    String argt = "Null";
	for (int i = 1; i < Variant::VARIANT_MAX; i++) {
		argt += "," + Variant::get_type_name(Variant::Type(i));
	}

    ADD_PROPERTY(PropertyInfo(Variant::INT, "type", PROPERTY_HINT_ENUM, argt), "set_type", "get_type");
	ADD_PROPERTY(PropertyInfo(Variant::NIL, "value"), "set_value", "get_value");

    ADD_SIGNAL(MethodInfo("type_changed"));
    ADD_SIGNAL(MethodInfo("value_changed"));
}

FiniteStateMachineGraphParameter::FiniteStateMachineGraphParameter() {
    set_type(Variant::BOOL);
    set_value(false);
}

FiniteStateMachineGraphParameter::~FiniteStateMachineGraphParameter(){
}
