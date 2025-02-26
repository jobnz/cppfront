
#define CPP2_IMPORT_STD          Yes

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"



//=== Cpp2 type definitions and function declarations ===========================


#line 2 "pure2-inspect-generic-void-empty-with-variant-any-optional.cpp2"
[[nodiscard]] auto main() -> int;
    

#line 18 "pure2-inspect-generic-void-empty-with-variant-any-optional.cpp2"
auto test_generic(auto const& x, auto const& msg) -> void;
    

//=== Cpp2 function definitions =================================================


#line 2 "pure2-inspect-generic-void-empty-with-variant-any-optional.cpp2"
[[nodiscard]] auto main() -> int{
    std::unique_ptr<int> p {}; 
    std::vector<int>::iterator i {}; 
    std::variant<std::monostate,int,int,std::string> v {}; 
    std::any a {}; 
    std::optional<std::string> o {}; 

    std::cout << "\nAll these cases satisfy \"VOYDE AND EMPTIE\"\n";

    test_generic(std::move(p), "unique_ptr");
    test_generic(std::move(i), "vector<int>::iterator");
    test_generic(std::move(v), "variant<monostate, int, int, string>");
    test_generic(std::move(a), "any");
    test_generic(std::move(o), "optional<string>");
}

auto test_generic(auto const& x, auto const& msg) -> void{
    std::cout 
        << "\n" << msg << "\n    ..." 
        << [&] () -> std::string { auto&& _expr = x;
            if (cpp2::is<void>(_expr)) { if constexpr( requires{" VOYDE AND EMPTIE";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF((" VOYDE AND EMPTIE")),std::string> ) return " VOYDE AND EMPTIE"; else return std::string{}; else return std::string{}; }
            else return " no match"; }
        () 
        << "\n";
}

