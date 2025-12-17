fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner913928130;
    st `.ambiguousMethodMessage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cond1:*, reg cond2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg selected:*, reg selected1:V, reg c:V, reg c1:L, reg message:cls, reg cond3:*, reg cond4:V, reg c2:L, reg cond6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg cond7:*, reg cond8:V, reg attr1:cls, reg r10:V, reg message1:cls, reg gettextf:cls, reg sQuote:cls, reg selected2:*, reg selected3:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg sQuote1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg cond9:*, reg cond10:V, reg attr2:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg sQuote2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg cond11:*, reg cond12:V, reg attr3:cls, reg r22:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg paste0:cls, reg possible:*, reg possible1:V, reg c3:L, reg possible3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg possible6:V, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg possible9:V, reg r29:V, reg possible10:*, reg possible11:V, reg selected4:*, reg selected5:V, reg match:cls, reg r30:V, reg is_na:cls, reg r31:V, reg __:cls, reg r32:V, reg p7:p(V +), reg r34:V, reg p8:p(V +), reg r36:V, reg p9:p(V +), reg r38:V |
    mkenv;
    st cond = cond;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st selected = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    cond1 = ld cond;
    check L6() else D0();
  L5():
    r = dyn base(<sym cond>, "selected");
    goto L0(r);
  D0():
    deopt 2 [cond1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L11() else L2();
  L6():
    cond2 = force? cond1;
    checkMissing(cond2);
    attr = ldf attr in base;
    r2 = dyn attr(cond2, "selected");
    check L7() else D1();
  L8():
    selected = ld selected;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym selected>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [selected];
  L2():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L7():
    goto L0(r2);
  L10():
    selected1 = force? selected;
    checkMissing(selected1);
    c = `==`(selected1, NULL);
    goto L1(c);
  L11():
    message = ldf message;
    check L12() else D3();
  D3():
    deopt 13 [];
  L3(r9):
    st possible = r9;
    message1 = ldf message;
    check L19() else D7();
  L12():
    p = prom<V +>{
      cond3 = ld cond;
      cond4 = force? cond3;
      checkMissing(cond4);
      c2 = `is.object`(cond4);
      if c2 then L1() else L2(cond4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", cond4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(cond6):
      r5 = `$`(cond6, <sym message>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn message(p);
    check L13() else D4();
  L15():
    cond7 = ld cond;
    check L17() else D5();
  L16():
    r8 = dyn base2(<sym cond>, "candidates");
    goto L3(r8);
  D4():
    deopt 15 [r7];
  D5():
    deopt 18 [cond7];
  D7():
    deopt 25 [];
  L13():
    popenv;
    return r7;
  L17():
    cond8 = force? cond7;
    checkMissing(cond8);
    attr1 = ldf attr in base;
    r10 = dyn attr1(cond8, "candidates");
    check L18() else D6();
  L19():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p1 = prom<V +>{
          selected2 = ld selected;
          selected3 = force? selected2;
          checkMissing(selected3);
          return selected3;
        };
        r12 = dyn sQuote(p1);
        return r12;
      };
      p4 = prom<V +>{
        sQuote1 = ldf sQuote;
        p3 = prom<V +>{
          sym3 = ldf attr;
          base3 = ldf attr in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r15):
          return r15;
        L1():
          cond9 = ld cond;
          cond10 = force? cond9;
          checkMissing(cond10);
          attr2 = ldf attr in base;
          r16 = dyn attr2(cond10, "generic");
          goto L0(r16);
        L2():
          r14 = dyn base3(<sym cond>, "generic");
          goto L0(r14);
        };
        r18 = dyn sQuote1(p3);
        return r18;
      };
      p6 = prom<V +>{
        sQuote2 = ldf sQuote;
        p5 = prom<V +>{
          sym4 = ldf attr;
          base4 = ldf attr in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r21):
          return r21;
        L1():
          cond11 = ld cond;
          cond12 = force? cond11;
          checkMissing(cond12);
          attr3 = ldf attr in base;
          r22 = dyn attr3(cond12, "target");
          goto L0(r22);
        L2():
          r20 = dyn base4(<sym cond>, "target");
          goto L0(r20);
        };
        r24 = dyn sQuote2(p5);
        return r24;
      };
      p8 = prom<V +>{
        paste0 = ldf paste0;
        p7 = prom<V +>{
          possible = ld possible;
          possible1 = force? possible;
          checkMissing(possible1);
          c3 = `is.object`(possible1);
          if c3 then L3() else L4(possible1);
        L0(dx3):
          return dx3;
        L3():
          dr2 = tryDispatchBuiltin.1("[", possible1);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L5() else L4(dr2);
        L4(possible3):
          sym5 = ldf `is.na`;
          base5 = ldf `is.na` in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L6() else L7();
        L1(possible6, r27):
          __ = ldf `[` in base;
          r32 = dyn __(possible6, r27);
          goto L0(r32);
        L5():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        L6():
          sym6 = ldf match;
          base6 = ldf match in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L8() else L9();
        L7():
          r26 = dyn base5(<lang match(possible, selected)>);
          goto L1(possible3, r26);
        L2(possible9, r29):
          is_na = ldf `is.na` in base;
          r31 = dyn is_na(r29);
          goto L1(possible9, r31);
        L8():
          possible10 = ld possible;
          possible11 = force? possible10;
          checkMissing(possible11);
          selected4 = ld selected;
          selected5 = force? selected4;
          checkMissing(selected5);
          match = ldf match in base;
          r30 = dyn match(possible11, selected5, NA_INT, NULL);
          goto L2(possible3, r30);
        L9():
          r28 = dyn base6(<sym possible>, <sym selected>);
          goto L2(possible3, r28);
        };
        r34 = dyn paste0[, , , collapse]("\"", p7, "\"", ", ");
        return r34;
      };
      r36 = dyn gettextf("Note: method with signature %s chosen for function %s,\n target signature %s.\n %s would also be valid", p2, p4, p6, p8);
      return r36;
    };
    r38 = dyn message1[, domain](p9, NA_LGL);
    check L20() else D8();
  D6():
    deopt 22 [r10];
  D8():
    deopt 29 [r38];
  L18():
    goto L3(r10);
  L20():
    popenv;
    return r38;
  }
}