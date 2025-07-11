// =====================================================================================
// SSO.cpp // SSO (Small String Optimization)
// =====================================================================================

module modern_cpp:sso;


void test_zeichenkette()
{
    const char* cp = "11111111111111111111111111";

    // cp[0] = '!';

   // printf("%s", cp);
}


void main_sso()
{
    auto size{ sizeof(std::string) };
    auto capacity{ std::string{}.capacity() };
    auto small { std::string(capacity, '*') };
    auto big{ std::string(capacity + 1, '#') };

    std::cout << "sizeof  : " << size << std::endl;
    std::cout << "Capacity: " << capacity << std::endl;
    std::cout << "Small   : " << small.capacity() << ": " << small << std::endl;
    std::cout << "Big     : " << big.capacity() << ": " << big << std::endl;
}

// =====================================================================================
// End-of-File
// =====================================================================================
