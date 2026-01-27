# L10 - Slutförande av testsvit och kursavslutning

## Dagordning
* Slutförande av testsviten.
* Säkerställande av fungerande testkörningar.
* Inlämning av projekt.
* Kurssammanfattning och reflektion.
* Kursutvärdering.

## Mål med lektionen
* Slutföra och verifiera att hela testsviten kompilerar och körs korrekt.
* Förbereda projektet för inlämning.
* Förstå kraven för den kommande redovisningen.
* Reflektera över lärdomar från kursen.

## Instruktioner

### 1. Slutför testsviten

* Säkerställ att alla tester kompilerar och körs utan fel.
* Kontrollera att testsviten täcker samtliga efterfrågade testnivåer.
* Kör igenom testerna och verifiera testresultaten.
* Rätta eventuella kvarstående buggar.

Målet är att projektet vid lektionens slut ska vara helt körbart och redo för inlämning.

### 2. Inlämning

Projektet ska lämnas in enligt checklistan nedan. Om ni blir klara under lektionen kan ni 
redovisa direkt för läraren. I annat fall bokas redovisningstid senare via Google Classroom.

## Inlämning - Checklista

Kontrollera att ert projekt är komplett innan veckans slut:

- **Git-repository uppladdat på GitHub** (privat repository).
- **Lärare tillagd som collaborator**.
- **All testkod implementerad och fungerande**:
  - Enhetstester (GPIO, serial, timer, smart tempsensor, linjär regressionsmodell).
  - Komponenttester (logik-implementationen).
  - Stubklasser implementerade.
- **Dokumentation**:
  - README-fil med instruktioner för att köra testerna.
  - Dokumentation av manuella integrationstester.
  - Sammanfattande rapport (max tre sidor) - kan inkluderas i README eller som separat dokument.
- **För VG**:
  - Python-skript för seriell kommunikation.
  - Dokumentation och användningsexempel för Python-skriptet.
  - Parametriserade tester där tillämpligt.
  - Komplett integrationstestdokumentation (>10 tester).

## Kurssammanfattning

### Vad vi har gått igenom

* **L01**: Introduktion till testautomation och Google Test.
* **L02-L04**: Unittester av drivers med en virtuell hårdvaruplattform.
* **L05-L07**: Stubklasser och komponenttestning.
* **L08**: Manuell SW/HW-integrationstestning på target.
* **L09**: Automatiserad testning med Python och seriell kommunikation.
* **L10**: Slutförande av testsvit och avslutning.

### Viktiga koncept
* **Testnivåer**: Unit, component, integration och system.
* **Virtuell hårdvara**: Simulera hårdvara för snabbare och mer deterministiska tester.
* **Stubklasser**: Simulera beroenden för isolerad testning.
* **Interfaces**: Ökar testbarhet genom att möjliggöra stub-implementationer.
* **Automatisering**: Python-skript för att effektivisera repetitiva tester.

## Kursutvärdering
Vänligen fundera på följande:
* Vad fungerade bra i kursen?
* Vad skulle kunna förbättras?
* Vilka delar var mest lärorika?
* Vilka delar var mest utmanande?
* Hur väl förberedde lektionerna er för projektet?
* Fanns det tillräckligt med tid för projektet?
* Hur var balansen mellan teori och praktik?
* Några övriga synpunkter eller förslag?

## Avslutning
Stort tack för er insats under kursen! Ni har lärt er värdefulla färdigheter inom:
* Testautomation för inbyggda system.
* Google Test och C++-testning.
* Stubklasser och virtuell hårdvara.
* Python-baserad testautomation.
* Git och versionshantering.

Dessa kunskaper kommer vara användbara i framtida projekt och yrkesliv. Lycka till framöver!
