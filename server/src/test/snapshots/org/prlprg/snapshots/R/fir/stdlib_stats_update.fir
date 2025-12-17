fun main() {
  () -+> V { reg r:cls, reg options:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg gl:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg c3:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg ctl:*, reg ctl1:V, reg trt:*, reg trt1:V, reg c4:cls, reg r19:V, reg lm:cls, reg __:cls, reg r20:V, reg p2:p(V +), reg r22:V, reg lm_D9:*, reg lm_D10:V, reg summary:cls, reg update:cls, reg lm_D11:*, reg lm_D12:V, reg p3:p(V +), reg __1:cls, reg r24:V, reg p4:p(V +), reg r26:V, reg p5:p(V +), reg r28:V, reg options1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg c5:cls, reg r31:V, reg p6:p(V +), reg r33:V, reg update1:cls, reg lm_D13:*, reg lm_D14:V, reg p7:p(V +), reg r35:V, reg getCall:cls, reg lm_D90:*, reg lm_D91:V, reg p8:p(V +), reg r37:V, reg options2:cls, reg oldcon:*, reg oldcon1:V, reg p9:p(V +), reg r39:V |
    mkenv;
    r = clos inner64320599;
    st update = r;
    options = ldf options;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("contr.treatment", "contr.poly");
      goto L0(r3);
    L2():
      r1 = dyn base("contr.treatment", "contr.poly");
      goto L0(r1);
    };
    r5 = dyn options[contrasts](p);
    check L4() else D1();
  D1():
    deopt 7 [r5];
  L4():
    st oldcon = r5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r7):
    st ctl = r7;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L5():
    c1 = ldf c in base;
    r8 = dyn c1(4.17, 5.58, 5.18, 6.11, 4.5, 4.61, 5.17, 4.53, 5.33, 5.14);
    check L7() else D2();
  L6():
    r6 = dyn base1(4.17, 5.58, 5.18, 6.11, 4.5, 4.61, 5.17, 4.53, 5.33, 5.14);
    goto L0(r6);
  D2():
    deopt 22 [r8];
  L1(r10):
    st trt = r10;
    gl = ldf gl;
    check L11() else D4();
  L7():
    goto L0(r8);
  L8():
    c2 = ldf c in base;
    r11 = dyn c2(4.81, 4.17, 4.41, 3.59, 5.87, 3.83, 6.03, 4.89, 4.32, 4.69);
    check L10() else D3();
  L9():
    r9 = dyn base2(4.81, 4.17, 4.41, 3.59, 5.87, 3.83, 6.03, 4.89, 4.32, 4.69);
    goto L1(r9);
  D3():
    deopt 37 [r11];
  D4():
    deopt 40 [];
  L10():
    goto L1(r11);
  L11():
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c3 = ldf c in base;
      r14 = dyn c3("Ctl", "Trt");
      goto L0(r14);
    L2():
      r12 = dyn base3("Ctl", "Trt");
      goto L0(r12);
    };
    r16 = dyn gl[, , , labels](2.0, 10.0, 20.0, p1);
    check L12() else D5();
  D5():
    deopt 46 [r16];
  L12():
    st group = r16;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L13() else L14();
  L2(r18):
    st weight = r18;
    lm = ldf lm;
    check L18() else D9();
  L13():
    ctl = ld ctl;
    check L15() else D6();
  L14():
    r17 = dyn base4(<sym ctl>, <sym trt>);
    goto L2(r17);
  D6():
    deopt 50 [ctl];
  D9():
    deopt 58 [];
  L15():
    ctl1 = force? ctl;
    checkMissing(ctl1);
    trt = ld trt;
    check L16() else D7();
  L18():
    p2 = prom<V +>{
      __ = ldf `~` in base;
      r20 = dyn __(<sym weight>, <sym group>);
      return r20;
    };
    r22 = dyn lm(p2);
    check L19() else D10();
  D7():
    deopt 52 [trt];
  D10():
    deopt 60 [r22];
  L16():
    trt1 = force? trt;
    checkMissing(trt1);
    c4 = ldf c in base;
    r19 = dyn c4(ctl1, trt1);
    check L17() else D8();
  L19():
    st `lm.D9` = r22;
    lm_D9 = ld `lm.D9`;
    check L20() else D11();
  D8():
    deopt 55 [r19];
  D11():
    deopt 62 [lm_D9];
  L17():
    goto L2(r19);
  L20():
    lm_D10 = force? lm_D9;
    checkMissing(lm_D10);
    summary = ldf summary;
    check L21() else D12();
  D12():
    deopt 65 [];
  L21():
    p5 = prom<V +>{
      update = ldf update;
      p3 = prom<V +>{
        lm_D11 = ld `lm.D9`;
        lm_D12 = force? lm_D11;
        checkMissing(lm_D12);
        return lm_D12;
      };
      p4 = prom<V +>{
        __1 = ldf `~` in base;
        r24 = dyn __1(<sym .>, <lang `-`(., 1.0)>);
        return r24;
      };
      r26 = dyn update(p3, p4);
      st `lm.D90` = r26;
      invisible.0();
      return r26;
    };
    r28 = dyn summary(p5);
    check L22() else D13();
  D13():
    deopt 67 [r28];
  L22():
    options1 = ldf options;
    check L23() else D14();
  D14():
    deopt 69 [];
  L23():
    p6 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c5 = ldf c in base;
      r31 = dyn c5("contr.helmert", "contr.poly");
      goto L0(r31);
    L2():
      r29 = dyn base5("contr.helmert", "contr.poly");
      goto L0(r29);
    };
    r33 = dyn options1[contrasts](p6);
    check L24() else D15();
  D15():
    deopt 72 [r33];
  L24():
    update1 = ldf update;
    check L25() else D16();
  D16():
    deopt 74 [];
  L25():
    p7 = prom<V +>{
      lm_D13 = ld `lm.D9`;
      lm_D14 = force? lm_D13;
      checkMissing(lm_D14);
      return lm_D14;
    };
    r35 = dyn update1(p7);
    check L26() else D17();
  D17():
    deopt 76 [r35];
  L26():
    getCall = ldf getCall;
    check L27() else D18();
  D18():
    deopt 78 [];
  L27():
    p8 = prom<V +>{
      lm_D90 = ld `lm.D90`;
      lm_D91 = force? lm_D90;
      checkMissing(lm_D91);
      return lm_D91;
    };
    r37 = dyn getCall(p8);
    check L28() else D19();
  D19():
    deopt 80 [r37];
  L28():
    options2 = ldf options;
    check L29() else D20();
  D20():
    deopt 82 [];
  L29():
    p9 = prom<V +>{
      oldcon = ld oldcon;
      oldcon1 = force? oldcon;
      checkMissing(oldcon1);
      return oldcon1;
    };
    r39 = dyn options2(p9);
    check L30() else D21();
  D21():
    deopt 84 [r39];
  L30():
    popenv;
    return r39;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("update");
    goto L0(r2);
  L2():
    r = dyn base("update");
    goto L0(r);
  }
}