#pragma once

namespace openloco::utility
{
    template<typename T, size_t N>
    static constexpr size_t length(T const (&)[N]) noexcept
    {
        return N;
    }
}
