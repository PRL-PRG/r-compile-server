fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3787028234;
    st `prop.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3787028234(x, margin) {
  (reg x:*, reg margin:*) -+> V { var x:*, var margin:*, reg margin_isMissing:L, reg margin_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg margin1:*, reg margin2:V, reg length:cls, reg r2:V, reg c:L, reg sweep:cls, reg x1:*, reg x2:V, reg p:p(V +), reg margin3:*, reg margin4:V, reg p1:p(V +), reg marginSums:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg margin5:*, reg margin6:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg __:*, reg __1:V, reg p5:p(V +), reg r10:V, reg x5:*, reg x6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg x9:V, reg r12:V, reg x10:*, reg x11:V, reg sum:cls, reg r13:V, reg r14:V |
    mkenv;
    st x = x;
    margin_isMissing = missing.0(margin);
    if margin_isMissing then L0(NULL) else L0(margin);
  L0(margin_orDefault):
    st margin = margin_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c = `as.logical`(r1);
    if c then L8() else L2();
  L4():
    margin1 = ld margin;
    check L6() else D0();
  L5():
    r = dyn base(<sym margin>);
    goto L1(r);
  D0():
    deopt 2 [margin1];
  L2():
    x5 = ld x;
    check L12() else D4();
  L6():
    margin2 = force? margin1;
    checkMissing(margin2);
    length = ldf length in base;
    r2 = dyn length(margin2);
    check L7() else D1();
  L8():
    sweep = ldf sweep;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 15 [x5];
  L7():
    goto L1(r2);
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      margin3 = ld margin;
      margin4 = force? margin3;
      checkMissing(margin4);
      return margin4;
    };
    p4 = prom<V +>{
      marginSums = ldf marginSums;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p3 = prom<V +>{
        margin5 = ld margin;
        margin6 = force? margin5;
        checkMissing(margin6);
        return margin6;
      };
      r7 = dyn marginSums(p2, p3);
      return r7;
    };
    p5 = prom<V +>{
      __ = ld `/`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r10 = dyn sweep[, , , , `check.margin`](p, p1, p4, p5, FALSE);
    check L10() else D3();
  L12():
    x6 = force? x5;
    checkMissing(x6);
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D3():
    deopt 14 [r10];
  L3(x9, r12):
    r14 = `/`(x9, r12);
    popenv;
    return r14;
  L10():
    popenv;
    return r10;
  L13():
    x10 = ld x;
    check L15() else D5();
  L14():
    r11 = dyn base1(<sym x>);
    goto L3(x6, r11);
  D5():
    deopt 18 [x6, x10];
  L15():
    x11 = force? x10;
    checkMissing(x11);
    sum = ldf sum in base;
    r13 = dyn sum(x11);
    check L16() else D6();
  D6():
    deopt 21 [x6, r13];
  L16():
    goto L3(x6, r13);
  }
}