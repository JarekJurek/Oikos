cmake_minimum_required(VERSION 3.21)
project(Program)

set(CMAKE_CXX_STANDARD 23)

add_executable(Program main.cpp CLicznik.cpp CLicznik.h CLicznikGazu.cpp CLicznikGazu.h CLicznikPradu.cpp CLicznikPradu.h CLicznikWody.cpp CLicznikWody.h CAdres.cpp CAdres.h CMieszkanie.cpp CMieszkanie.h COdczyt.cpp COdczyt.h CTaryfa.cpp CTaryfa.h CRachunek.cpp CRachunek.h CListaMieszkan.cpp CListaMieszkan.h CInterfejs.cpp CInterfejs.h CSerializer.cpp CSerializer.h CDeserializer.cpp CDeserializer.h CSerializerAbstr.cpp CSerializerAbstr.h CDeserializerAbstr.cpp CDeserializerAbstr.h CListaLicznikow.cpp CListaLicznikow.h CListaOdczytow.cpp CListaOdczytow.h)
