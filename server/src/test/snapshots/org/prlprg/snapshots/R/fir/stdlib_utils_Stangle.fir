fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner481803433;
    st Stangle = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner481803433(file, driver, syntax, encoding, `...`) {
  (reg file:*, reg driver:*, reg syntax:*, reg encoding:*, reg ddd:dots) -+> V { var file:*, var driver:*, reg driver_isMissing:L, reg driver_orDefault:*, reg Rtangle:cls, reg r:V, reg p:p(V +), var syntax:*, reg syntax_isMissing:L, reg syntax_orDefault:*, reg getOption:cls, reg r2:V, reg p1:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var `...`:dots?, reg Sweave:cls, reg file1:*, reg file2:V, reg p2:p(V +), reg driver1:*, reg driver2:V, reg p3:p(V +), reg encoding1:*, reg encoding2:V, reg p4:p(V +), reg ddd1:dots?, reg r7:V |
    mkenv;
    st file = file;
    driver_isMissing = missing.0(driver);
    if driver_isMissing then L0() else L1(driver);
  L0():
    p = prom<V +>{
      Rtangle = ldf Rtangle;
      r = dyn Rtangle();
      return r;
    };
    goto L1(p);
  L1(driver_orDefault):
    st driver = driver_orDefault;
    syntax_isMissing = missing.0(syntax);
    if syntax_isMissing then L2() else L3(syntax);
  L2():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r2 = dyn getOption("SweaveSyntax");
      return r2;
    };
    goto L3(p1);
  L3(syntax_orDefault):
    st syntax = syntax_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L4("") else L4(encoding);
  L4(encoding_orDefault):
    st encoding = encoding_orDefault;
    st `...` = ddd;
    Sweave = ldf Sweave;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p2 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p3 = prom<V +>{
      driver1 = ld driver;
      driver2 = force? driver1;
      checkMissing(driver2);
      return driver2;
    };
    p4 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    ddd1 = ld `...`;
    r7 = dyn Sweave[file, driver, encoding, `...`](p2, p3, p4, ddd1);
    check L6() else D1();
  D1():
    deopt 9 [r7];
  L6():
    popenv;
    return r7;
  }
}