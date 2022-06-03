cmake_minimum_required(VERSION 3.21)
project(Program)

set(CMAKE_CXX_STANDARD 23)

add_executable(Program main.cpp CLicznik.cpp CLicznik.h CLicznikGazu.cpp CLicznikGazu.h CLicznikPradu.cpp CLicznikPradu.h CLicznikWody.cpp CLicznikWody.h CAdres.cpp CAdres.h CMieszkanie.cpp CMieszkanie.h COdczyt.cpp COdczyt.h CTaryfa.cpp CTaryfa.h CRachunek.cpp CRachunek.h CZapis.cpp CZapis.h CListaMiekszan.cpp CListaMiekszan.h)
