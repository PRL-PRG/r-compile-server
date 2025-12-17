fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2677615807;
    st `.mapply` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2677615807(FUN, dots, MoreArgs) {
  (reg FUN:*, reg dots:*, reg MoreArgs:*) -+> V { var FUN:*, var dots:*, var MoreArgs:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r3:V, reg dots1:*, reg dots2:V, reg MoreArgs1:*, reg MoreArgs2:V, reg mapply:cls, reg r4:V |
    mkenv;
    st FUN = FUN;
    st dots = dots;
    st MoreArgs = MoreArgs;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    match_fun = ldf `match.fun`;
    check L3() else D0();
  L2():
    r = dyn base(<lang mapply(match.fun(FUN), dots, MoreArgs)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r3 = dyn match_fun(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    dots1 = ld dots;
    check L5() else D2();
  D2():
    deopt 6 [dots1];
  L5():
    dots2 = force? dots1;
    checkMissing(dots2);
    MoreArgs1 = ld MoreArgs;
    check L6() else D3();
  D3():
    deopt 8 [MoreArgs1];
  L6():
    MoreArgs2 = force? MoreArgs1;
    checkMissing(MoreArgs2);
    mapply = ldf mapply in base;
    r4 = dyn mapply(r3, dots2, MoreArgs2);
    check L7() else D4();
  D4():
    deopt 11 [r4];
  L7():
    goto L0(r4);
  }
}