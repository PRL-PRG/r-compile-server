fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg setwd:cls, reg tempdir:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg prompt:cls, reg plot_default:*, reg plot_default1:V, reg p2:p(V +), reg r9:V, reg prompt1:cls, reg interactive:*, reg interactive1:V, reg p3:p(V +), reg r11:V, reg unlink:cls, reg r12:V, reg unlink1:cls, reg r13:V, reg prompt2:cls, reg women:*, reg women1:V, reg p4:p(V +), reg r15:V, reg unlink2:cls, reg r16:V, reg prompt3:cls, reg sunspots:*, reg sunspots1:V, reg p5:p(V +), reg r18:V, reg unlink3:cls, reg r19:V, reg setwd1:cls, reg oldwd:*, reg oldwd1:V, reg p6:p(V +), reg r21:V |
    mkenv;
    r = clos inner1292076475;
    st prompt = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    setwd = ldf setwd;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      tempdir = ldf tempdir;
      r5 = dyn tempdir();
      return r5;
    };
    r7 = dyn setwd(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r7];
  L4():
    goto L0();
  L6():
    st oldwd = r7;
    prompt = ldf prompt;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p2 = prom<V +>{
      plot_default = ld `plot.default`;
      plot_default1 = force? plot_default;
      checkMissing(plot_default1);
      return plot_default1;
    };
    r9 = dyn prompt(p2);
    check L8() else D5();
  D5():
    deopt 16 [r9];
  L8():
    prompt1 = ldf prompt;
    check L9() else D6();
  D6():
    deopt 18 [];
  L9():
    p3 = prom<V +>{
      interactive = ld interactive;
      interactive1 = force? interactive;
      checkMissing(interactive1);
      return interactive1;
    };
    r11 = dyn prompt1[, `force.function`](p3, TRUE);
    check L10() else D7();
  D7():
    deopt 22 [r11];
  L10():
    unlink = ldf unlink;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    r12 = dyn unlink("plot.default.Rd");
    check L12() else D9();
  D9():
    deopt 26 [r12];
  L12():
    unlink1 = ldf unlink;
    check L13() else D10();
  D10():
    deopt 28 [];
  L13():
    r13 = dyn unlink1("interactive.Rd");
    check L14() else D11();
  D11():
    deopt 30 [r13];
  L14():
    prompt2 = ldf prompt;
    check L15() else D12();
  D12():
    deopt 32 [];
  L15():
    p4 = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      return women1;
    };
    r15 = dyn prompt2(p4);
    check L16() else D13();
  D13():
    deopt 34 [r15];
  L16():
    unlink2 = ldf unlink;
    check L17() else D14();
  D14():
    deopt 36 [];
  L17():
    r16 = dyn unlink2("women.Rd");
    check L18() else D15();
  D15():
    deopt 38 [r16];
  L18():
    prompt3 = ldf prompt;
    check L19() else D16();
  D16():
    deopt 40 [];
  L19():
    p5 = prom<V +>{
      sunspots = ld sunspots;
      sunspots1 = force? sunspots;
      checkMissing(sunspots1);
      return sunspots1;
    };
    r18 = dyn prompt3(p5);
    check L20() else D17();
  D17():
    deopt 42 [r18];
  L20():
    unlink3 = ldf unlink;
    check L21() else D18();
  D18():
    deopt 44 [];
  L21():
    r19 = dyn unlink3("sunspots.Rd");
    check L22() else D19();
  D19():
    deopt 46 [r19];
  L22():
    setwd1 = ldf setwd;
    check L23() else D20();
  D20():
    deopt 48 [];
  L23():
    p6 = prom<V +>{
      oldwd = ld oldwd;
      oldwd1 = force? oldwd;
      checkMissing(oldwd1);
      return oldwd1;
    };
    r21 = dyn setwd1(p6);
    check L24() else D21();
  D21():
    deopt 50 [r21];
  L24():
    popenv;
    return r21;
  }
}
fun inner1292076475(object, filename, name, `...`) {
  (reg object:*, reg filename:*, reg name:*, reg ddd:dots) -+> V { var object:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0(NULL) else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1(NULL) else L1(name);
  L1(name_orDefault):
    st name = name_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("prompt");
    goto L2(r2);
  L4():
    r = dyn base("prompt");
    goto L2(r);
  }
}