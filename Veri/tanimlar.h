#ifndef TANIMLAR_H
#define TANIMLAR_H

#include <QByteArray>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QTime>
#include <QtCore>

typedef quint64 IdTuru;
typedef qint32 TcNo;
typedef qint16 AraMesafe;

typedef double TelNo;

typedef float ParaBirimi;

typedef QString Metin;

typedef QDate Tarih;
typedef QTime Saat;
typedef QDateTime TarihSaat;

typedef enum {
    KRGGonderici = 1,
    KRGAlici = 2,
    KRGSube = 4,
    KRGAdres = 8,
    KRGDesi = 16,
    KRGTeslimat = 32

} KRGDetay;

typedef QByteArray Resim;

// Pointer Tanımları

class KRGGondericiBilgileri;
class KRGAliciBilgileri;
class KRGSubeBilgileri;
class KRGKargoBilgileri;
class KRGFaturaBilgileri;
class KRGKargoHizmetleri;

#include <memory>

typedef std::shared_ptr<KRGGondericiBilgileri> KRGondericiBilgileriPtr;
typedef std::shared_ptr<KRGAliciBilgileri> KRGAliciBilgileriPtr;
typedef std::shared_ptr<KRGSubeBilgileri> KRGSubeBilgileriPtr;
typedef std::shared_ptr<KRGKargoBilgileri> KRGKargoBilgileriPtr;
typedef std::shared_ptr<KRGFaturaBilgileri> KRGFaturaBilgileriPtr;
typedef std::shared_ptr<KRGKargoHizmetleri> KRGKargoHizmetleriPtr;

#endif // TANIMLAR_H
