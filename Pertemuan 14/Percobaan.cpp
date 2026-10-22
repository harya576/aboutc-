#include <iostream>
#include <string>
#include <algorithm> // Untuk transform

int main() 
{
    std::string kalimatA = "Kota Tasikmalaya";
    std::string kalimatB = kalimatA;

    // Ubah semua huruf kecil ke kapital
    std::transform(kalimatA.begin(), kalimatA.end(), kalimatA.begin(), ::toupper);
    std::cout << kalimatA << std::endl;

    // Ubah semua huruf kapital ke kecil
    std::transform(kalimatA.begin(), kalimatA.end(), kalimatA.begin(), ::tolower);
    std::cout << kalimatA << std::endl;

    // Membandingkan dua string
    std::cout << (kalimatA == kalimatB ? 0 : (kalimatA < kalimatB ? -1 : 1)) << std::endl;

    // Membandingkan dua string tanpa case sensitivity
    std::string lowerA = kalimatA, lowerB = kalimatB;
    std::transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
    std::transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);
    std::cout << (lowerA == lowerB ? 0 : (lowerA < lowerB ? -1 : 1)) << std::endl;

    // Menggabungkan string
    kalimatB += " Never Ending Asia";
    std::cout << kalimatB << std::endl;

    return 0;
}

