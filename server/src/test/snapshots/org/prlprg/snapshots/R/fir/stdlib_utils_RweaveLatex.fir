fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st RweaveLatex = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg RweaveLatexSetup:*, reg RweaveLatexSetup1:V, reg RweaveLatexRuncode:*, reg RweaveLatexRuncode1:V, reg RweaveLatexWritedoc:*, reg RweaveLatexWritedoc1:V, reg RweaveLatexFinish:*, reg RweaveLatexFinish1:V, reg RweaveLatexOptions:*, reg RweaveLatexOptions1:V, reg list:cls, reg r2:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    RweaveLatexSetup = ld RweaveLatexSetup;
    check L3() else D0();
  L2():
    r = dyn base[setup, runcode, writedoc, finish, checkopts](<sym RweaveLatexSetup>, <sym RweaveLatexRuncode>, <sym RweaveLatexWritedoc>, <sym RweaveLatexFinish>, <sym RweaveLatexOptions>);
    goto L0(r);
  D0():
    deopt 2 [RweaveLatexSetup];
  L3():
    RweaveLatexSetup1 = force? RweaveLatexSetup;
    checkMissing(RweaveLatexSetup1);
    RweaveLatexRuncode = ld RweaveLatexRuncode;
    check L4() else D1();
  D1():
    deopt 5 [RweaveLatexRuncode];
  L4():
    RweaveLatexRuncode1 = force? RweaveLatexRuncode;
    checkMissing(RweaveLatexRuncode1);
    RweaveLatexWritedoc = ld RweaveLatexWritedoc;
    check L5() else D2();
  D2():
    deopt 8 [RweaveLatexWritedoc];
  L5():
    RweaveLatexWritedoc1 = force? RweaveLatexWritedoc;
    checkMissing(RweaveLatexWritedoc1);
    RweaveLatexFinish = ld RweaveLatexFinish;
    check L6() else D3();
  D3():
    deopt 11 [RweaveLatexFinish];
  L6():
    RweaveLatexFinish1 = force? RweaveLatexFinish;
    checkMissing(RweaveLatexFinish1);
    RweaveLatexOptions = ld RweaveLatexOptions;
    check L7() else D4();
  D4():
    deopt 14 [RweaveLatexOptions];
  L7():
    RweaveLatexOptions1 = force? RweaveLatexOptions;
    checkMissing(RweaveLatexOptions1);
    list = ldf list in base;
    r2 = dyn list(RweaveLatexSetup1, RweaveLatexRuncode1, RweaveLatexWritedoc1, RweaveLatexFinish1, RweaveLatexOptions1);
    check L8() else D5();
  D5():
    deopt 18 [r2];
  L8():
    goto L0(r2);
  }
}