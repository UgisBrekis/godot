/* finite_state_machine.h */
#ifndef FINITE_STATE_MACHINE_GRAPH_PARAMETER_H
#define FINITE_STATE_MACHINE_GRAPH_PARAMETER_H

#include "resource.h"

class FiniteStateMachineGraphParameter : public Resource {
    GDCLASS(FiniteStateMachineGraphParameter,Resource);

private:
    Variant::Type type;
    Variant value;

protected:
    static void _bind_methods();

public:
    void set_type(Variant::Type p_type);
    Variant::Type get_type() const;
    void set_value(Variant p_value);
    Variant get_value() const;

    FiniteStateMachineGraphParameter();
    virtual ~FiniteStateMachineGraphParameter();
};

#endif
