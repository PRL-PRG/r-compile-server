fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1176673770;
    st `.valueClassTest` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1176673770(object, classes, fname) {
  (reg object:*, reg classes:*, reg fname:*) -+> V { var object:*, var classes:*, var fname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg classes1:*, reg classes2:V, reg length:cls, reg r2:V, reg c:L, reg classes3:*, reg classes4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg is:cls, reg object1:*, reg object2:V, reg p:p(V +), reg Cl:*, reg Cl1:V, reg p1:p(V +), reg r5:V, reg c2:L, reg object3:*, reg object4:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg fname1:*, reg fname2:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg dQuote:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg object5:*, reg object6:V, reg class:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg paste:cls, reg dQuote1:cls, reg classes5:*, reg classes6:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V, reg object7:*, reg object8:V |
    mkenv;
    st object = object;
    st classes = classes;
    st fname = fname;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1();
  L7():
    classes1 = ld classes;
    check L9() else D0();
  L8():
    r = dyn base(<sym classes>);
    goto L0(r);
  D0():
    deopt 2 [classes1];
  L1():
    goto L6();
  L6():
    object7 = ld object;
    check L23() else D8();
  L9():
    classes2 = force? classes1;
    checkMissing(classes2);
    length = ldf length in base;
    r2 = dyn length(classes2);
    check L10() else D1();
  L11():
    classes3 = ld classes;
    check L12() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [classes3];
  D8():
    deopt 29 [object7];
  L10():
    goto L0(r2);
  L12():
    classes4 = force? classes3;
    checkMissing(classes4);
    s = toForSeq(classes4);
    l = length(s);
    i = 0;
    goto L2(i);
  L23():
    object8 = force? object7;
    checkMissing(object8);
    popenv;
    return object8;
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L13() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st Cl = x;
    is = ldf is;
    check L14() else D3();
  L13():
    stop = ldf stop;
    check L20() else D6();
  D3():
    deopt 9 [i2];
  D6():
    deopt 22 [];
  L14():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p1 = prom<V +>{
      Cl = ld Cl;
      Cl1 = force? Cl;
      checkMissing(Cl1);
      return Cl1;
    };
    r5 = dyn is(p, p1);
    check L15() else D4();
  L20():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          fname1 = ld fname;
          fname2 = force? fname1;
          checkMissing(fname2);
          return fname2;
        };
        r9 = dyn sQuote(p2);
        return r9;
      };
      p5 = prom<V +>{
        dQuote = ldf dQuote;
        p4 = prom<V +>{
          sym1 = ldf class;
          base1 = ldf class in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r12):
          return r12;
        L1():
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          class = ldf class in base;
          r13 = dyn class(object6);
          goto L0(r13);
        L2():
          r11 = dyn base1(<sym object>);
          goto L0(r11);
        };
        r15 = dyn dQuote(p4);
        return r15;
      };
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          dQuote1 = ldf dQuote;
          p6 = prom<V +>{
            classes5 = ld classes;
            classes6 = force? classes5;
            checkMissing(classes6);
            return classes6;
          };
          r18 = dyn dQuote1(p6);
          return r18;
        };
        r20 = dyn paste[, collapse](p7, " or ");
        return r20;
      };
      r22 = dyn gettextf("invalid value from generic function %s, class %s, expected %s", p3, p5, p8);
      return r22;
    };
    r24 = dyn stop[, domain](p9, NA_LGL);
    check L21() else D7();
  D4():
    deopt 12 [i2, r5];
  D7():
    deopt 26 [r24];
  L15():
    c2 = `as.logical`(r5);
    if c2 then L16() else L3();
  L21():
    goto L6();
  L3():
    goto L2(i2);
  L16():
    object3 = ld object;
    check L17() else D5();
  D5():
    deopt 13 [i2, object3];
  L17():
    object4 = force? object3;
    checkMissing(object4);
    popenv;
    return object4;
  }
}