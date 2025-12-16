fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg dput:cls, reg __:cls, reg r2:V, reg p:p(V +), reg fil:*, reg fil1:V, reg p1:p(V +), reg r5:V, reg dget:cls, reg fil2:*, reg fil3:V, reg p2:p(V +), reg r7:V, reg stopifnot:cls, reg all_equal:cls, reg bar:*, reg bar1:V, reg p3:p(V +), reg __1:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg r14:cls, reg dput1:cls, reg baz:*, reg baz1:V, reg p6:p(V +), reg r16:V, reg dput2:cls, reg baz2:*, reg baz3:V, reg p7:p(V +), reg r18:V, reg dput3:cls, reg xx:*, reg xx1:V, reg p8:p(V +), reg r20:V, reg dput4:cls, reg xx2:*, reg xx3:V, reg p9:p(V +), reg r22:V, reg dput5:cls, reg xx4:*, reg xx5:V, reg p10:p(V +), reg r24:V, reg dput6:cls, reg xx6:*, reg xx7:V, reg p11:p(V +), reg fil4:*, reg fil5:V, reg p12:p(V +), reg r27:V, reg dget1:cls, reg fil6:*, reg fil7:V, reg p13:p(V +), reg r29:V, reg xx8:*, reg xx9:V, reg dput7:cls, reg xx10:*, reg xx11:V, reg p14:p(V +), reg fil8:*, reg fil9:V, reg p15:p(V +), reg r33:V, reg dget2:cls, reg fil10:*, reg fil11:V, reg p16:p(V +), reg r35:V, reg xx12:*, reg xx13:V, reg dput8:cls, reg xx14:*, reg xx15:V, reg p17:p(V +), reg fil12:*, reg fil13:V, reg p18:p(V +), reg r39:V, reg dget3:cls, reg fil14:*, reg fil15:V, reg p19:p(V +), reg r41:V, reg xx16:*, reg xx17:V, reg unlink:cls, reg fil16:*, reg fil17:V, reg p20:p(V +), reg r44:V, reg setNames:cls, reg xx18:*, reg xx19:V, reg p21:p(V +), reg paste0:cls, reg p22:p(V +), reg r47:V, reg p23:p(V +), reg r49:V, reg dput9:cls, reg xn:*, reg xn1:V, reg p24:p(V +), reg r51:V, reg dput10:cls, reg xn2:*, reg xn3:V, reg p25:p(V +), reg r53:V, reg dput11:cls, reg xn4:*, reg xn5:V, reg p26:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r55:V, reg r56:V, reg c:cls, reg r57:V, reg p27:p(V +), reg r59:V |
    mkenv;
    r = clos inner2020479874;
    st dput = r;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn tempfile();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st fil = r1;
    dput = ldf dput;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p = prom<V +>{
      __ = ldf `::`;
      r2 = dyn __("base", "mean");
      return r2;
    };
    p1 = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r5 = dyn dput(p, p1);
    check L3() else D3();
  D3():
    deopt 11 [r5];
  L3():
    dget = ldf dget;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p2 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r7 = dyn dget(p2);
    check L5() else D5();
  D5():
    deopt 15 [r7];
  L5():
    st bar = r7;
    stopifnot = ldf stopifnot;
    check L6() else D6();
  D6():
    deopt 18 [];
  L6():
    p5 = prom<V +>{
      all_equal = ldf `all.equal`;
      p3 = prom<V +>{
        bar = ld bar;
        bar1 = force? bar;
        checkMissing(bar1);
        return bar1;
      };
      p4 = prom<V +>{
        __1 = ldf `::`;
        r9 = dyn __1("base", "mean");
        return r9;
      };
      r11 = dyn all_equal[, , `check.environment`](p3, p4, FALSE);
      return r11;
    };
    r13 = dyn stopifnot(p5);
    check L7() else D7();
  D7():
    deopt 20 [r13];
  L7():
    r14 = clos inner354062069;
    st baz = r14;
    dput1 = ldf dput;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p6 = prom<V +>{
      baz = ld baz;
      baz1 = force? baz;
      checkMissing(baz1);
      return baz1;
    };
    r16 = dyn dput1(p6);
    check L9() else D9();
  D9():
    deopt 27 [r16];
  L9():
    dput2 = ldf dput;
    check L10() else D10();
  D10():
    deopt 29 [];
  L10():
    p7 = prom<V +>{
      baz2 = ld baz;
      baz3 = force? baz2;
      checkMissing(baz3);
      return baz3;
    };
    r18 = dyn dput2[, control](p7, "useSource");
    check L11() else D11();
  D11():
    deopt 33 [r18];
  L11():
    st xx = <real 3.141592653589793, 9.869604401089358, 31.006276680299816>;
    dput3 = ldf dput;
    check L12() else D12();
  D12():
    deopt 38 [];
  L12():
    p8 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    r20 = dyn dput3(p8);
    check L13() else D13();
  D13():
    deopt 40 [r20];
  L13():
    dput4 = ldf dput;
    check L14() else D14();
  D14():
    deopt 42 [];
  L14():
    p9 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    r22 = dyn dput4[, control](p9, "digits17");
    check L15() else D15();
  D15():
    deopt 46 [r22];
  L15():
    dput5 = ldf dput;
    check L16() else D16();
  D16():
    deopt 48 [];
  L16():
    p10 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r24 = dyn dput5[, control](p10, "hexNumeric");
    check L17() else D17();
  D17():
    deopt 52 [r24];
  L17():
    dput6 = ldf dput;
    check L18() else D18();
  D18():
    deopt 54 [];
  L18():
    p11 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    p12 = prom<V +>{
      fil4 = ld fil;
      fil5 = force? fil4;
      checkMissing(fil5);
      return fil5;
    };
    r27 = dyn dput6(p11, p12);
    check L19() else D19();
  D19():
    deopt 57 [r27];
  L19():
    dget1 = ldf dget;
    check L20() else D20();
  D20():
    deopt 59 [];
  L20():
    p13 = prom<V +>{
      fil6 = ld fil;
      fil7 = force? fil6;
      checkMissing(fil7);
      return fil7;
    };
    r29 = dyn dget1(p13);
    check L21() else D21();
  D21():
    deopt 61 [r29];
  L21():
    xx8 = ld xx;
    check L22() else D22();
  D22():
    deopt 61 [r29, xx8];
  L22():
    xx9 = force? xx8;
    checkMissing(xx9);
    `-`(r29, xx9);
    dput7 = ldf dput;
    check L23() else D23();
  D23():
    deopt 65 [];
  L23():
    p14 = prom<V +>{
      xx10 = ld xx;
      xx11 = force? xx10;
      checkMissing(xx11);
      return xx11;
    };
    p15 = prom<V +>{
      fil8 = ld fil;
      fil9 = force? fil8;
      checkMissing(fil9);
      return fil9;
    };
    r33 = dyn dput7[, , control](p14, p15, "digits17");
    check L24() else D24();
  D24():
    deopt 70 [r33];
  L24():
    dget2 = ldf dget;
    check L25() else D25();
  D25():
    deopt 72 [];
  L25():
    p16 = prom<V +>{
      fil10 = ld fil;
      fil11 = force? fil10;
      checkMissing(fil11);
      return fil11;
    };
    r35 = dyn dget2(p16);
    check L26() else D26();
  D26():
    deopt 74 [r35];
  L26():
    xx12 = ld xx;
    check L27() else D27();
  D27():
    deopt 74 [r35, xx12];
  L27():
    xx13 = force? xx12;
    checkMissing(xx13);
    `-`(r35, xx13);
    dput8 = ldf dput;
    check L28() else D28();
  D28():
    deopt 78 [];
  L28():
    p17 = prom<V +>{
      xx14 = ld xx;
      xx15 = force? xx14;
      checkMissing(xx15);
      return xx15;
    };
    p18 = prom<V +>{
      fil12 = ld fil;
      fil13 = force? fil12;
      checkMissing(fil13);
      return fil13;
    };
    r39 = dyn dput8[, , control](p17, p18, "hexNumeric");
    check L29() else D29();
  D29():
    deopt 83 [r39];
  L29():
    dget3 = ldf dget;
    check L30() else D30();
  D30():
    deopt 85 [];
  L30():
    p19 = prom<V +>{
      fil14 = ld fil;
      fil15 = force? fil14;
      checkMissing(fil15);
      return fil15;
    };
    r41 = dyn dget3(p19);
    check L31() else D31();
  D31():
    deopt 87 [r41];
  L31():
    xx16 = ld xx;
    check L32() else D32();
  D32():
    deopt 87 [r41, xx16];
  L32():
    xx17 = force? xx16;
    checkMissing(xx17);
    `-`(r41, xx17);
    unlink = ldf unlink;
    check L33() else D33();
  D33():
    deopt 91 [];
  L33():
    p20 = prom<V +>{
      fil16 = ld fil;
      fil17 = force? fil16;
      checkMissing(fil17);
      return fil17;
    };
    r44 = dyn unlink(p20);
    check L34() else D34();
  D34():
    deopt 93 [r44];
  L34():
    setNames = ldf setNames;
    check L35() else D35();
  D35():
    deopt 95 [];
  L35():
    p21 = prom<V +>{
      xx18 = ld xx;
      xx19 = force? xx18;
      checkMissing(xx19);
      return xx19;
    };
    p23 = prom<V +>{
      paste0 = ldf paste0;
      p22 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r47 = dyn paste0("pi^", p22);
      return r47;
    };
    r49 = dyn setNames(p21, p23);
    check L36() else D36();
  D36():
    deopt 98 [r49];
  L36():
    st xn = r49;
    dput9 = ldf dput;
    check L37() else D37();
  D37():
    deopt 101 [];
  L37():
    p24 = prom<V +>{
      xn = ld xn;
      xn1 = force? xn;
      checkMissing(xn1);
      return xn1;
    };
    r51 = dyn dput9(p24);
    check L38() else D38();
  D38():
    deopt 103 [r51];
  L38():
    dput10 = ldf dput;
    check L39() else D39();
  D39():
    deopt 105 [];
  L39():
    p25 = prom<V +>{
      xn2 = ld xn;
      xn3 = force? xn2;
      checkMissing(xn3);
      return xn3;
    };
    r53 = dyn dput10[, control](p25, "S_compat");
    check L40() else D40();
  D40():
    deopt 109 [r53];
  L40():
    dput11 = ldf dput;
    check L41() else D41();
  D41():
    deopt 111 [];
  L41():
    p26 = prom<V +>{
      xn4 = ld xn;
      xn5 = force? xn4;
      checkMissing(xn5);
      return xn5;
    };
    p27 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r56):
      return r56;
    L1():
      c = ldf c in base;
      r57 = dyn c("keepNA", "keepInteger", "showAttributes");
      goto L0(r57);
    L2():
      r55 = dyn base("keepNA", "keepInteger", "showAttributes");
      goto L0(r55);
    };
    r59 = dyn dput11[, control](p26, p27);
    check L42() else D42();
  D42():
    deopt 115 [r59];
  L42():
    popenv;
    return r59;
  }
}
fun inner2020479874(x, file, control) {
  (reg x:*, reg file:*, reg control:*) -+> V { var x:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg file1:*, reg file2:V, reg c1:L, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg file3:*, reg file4:V, reg nzchar:cls, reg r8:V, reg c3:L, reg file5:cls, reg file6:*, reg file7:V, reg p1:p(V +), reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg on_exit:cls, reg r13:V, reg r14:V, reg stdout:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg x1:*, reg x2:V, reg file8:*, reg file9:V, reg _deparseOpts:cls, reg control1:*, reg control2:V, reg p2:p(V +), reg r20:V, reg dput:cls, reg r21:V |
    mkenv;
    st x = x;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L1() else L2(control);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("keepNA", "keepInteger", "niceNames", "showAttributes");
      goto L0(r2);
    L2():
      r = dyn base("keepNA", "keepInteger", "niceNames", "showAttributes");
      goto L0(r);
    };
    goto L2(p);
  L2(control_orDefault):
    st control = control_orDefault;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L3(r5):
    c2 = `as.logical`(r5);
    if c2 then L14() else L4();
  L11():
    file1 = ld file;
    check L13() else D0();
  L12():
    r4 = dyn base1(<sym file>);
    goto L3(r4);
  D0():
    deopt 1 [file1];
  L4():
    goto L9();
  L9():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L13():
    file2 = force? file1;
    checkMissing(file2);
    c1 = `is.character`(file2);
    goto L3(c1);
  L14():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L5(r7):
    c3 = `as.logical`(r7);
    if c3 then L19() else L6();
  L10(r18):
    popenv;
    return r18;
  L15():
    file3 = ld file;
    check L17() else D1();
  L16():
    r6 = dyn base2(<sym file>);
    goto L5(r6);
  L28():
    x1 = ld x;
    check L30() else D7();
  L29():
    r17 = dyn base4(<lang dput(x, file, .deparseOpts(control))>);
    goto L10(r17);
  D1():
    deopt 6 [file3];
  D7():
    deopt 27 [x1];
  L6():
    stdout = ldf stdout;
    check L25() else D5();
  L8(r14):
    goto L9();
  L17():
    file4 = force? file3;
    checkMissing(file4);
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(file4);
    check L18() else D2();
  L19():
    file5 = ldf file;
    check L20() else D3();
  L30():
    x2 = force? x1;
    checkMissing(x2);
    file8 = ld file;
    check L31() else D8();
  D2():
    deopt 9 [r8];
  D3():
    deopt 11 [];
  D5():
    deopt 20 [];
  D8():
    deopt 29 [file8];
  L18():
    goto L5(r8);
  L20():
    p1 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    r10 = dyn file5(p1, "wt");
    check L21() else D4();
  L25():
    r15 = dyn stdout();
    check L26() else D6();
  L31():
    file9 = force? file8;
    checkMissing(file9);
    _deparseOpts = ldf `.deparseOpts`;
    check L32() else D9();
  D4():
    deopt 14 [r10];
  D6():
    deopt 21 [r15];
  D9():
    deopt 32 [];
  L21():
    st file = r10;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L26():
    st file = r15;
    goto L8(r15);
  L32():
    p2 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    r20 = dyn _deparseOpts(p2);
    check L33() else D10();
  D10():
    deopt 34 [r20];
  L7(r12):
    goto L8(r12);
  L22():
    on_exit = ldf `on.exit` in base;
    r13 = dyn on_exit(<lang close(file)>);
    goto L7(r13);
  L23():
    r11 = dyn base3(<lang close(file)>);
    goto L7(r11);
  L33():
    dput = ldf dput in base;
    r21 = dyn dput(x2, file9, r20);
    check L34() else D11();
  D11():
    deopt 36 [r21];
  L34():
    goto L10(r21);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 1 [1.0, x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `-`(1.0, x2);
    popenv;
    return r;
  }
}