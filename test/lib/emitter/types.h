#ifndef ENTT_LIB_EMITTER_TYPES_H
#define ENTT_LIB_EMITTER_TYPES_H

#include <entt/lib/attribute.h>
#include <entt/signal/emitter.hpp>

struct ENTT_API test_emitter
        : entt::emitter<test_emitter>
{};

struct ENTT_API event {};

struct ENTT_API message {
    int payload;
};

#endif // ENTT_LIB_EMITTER_TYPES_H
