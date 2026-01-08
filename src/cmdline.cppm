export module cmdline;
import std;
import types;

// Check for help and version options. also check argument syntax
export int quick_parse_args(int argc, char *argv[]){
  for(int i = 0; i < argc; ++i){
    string arg = argv[i];
    if(arg=="--help"|| arg == "-h)"){
      print_help();
      return 0;
    }
    if(arg=="--version" || arg == "-V"){
      print_version();
      return 0;
    }
  }
  return 0;
}
