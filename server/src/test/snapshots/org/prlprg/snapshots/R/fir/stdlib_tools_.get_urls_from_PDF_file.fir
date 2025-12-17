fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st `.get_urls_from_PDF_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg getwd:cls, reg r:V, reg dir_create:cls, reg tempfile:cls, reg r1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg on_exit:cls, reg r6:V, reg file_copy:cls, reg normalizePath:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg d:*, reg d1:V, reg p3:p(V +), reg r11:V, reg setwd:cls, reg d2:*, reg d3:V, reg p4:p(V +), reg r13:V, reg tempfile1:cls, reg d4:*, reg d5:V, reg p5:p(V +), reg r15:V, reg system2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg shQuote:cls, reg basename:cls, reg f3:*, reg f4:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg shQuote1:cls, reg basename1:cls, reg g:*, reg g1:V, reg p8:p(V +), reg r23:V, reg p9:p(V +), reg r25:V, reg c:cls, reg r26:V, reg p10:p(V +), reg r28:V, reg file_exists:cls, reg g2:*, reg g3:V, reg p11:p(V +), reg r30:V, reg c1:L, reg _get_urls_from_HTML_file:cls, reg g4:*, reg g5:V, reg p12:p(V +), reg r32:V, reg character:cls, reg r33:V |
    mkenv;
    st f = f;
    getwd = ldf getwd;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn getwd();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st owd = r;
    dir_create = ldf `dir.create`;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    p = prom<V +>{
      tempfile = ldf tempfile;
      r1 = dyn tempfile();
      st d = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn dir_create(p);
    check L5() else D3();
  D3():
    deopt 7 [r3];
  L5():
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    file_copy = ldf `file.copy`;
    check L8() else D4();
  L6():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang {
      unlink(d, recursive=TRUE);
      setwd(owd)
    }>);
    goto L0();
  L7():
    r4 = dyn base(<lang {
      unlink(d, recursive=TRUE);
      setwd(owd)
    }>);
    goto L0();
  D4():
    deopt 12 [];
  L8():
    p2 = prom<V +>{
      normalizePath = ldf normalizePath;
      p1 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r8 = dyn normalizePath(p1);
      return r8;
    };
    p3 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r11 = dyn file_copy(p2, p3);
    check L9() else D5();
  D5():
    deopt 15 [r11];
  L9():
    setwd = ldf setwd;
    check L10() else D6();
  D6():
    deopt 17 [];
  L10():
    p4 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r13 = dyn setwd(p4);
    check L11() else D7();
  D7():
    deopt 19 [r13];
  L11():
    tempfile1 = ldf tempfile;
    check L12() else D8();
  D8():
    deopt 21 [];
  L12():
    p5 = prom<V +>{
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      return d5;
    };
    r15 = dyn tempfile1[tmpdir, fileext](p5, ".xml");
    check L13() else D9();
  D9():
    deopt 26 [r15];
  L13():
    st g = r15;
    system2 = ldf system2;
    check L14() else D10();
  D10():
    deopt 29 [];
  L14():
    p10 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      shQuote = ldf shQuote;
      p7 = prom<V +>{
        basename = ldf basename;
        p6 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r19 = dyn basename(p6);
        return r19;
      };
      r21 = dyn shQuote(p7);
      shQuote1 = ldf shQuote;
      p9 = prom<V +>{
        basename1 = ldf basename;
        p8 = prom<V +>{
          g = ld g;
          g1 = force? g;
          checkMissing(g1);
          return g1;
        };
        r23 = dyn basename1(p8);
        return r23;
      };
      r25 = dyn shQuote1(p9);
      c = ldf c in base;
      r26 = dyn c("-s -q -i -c -xml", r21, r25);
      goto L0(r26);
    L2():
      r16 = dyn base1("-s -q -i -c -xml", <lang shQuote(basename(f))>, <lang shQuote(basename(g))>);
      goto L0(r16);
    };
    r28 = dyn system2("pdftohtml", p10);
    check L15() else D11();
  D11():
    deopt 32 [r28];
  L15():
    file_exists = ldf `file.exists`;
    check L16() else D12();
  D12():
    deopt 34 [];
  L16():
    p11 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r30 = dyn file_exists(p11);
    check L17() else D13();
  D13():
    deopt 36 [r30];
  L17():
    c1 = `as.logical`(r30);
    if c1 then L18() else L1();
  L1():
    character = ldf character;
    check L22() else D16();
  L18():
    _get_urls_from_HTML_file = ldf `.get_urls_from_HTML_file`;
    check L19() else D14();
  D14():
    deopt 38 [];
  D16():
    deopt 42 [];
  L19():
    p12 = prom<V +>{
      g4 = ld g;
      g5 = force? g4;
      checkMissing(g5);
      return g5;
    };
    r32 = dyn _get_urls_from_HTML_file(p12);
    check L20() else D15();
  L22():
    r33 = dyn character();
    check L23() else D17();
  D15():
    deopt 40 [r32];
  D17():
    deopt 43 [r33];
  L20():
    popenv;
    return r32;
  L23():
    popenv;
    return r33;
  }
}