fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203017188;
    st fuzzyApropos = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg c:L, reg p:p(V +), reg r3:V, reg character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg search:cls, reg r7:V, reg r8:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg findFuzzyMatches:cls, reg what3:*, reg what4:V, reg p1:p(V +), reg ls:cls, reg i5:*, reg i6:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg i9:I, reg r15:V, reg li:*, reg li1:V, reg length:cls, reg r16:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg i14:I, reg r18:V, reg x1:*, reg x2:V, reg li2:*, reg li3:V, reg c3:cls, reg r19:V, reg i15:I, reg findFuzzyMatches1:cls, reg what5:*, reg what6:V, reg p4:p(V +), reg x3:*, reg x4:V, reg p5:p(V +), reg r23:V |
    mkenv;
    st what = what;
    stopifnot = ldf stopifnot;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      c = `is.character`(what2);
      goto L0(c);
    L2():
      r = dyn base(<sym what>);
      goto L0(r);
    };
    r3 = dyn stopifnot(p);
    check L8() else D1();
  D1():
    deopt 3 [r3];
  L8():
    character = ldf character;
    check L9() else D2();
  D2():
    deopt 5 [];
  L9():
    r4 = dyn character(0);
    check L10() else D3();
  D3():
    deopt 7 [r4];
  L10():
    st x = r4;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L0(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L1(i);
  L11():
    search = ldf search;
    check L13() else D4();
  L12():
    r5 = dyn base1(<lang search()>);
    goto L0(r5);
  D4():
    deopt 11 [];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L15() else L6();
  L13():
    r7 = dyn search();
    check L14() else D5();
  D5():
    deopt 12 [r7];
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    findFuzzyMatches = ldf findFuzzyMatches;
    check L16() else D6();
  L14():
    r8 = seq_along(r7);
    goto L0(r8);
  L15():
    findFuzzyMatches1 = ldf findFuzzyMatches;
    check L29() else D13();
  D6():
    deopt 15 [i2];
  D13():
    deopt 41 [];
  L16():
    p1 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p3 = prom<V +>{
      ls = ldf ls;
      p2 = prom<V +>{
        i5 = ld i;
        i6 = force? i5;
        checkMissing(i6);
        return i6;
      };
      r11 = dyn ls[pos, `all.names`](p2, TRUE);
      return r11;
    };
    r13 = dyn findFuzzyMatches(p1, p3);
    check L17() else D7();
  L29():
    p4 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r23 = dyn findFuzzyMatches1(p4, p5);
    check L30() else D14();
  D7():
    deopt 18 [i2, r13];
  D14():
    deopt 44 [r23];
  L17():
    st li = r13;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L30():
    popenv;
    return r23;
  L2(i9, r15):
    c2 = `as.logical`(r15);
    if c2 then L22() else L3();
  L18():
    li = ld li;
    check L20() else D8();
  L19():
    r14 = dyn base2(<sym li>);
    goto L2(i2, r14);
  D8():
    deopt 22 [i2, li];
  L3():
    goto L5(i9);
  L5(i15):
    goto L1(i15);
  L20():
    li1 = force? li;
    checkMissing(li1);
    length = ldf length in base;
    r16 = dyn length(li1);
    check L21() else D9();
  L22():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  D9():
    deopt 25 [i2, r16];
  L4(i14, r18):
    st x = r18;
    goto L5(i14);
  L21():
    goto L2(i2, r16);
  L23():
    x1 = ld x;
    check L25() else D10();
  L24():
    r17 = dyn base3(<sym x>, <sym li>);
    goto L4(i9, r17);
  D10():
    deopt 28 [i9, x1];
  L25():
    x2 = force? x1;
    checkMissing(x2);
    li2 = ld li;
    check L26() else D11();
  D11():
    deopt 30 [i9, li2];
  L26():
    li3 = force? li2;
    checkMissing(li3);
    c3 = ldf c in base;
    r19 = dyn c3(x2, li3);
    check L27() else D12();
  D12():
    deopt 33 [i9, r19];
  L27():
    goto L4(i9, r19);
  }
}