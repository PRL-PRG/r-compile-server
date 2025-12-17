fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650999460;
    st `[<-.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner650999460(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg NextMethod:cls, reg r:V, reg NROW:cls, reg y:*, reg y1:V, reg p:p(V +), reg r2:V, reg NROW1:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    NextMethod = ldf NextMethod;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn NextMethod("[<-");
    check L3() else D1();
  D1():
    deopt 3 [r];
  L3():
    st y = r;
    NROW = ldf NROW;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r2 = dyn NROW(p);
    check L5() else D3();
  D3():
    deopt 8 [r2];
  L5():
    NROW1 = ldf NROW;
    check L6() else D4();
  D4():
    deopt 9 [r2];
  L6():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn NROW1(p1);
    check L7() else D5();
  D5():
    deopt 11 [r2, r4];
  L7():
    r5 = `!=`(r2, r4);
    c = `as.logical`(r5);
    if c then L8() else L0();
  L0():
    goto L1();
  L1():
    y2 = ld y;
    check L12() else D8();
  L8():
    stop = ldf stop;
    check L9() else D6();
  D6():
    deopt 14 [];
  D8():
    deopt 19 [y2];
  L9():
    r6 = dyn stop("only replacement of elements is allowed");
    check L10() else D7();
  L12():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D7():
    deopt 16 [r6];
  L10():
    goto L1();
  }
}