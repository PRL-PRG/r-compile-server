fun main() {
  () -+> V { reg letters:*, reg letters1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg paste0:cls, reg x1:*, reg x2:V, reg p:p(V +), reg i5:*, reg i6:V, reg p1:p(V +), reg r2:V, reg x3:*, reg x4:V |
    mkenv;
    st x = "";
    letters = ld letters;
    check L2() else D0();
  D0():
    deopt 3 [letters];
  L2():
    letters1 = force? letters;
    checkMissing(letters1);
    s = toForSeq(letters1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L3() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    paste0 = ldf paste0;
    check L4() else D1();
  L3():
    x3 = ld x;
    check L6() else D3();
  D1():
    deopt 6 [i2];
  D3():
    deopt 14 [x3];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r2 = dyn paste0(p, p1);
    check L5() else D2();
  L6():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D2():
    deopt 9 [i2, r2];
  L5():
    st x = r2;
    goto L0(i2);
  }
}