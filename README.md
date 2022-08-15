# TestDLL
## О проекте
**TestDLL.dll** - DLL-библиотека, не выполняющая никаких действий, кроме вывода MessageBox при наступлении следующих событий:
- Загрузка библиотеки
- Выгрузка библиотеки
- Вызов функции ShowTest
- Регистрация DLL (вызов DllRegisterServer)
- Разрегистрация DLL (вызов DllUnregisterServer)
- Установка/удаление DLL (вызов DllInstall)

Библиотека может использоваться как тестовая полезная нагрузка в виде DLL.

## Примеры вызова
```
rundll32 TestDLL.dll,ShowTest
regsvr32 TestDLL.dll
regsvr32 /u TestDLL.dll
regsvr32 /u /i TestDLL.dll
```
