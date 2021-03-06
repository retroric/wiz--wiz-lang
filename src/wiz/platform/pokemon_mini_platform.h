#ifndef WIZ_PLATFORM_POKEMON_MINI_H
#define WIZ_PLATFORM_POKEMON_MINI_H

#include <wiz/platform/platform.h>

namespace wiz {
    class PokemonMiniPlatform : public Platform {
        public:
            PokemonMiniPlatform();
            ~PokemonMiniPlatform() override;

            void reserveDefinitions(Builtins& builtins) override;
            Definition* getPointerSizedType() const override;
            Definition* getFarPointerSizedType() const override;
            std::unique_ptr<PlatformTestAndBranch> getTestAndBranch(const Compiler& compiler, const Definition* type, BinaryOperatorKind op, const Expression* left, const Expression* right, std::size_t distanceHint) const override;
            Definition* getZeroFlag() const override;
            Int128 getPlaceholderValue() const override;

        private:
            Definition* pointerSizedType = nullptr;
            Definition* farPointerSizedType = nullptr;

            Definition* a = nullptr;
            Definition* ba = nullptr;
            Definition* hl = nullptr;
            Definition* x = nullptr;
            Definition* y = nullptr;
            Definition* sp = nullptr;
            Definition* zero = nullptr;
            Definition* carry = nullptr;
            Definition* overflow = nullptr;
            Definition* negative = nullptr;
            Definition* cmp = nullptr;
            Definition* test = nullptr;
    };
}

#endif
