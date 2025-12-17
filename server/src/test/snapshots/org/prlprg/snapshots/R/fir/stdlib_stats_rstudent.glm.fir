fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner579411538;
    st `rstudent.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner579411538(model, infl, `...`) {
  (reg model:*, reg infl:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `...`:dots?, reg infl1:*, reg infl2:V, reg c:L, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg r6:*, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg r13:V, reg r14:*, reg r15:V, reg r16:V, reg infl5:*, reg infl6:V, reg c1:L, reg r19:V, reg r20:V, reg infl8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r23:V, reg r24:V, reg dx3:V, reg r25:V, reg infl9:*, reg infl10:V, reg c2:L, reg r28:V, reg r29:V, reg dx5:V, reg infl12:V, reg dr4:V, reg dc2:L, reg dx7:V, reg r32:V, reg r33:V, reg dx8:V, reg dx9:V, reg r34:V, reg r35:V, reg r36:V, reg infl13:*, reg infl14:V, reg c3:L, reg r41:V, reg r42:V, reg r43:V, reg r44:R, reg infl16:V, reg dr6:V, reg dc3:L, reg dx10:V, reg r49:V, reg r50:V, reg r51:V, reg r52:R, reg dx11:V, reg r53:V, reg r54:V, reg r55:V, reg r56:V, reg r57:V, reg r58:V, reg l:*, reg c4:L, reg r60:R, reg l2:*, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r67:V, reg r68:R, reg l5:*, reg r69:R, reg r70:V, reg r71:*, reg r72:V, reg is_infinite:cls, reg r73:V, reg ___:cls, reg r74:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r75:V, reg r76:V, reg family:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r78:V, reg c5:L, reg r80:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r81:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r82:V, reg dx18:V, reg r83:V, reg c6:cls, reg r84:V, reg r85:V, reg any:cls, reg r86:V, reg c7:L, reg r87:*, reg r88:V, reg r89:*, reg r90:V, reg infl17:*, reg infl18:V, reg c8:L, reg r92:V, reg infl20:V, reg dr12:V, reg dc6:L, reg dx19:V, reg r94:V, reg dx20:V, reg r95:V, reg r96:V |
    mkenv;
    st model = model;
    infl_isMissing = missing.0(infl);
    if infl_isMissing then L0() else L1(infl);
  L0():
    p1 = prom<V +>{
      influence = ldf influence;
      p = prom<V +>{
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        return model2;
      };
      r1 = dyn influence[, `do.coef`](p, FALSE);
      return r1;
    };
    goto L1(p1);
  L1(infl_orDefault):
    st infl = infl_orDefault;
    st `...` = ddd;
    infl1 = ld infl;
    check L9() else D0();
  D0():
    deopt 0 [infl1];
  L9():
    infl2 = force? infl1;
    checkMissing(infl2);
    c = `is.object`(infl2);
    if c then L11() else L12(infl2);
  L10(dx1):
    st r = dx1;
    sym = ldf sign;
    base = ldf sign in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L11():
    dr = tryDispatchBuiltin.1("$", infl2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(infl4):
    r3 = `$`(infl4, <sym dev.res>);
    goto L10(r3);
  L2(r5):
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    r6 = ld r;
    check L16() else D1();
  L15():
    r4 = dyn base(<sym r>);
    goto L2(r4);
  D1():
    deopt 5 [r6];
  L3(r12, r13):
    r58 = `*`(r12, r13);
    st r = r58;
    l = ld r;
    c4 = `is.object`(l);
    if c4 then L35() else L36(NA_REAL, l);
  L16():
    r7 = force? r6;
    checkMissing(r7);
    r8 = sign(r7);
    goto L2(r8);
  L17():
    r14 = ld r;
    check L19() else D2();
  L18():
    r11 = dyn base1(<lang `+`(`^`(r, 2.0), `/`(`(`(`*`(`$`(infl, hat), `^`(`$`(infl, pear.res), 2.0))), `(`(`-`(1.0, `$`(infl, hat)))))>);
    goto L3(r5, r11);
  D2():
    deopt 8 [r5, r14];
  L4(dx13):
    st r = dx13;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L19():
    r15 = force? r14;
    checkMissing(r15);
    r16 = `^`(r15, 2.0);
    infl5 = ld infl;
    check L20() else D3();
  L35():
    dr8 = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L37() else L36(NA_REAL, dr8);
  L36(r60, l2):
    sym2 = ldf `is.infinite`;
    base2 = ldf `is.infinite` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D3():
    deopt 11 [r5, r16, infl5];
  L5(r68, l5, r69, r70):
    ___ = ldf `[<-` in base;
    r74 = dyn ___(l5, r69, r70);
    goto L4(r74);
  L6(r76):
    c7 = `as.logical`(r76);
    if c7 then L54() else L8();
  L20():
    infl6 = force? infl5;
    checkMissing(infl6);
    c1 = `is.object`(infl6);
    if c1 then L22() else L23(r5, r16, infl6);
  L37():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx12);
  L38():
    r71 = ld r;
    check L40() else D6();
  L39():
    r67 = dyn base2(<sym r>);
    goto L5(r60, l2, NA_REAL, r67);
  L42():
    family = ldf family;
    check L44() else D8();
  L43():
    r75 = dyn base3(<lang `==`(`$`(family(model), family), c("binomial", "poisson"))>);
    goto L6(r75);
  D6():
    deopt 33 [r60, l2, NA_REAL, r71];
  D8():
    deopt 42 [];
  L8():
    r89 = ld r;
    check L57() else D13();
  L21(r23, r24, dx3):
    infl9 = ld infl;
    check L25() else D4();
  L22():
    dr2 = tryDispatchBuiltin.1("$", infl6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(r5, r16, dr2);
  L23(r19, r20, infl8):
    r25 = `$`(infl8, <sym hat>);
    goto L21(r19, r20, r25);
  L40():
    r72 = force? r71;
    checkMissing(r72);
    is_infinite = ldf `is.infinite` in base;
    r73 = dyn is_infinite(r72);
    check L41() else D7();
  L44():
    p2 = prom<V +>{
      model3 = ld model;
      model4 = force? model3;
      checkMissing(model4);
      return model4;
    };
    r78 = dyn family(p2);
    check L45() else D9();
  L54():
    r87 = ld r;
    check L55() else D12();
  D4():
    deopt 13 [r23, r24, dx3, infl9];
  D7():
    deopt 36 [r60, l2, NA_REAL, r73];
  D9():
    deopt 44 [r78];
  D12():
    deopt 54 [r87];
  D13():
    deopt 56 [r89];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(r5, r16, dx2);
  L25():
    infl10 = force? infl9;
    checkMissing(infl10);
    c2 = `is.object`(infl10);
    if c2 then L27() else L28(r23, r24, dx3, infl10);
  L41():
    goto L5(r60, l2, NA_REAL, r73);
  L45():
    c5 = `is.object`(r78);
    if c5 then L47() else L48(r78);
  L55():
    r88 = force? r87;
    checkMissing(r88);
    popenv;
    return r88;
  L57():
    r90 = force? r89;
    checkMissing(r90);
    infl17 = ld infl;
    check L58() else D14();
  D14():
    deopt 57 [r90, infl17];
  L26(r32, r33, dx8, dx9):
    r35 = `^`(dx9, 2.0);
    r36 = `*`(dx8, r35);
    infl13 = ld infl;
    check L30() else D5();
  L27():
    dr4 = tryDispatchBuiltin.1("$", infl10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(r23, r24, dx3, dr4);
  L28(r28, r29, dx5, infl12):
    r34 = `$`(infl12, <sym pear.res>);
    goto L26(r28, r29, dx5, r34);
  L46(dx15):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L47():
    dr10 = tryDispatchBuiltin.1("$", r78);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L49() else L48(dr10);
  L48(r80):
    r81 = `$`(r80, <sym family>);
    goto L46(r81);
  L58():
    infl18 = force? infl17;
    checkMissing(infl18);
    c8 = `is.object`(infl18);
    if c8 then L60() else L61(r90, infl18);
  D5():
    deopt 19 [r32, r33, r36, 1.0, infl13];
  L7(dx18, r83):
    r85 = `==`(dx18, r83);
    any = ldf any in base;
    r86 = dyn any(r85);
    check L53() else D11();
  L29():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L26(r23, r24, dx3, dx7);
  L30():
    infl14 = force? infl13;
    checkMissing(infl14);
    c3 = `is.object`(infl14);
    if c3 then L32() else L33(r32, r33, r36, 1.0, infl14);
  L49():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L46(dx14);
  L50():
    c6 = ldf c in base;
    r84 = dyn c6("binomial", "poisson");
    check L52() else D10();
  L51():
    r82 = dyn base4("binomial", "poisson");
    goto L7(dx15, r82);
  L59(r94, dx20):
    r96 = `/`(r94, dx20);
    popenv;
    return r96;
  L60():
    dr12 = tryDispatchBuiltin.1("$", infl18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L62() else L61(r90, dr12);
  L61(r92, infl20):
    r95 = `$`(infl20, <sym sigma>);
    goto L59(r92, r95);
  D10():
    deopt 50 [dx15, r84];
  D11():
    deopt 53 [r86];
  L31(r49, r50, r51, r52, dx11):
    r54 = `-`(r52, dx11);
    r55 = `/`(r51, r54);
    r56 = `+`(r50, r55);
    r57 = sqrt(r56);
    goto L3(r49, r57);
  L32():
    dr6 = tryDispatchBuiltin.1("$", infl14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(r32, r33, r36, 1.0, dr6);
  L33(r41, r42, r43, r44, infl16):
    r53 = `$`(infl16, <sym hat>);
    goto L31(r41, r42, r43, r44, r53);
  L52():
    goto L7(dx15, r84);
  L53():
    goto L6(r86);
  L62():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L59(r90, dx19);
  L34():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L31(r32, r33, r36, 1.0, dx10);
  }
}