fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_standard_DESCRIPTION_fields` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _get_standard_repository_db_fields:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg c2:cls, reg r9:V, reg p:p(V +), reg r11:V |
    mkenv;
    unique = ldf unique;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r1):
      return r1;
    L3():
      _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`;
      r2 = dyn _get_standard_repository_db_fields();
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r = dyn base(<lang .get_standard_repository_db_fields()>, <lang c("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData")>, <lang c("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews")>);
      goto L0(r);
    L1(r4):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L5():
      c = ldf c in base;
      r5 = dyn c("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData");
      goto L1(r5);
    L6():
      r3 = dyn base1("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData");
      goto L1(r3);
    L2(r7):
      c2 = ldf c in base;
      r9 = dyn c2(r2, r4, r7);
      goto L0(r9);
    L7():
      c1 = ldf c in base;
      r8 = dyn c1("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews");
      goto L2(r8);
    L8():
      r6 = dyn base2("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews");
      goto L2(r6);
    };
    r11 = dyn unique(p);
    check L1() else D1();
  D1():
    deopt 3 [r11];
  L1():
    popenv;
    return r11;
  }
}