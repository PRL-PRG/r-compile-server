fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1393468250;
    st `regularize.values` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1393468250(x, y, ties, `warn.collapsing`, `na.rm`) {
  (reg x:*, reg y:*, reg ties:*, reg warn_collapsing:*, reg na_rm:*) -+> V { var x:*, var y:*, var ties:*, var `warn.collapsing`:*, reg warn_collapsing_isMissing:L, reg warn_collapsing_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg xy_coords:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg x7:*, reg x8:V, reg c1:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x11:*, reg x12:V, reg is_na:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg r14:V, reg y3:*, reg y4:V, reg is_na1:cls, reg r15:V, reg r16:V, reg any:cls, reg r17:V, reg c2:L, reg na:*, reg na1:V, reg r18:V, reg na_rm1:*, reg na_rm2:V, reg c3:L, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok:*, reg ok1:V, reg __:cls, reg r19:V, reg y5:*, reg y6:V, reg c5:L, reg y8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ok2:*, reg ok3:V, reg __1:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg x17:*, reg x18:V, reg length:cls, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg ok4:*, reg ok5:V, reg sum:cls, reg r26:V, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg x19:*, reg x20:V, reg length1:cls, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg ties1:*, reg ties2:V, reg identical:cls, reg r32:V, reg r33:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg ties3:*, reg ties4:V, reg is_function:cls, reg r36:V, reg c7:L, reg c8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg c12:L, reg r38:V, reg ties5:*, reg ties6:V, reg c13:L, reg c14:L, reg c15:V, reg c17:L, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg ties7:*, reg ties8:V, reg is_list:cls, reg r42:V, reg c18:L, reg c20:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg c23:L, reg r44:V, reg ties9:*, reg ties10:V, reg length2:cls, reg r45:V, reg r46:V, reg c24:L, reg c25:V, reg c27:L, reg c29:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r47:V, reg c32:L, reg r48:V, reg T:*, reg T1:V, reg c33:L, reg c35:L, reg T3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c37:L, reg dx9:V, reg __2:cls, reg r49:V, reg is_function1:cls, reg r50:V, reg c38:L, reg c39:V, reg c41:L, reg T4:*, reg T5:V, reg c42:L, reg T7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r51:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r52:V, reg r53:V, reg T8:*, reg T9:V, reg c43:L, reg T11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r54:V, reg identical1:cls, reg r55:V, reg stop:cls, reg r56:V, reg ordered:*, reg ordered1:V, reg r57:V, reg c44:L, reg c46:V, reg is_unsorted:cls, reg keptNA:*, reg keptNA1:V, reg c47:L, reg x21:*, reg x22:V, reg c48:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ok6:*, reg ok7:V, reg __5:cls, reg r58:V, reg x25:*, reg x26:V, reg p2:p(V +), reg r60:V, reg c49:L, reg c50:V, reg c52:L, reg order:cls, reg x27:*, reg x28:V, reg p3:p(V +), reg r62:V, reg x29:*, reg x30:V, reg c53:L, reg x32:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg o:*, reg o1:V, reg __6:cls, reg r63:V, reg y9:*, reg y10:V, reg c54:L, reg y12:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg o2:*, reg o3:V, reg __7:cls, reg r64:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r65:V, reg r66:V, reg unique:cls, reg x33:*, reg x34:V, reg p4:p(V +), reg r68:V, reg length3:cls, reg r69:V, reg nx:*, reg nx1:V, reg r70:V, reg c55:L, reg warn_collapsing1:*, reg warn_collapsing2:V, reg c56:L, reg warning:cls, reg r71:V, reg as_vector:cls, reg tapply:cls, reg y13:*, reg y14:V, reg p5:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r74:V, reg r75:V, reg x35:*, reg x36:V, reg x37:*, reg x38:V, reg match:cls, reg r76:V, reg p6:p(V +), reg ties11:*, reg ties12:V, reg p7:p(V +), reg r79:V, reg p8:p(V +), reg r81:V, reg ux:*, reg ux1:V, reg stopifnot:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r82:V, reg r83:V, reg y15:*, reg y16:V, reg length4:cls, reg r84:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r87:V, reg r88:V, reg r89:V, reg x39:*, reg x40:V, reg length5:cls, reg r90:V, reg r91:V, reg p9:p(V +), reg r93:V, reg keptNA2:*, reg keptNA3:V, reg c57:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg r95:V, reg x41:*, reg x42:V, reg is_na2:cls, reg r96:V, reg r97:V, reg r98:V, reg r99:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r101:V, reg r102:V, reg x43:*, reg x44:V, reg y17:*, reg y18:V, reg keptNA4:*, reg keptNA5:V, reg keptNA6:*, reg keptNA7:V, reg c58:L, reg ok8:*, reg ok9:V, reg ok10:V, reg list:cls, reg r103:V |
    mkenv;
    st x = x;
    st y = y;
    st ties = ties;
    warn_collapsing_isMissing = missing.0(warn_collapsing);
    if warn_collapsing_isMissing then L0(TRUE) else L0(warn_collapsing);
  L0(warn_collapsing_orDefault):
    st `warn.collapsing` = warn_collapsing_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L1(TRUE) else L1(na_rm);
  L1(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    xy_coords = ldf `xy.coords`;
    check L46() else D0();
  D0():
    deopt 1 [];
  L46():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn xy_coords[, , setLab](p, p1, FALSE);
    check L47() else D1();
  D1():
    deopt 6 [r2];
  L47():
    st x = r2;
    x3 = ld x;
    check L48() else D2();
  D2():
    deopt 8 [x3];
  L48():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L50() else L51(x4);
  L49(dx1):
    st y = dx1;
    x7 = ld x;
    check L53() else D3();
  L50():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(dr);
  L51(x6):
    r3 = `$`(x6, <sym y>);
    goto L49(r3);
  D3():
    deopt 12 [x7];
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L49(dx);
  L53():
    x8 = force? x7;
    checkMissing(x8);
    c1 = `is.object`(x8);
    if c1 then L55() else L56(x8);
  L54(dx3):
    st x = dx3;
    st keptNA = FALSE;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L55():
    dr2 = tryDispatchBuiltin.1("$", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(dr2);
  L56(x10):
    r4 = `$`(x10, <sym x>);
    goto L54(r4);
  L2(r6):
    c2 = `as.logical`(r6);
    if c2 then L69() else L5();
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L54(dx2);
  L58():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L59():
    r5 = dyn base(<lang `<-`(na, `|`(is.na(x), is.na(y)))>);
    goto L2(r5);
  L3(r8):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  L5():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L93() else L94();
  L11(r27):
    st nx = r27;
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L97() else L98();
  L60():
    x11 = ld x;
    check L62() else D4();
  L61():
    r7 = dyn base1(<sym x>);
    goto L3(r7);
  L69():
    na = ld na;
    check L70() else D9();
  D4():
    deopt 23 [x11];
  D9():
    deopt 36 [na];
  L4(r13, r14):
    r16 = `||`(r13, r14);
    st na = r16;
    any = ldf any in base;
    r17 = dyn any(r16);
    check L68() else D8();
  L12(r31):
    r33 = `!`(r31);
    c6 = `as.logical`(r33);
    if c6 then L101() else L13();
  L62():
    x12 = force? x11;
    checkMissing(x12);
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(x12);
    check L63() else D5();
  L64():
    y3 = ld y;
    check L66() else D6();
  L65():
    r12 = dyn base2(<sym y>);
    goto L4(r8, r12);
  L70():
    na1 = force? na;
    checkMissing(na1);
    r18 = `!`(na1);
    st ok = r18;
    na_rm1 = ld `na.rm`;
    check L71() else D10();
  L93():
    x19 = ld x;
    check L95() else D19();
  L94():
    r28 = dyn base5(<sym x>);
    goto L11(r28);
  L97():
    ties1 = ld ties;
    check L99() else D21();
  L98():
    r30 = dyn base6(<sym ties>, "ordered");
    goto L12(r30);
  D5():
    deopt 26 [r9];
  D6():
    deopt 28 [r8, y3];
  D8():
    deopt 35 [r17];
  D10():
    deopt 40 [na_rm1];
  D19():
    deopt 71 [x19];
  D21():
    deopt 78 [ties1];
  L13():
    goto L42();
  L42():
    sym18 = ldf list;
    base18 = ldf list in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L192() else L193();
  L63():
    goto L3(r9);
  L66():
    y4 = force? y3;
    checkMissing(y4);
    is_na1 = ldf `is.na` in base;
    r15 = dyn is_na1(y4);
    check L67() else D7();
  L68():
    goto L2(r17);
  L71():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c3 = `as.logical`(na_rm2);
    if c3 then L72() else L6();
  L95():
    x20 = force? x19;
    checkMissing(x20);
    length1 = ldf length in base;
    r29 = dyn length1(x20);
    check L96() else D20();
  L99():
    ties2 = force? ties1;
    checkMissing(ties2);
    identical = ldf identical in base;
    r32 = dyn identical(ties2, "ordered", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L100() else D22();
  L101():
    sym7 = ldf `is.function`;
    base7 = ldf `is.function` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L102() else L103();
  D7():
    deopt 31 [r8, r15];
  D20():
    deopt 74 [r29];
  D22():
    deopt 89 [r32];
  L6():
    st keptNA = TRUE;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L10(r24):
    goto L11(r24);
  L14(r35):
    c7 = `as.logical`(r35);
    if c7 then L15(c7) else L106();
  L43(r102):
    popenv;
    return r102;
  L67():
    goto L4(r8, r15);
  L72():
    x13 = ld x;
    check L73() else D11();
  L96():
    goto L11(r29);
  L100():
    goto L12(r32);
  L102():
    ties3 = ld ties;
    check L104() else D23();
  L103():
    r34 = dyn base7(<sym ties>);
    goto L14(r34);
  L192():
    x43 = ld x;
    check L194() else D61();
  L193():
    r101 = dyn base18[x, y, keptNA, notNA](<sym x>, <sym y>, <sym keptNA>, <lang if(keptNA, ok)>);
    goto L43(r101);
  D11():
    deopt 42 [x13];
  D23():
    deopt 93 [ties3];
  D61():
    deopt 234 [x43];
  L15(c8):
    c17 = `as.logical`(c8);
    if c17 then L111() else L17();
  L73():
    x14 = force? x13;
    checkMissing(x14);
    c4 = `is.object`(x14);
    if c4 then L74() else L75(x14);
  L88():
    ok4 = ld ok;
    check L90() else D17();
  L89():
    r25 = dyn base4(<sym ok>);
    goto L10(r25);
  L104():
    ties4 = force? ties3;
    checkMissing(ties4);
    is_function = ldf `is.function` in base;
    r36 = dyn is_function(ties4);
    check L105() else D24();
  L106():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  L194():
    x44 = force? x43;
    checkMissing(x44);
    y17 = ld y;
    check L195() else D62();
  D17():
    deopt 65 [ok4];
  D24():
    deopt 96 [r36];
  D62():
    deopt 237 [y17];
  L7(dx5):
    st x = dx5;
    y5 = ld y;
    check L78() else D13();
  L16(c12, r38):
    c14 = `as.logical`(r38);
    c15 = `||`(c12, c14);
    goto L15(c15);
  L17():
    sym9 = ldf `is.list`;
    base9 = ldf `is.list` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L113() else L114();
  L18(r39):
    st ordered = r39;
    ordered = ld ordered;
    check L147() else D37();
  L74():
    dr4 = tryDispatchBuiltin.1("[", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L76() else L75(dr4);
  L75(x16):
    ok = ld ok;
    check L77() else D12();
  L90():
    ok5 = force? ok4;
    checkMissing(ok5);
    sum = ldf sum in base;
    r26 = dyn sum(ok5);
    check L91() else D18();
  L105():
    goto L14(r36);
  L107():
    ties5 = ld ties;
    check L109() else D25();
  L108():
    r37 = dyn base8(<sym ties>);
    goto L16(c7, r37);
  L111():
    goto L18(FALSE);
  L195():
    y18 = force? y17;
    checkMissing(y18);
    keptNA4 = ld keptNA;
    check L196() else D63();
  D12():
    deopt 44 [x16, ok];
  D13():
    deopt 48 [y5];
  D18():
    deopt 68 [r26];
  D25():
    deopt 98 [c7, ties5];
  D37():
    deopt 158 [ordered];
  D63():
    deopt 240 [keptNA4];
  L19(r41):
    c18 = `as.logical`(r41);
    if c18 then L117() else L20(c18);
  L76():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L77():
    ok1 = force? ok;
    __ = ldf `[` in base;
    r19 = dyn __(x16, ok1);
    goto L7(r19);
  L78():
    y6 = force? y5;
    checkMissing(y6);
    c5 = `is.object`(y6);
    if c5 then L79() else L80(y6);
  L91():
    goto L10(r26);
  L109():
    ties6 = force? ties5;
    checkMissing(ties6);
    c13 = `is.character`(ties6);
    goto L16(c7, c13);
  L113():
    ties7 = ld ties;
    check L115() else D26();
  L114():
    r40 = dyn base9(<sym ties>);
    goto L19(r40);
  L147():
    ordered1 = force? ordered;
    checkMissing(ordered1);
    r57 = `!`(ordered1);
    c44 = `as.logical`(r57);
    if c44 then L148() else L29(c44);
  L196():
    keptNA5 = force? keptNA4;
    checkMissing(keptNA5);
    keptNA6 = ld keptNA;
    check L197() else D64();
  D26():
    deopt 106 [ties7];
  D64():
    deopt 243 [keptNA6];
  L8(dx7):
    st y = dx7;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L20(c20):
    c27 = `as.logical`(c20);
    if c27 then L123() else L22(c27);
  L29(c46):
    c52 = `as.logical`(c46);
    if c52 then L152() else L30();
  L79():
    dr6 = tryDispatchBuiltin.1("[", y6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L81() else L80(dr6);
  L80(y8):
    ok2 = ld ok;
    check L82() else D14();
  L115():
    ties8 = force? ties7;
    checkMissing(ties8);
    is_list = ldf `is.list` in base;
    r42 = dyn is_list(ties8);
    check L116() else D27();
  L117():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L118() else L119();
  L148():
    is_unsorted = ldf `is.unsorted`;
    check L149() else D38();
  L197():
    keptNA7 = force? keptNA6;
    checkMissing(keptNA7);
    c58 = `as.logical`(keptNA7);
    if c58 then L198() else L44();
  D14():
    deopt 50 [y8, ok2];
  D27():
    deopt 109 [r42];
  D38():
    deopt 162 [c44];
  L9(r22):
    goto L10(r22);
  L21(c23, r44):
    r46 = `==`(r44, 2);
    c24 = `as.logical`(r46);
    c25 = `&&`(c23, c24);
    goto L20(c25);
  L22(c29):
    c41 = `as.logical`(c29);
    if c41 then L132() else L25();
  L30():
    goto L33();
  L33():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L44():
    goto L45(NULL);
  L45(ok10):
    list = ldf list in base;
    r103 = dyn list(x44, y18, keptNA5, ok10);
    check L201() else D66();
  L81():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L82():
    ok3 = force? ok2;
    __1 = ldf `[` in base;
    r20 = dyn __1(y8, ok3);
    goto L8(r20);
  L83():
    x17 = ld x;
    check L85() else D15();
  L84():
    r21 = dyn base3(<sym x>);
    goto L9(r21);
  L116():
    goto L19(r42);
  L118():
    ties9 = ld ties;
    check L120() else D28();
  L119():
    r43 = dyn base10(<lang `<-`(T, ties)>);
    goto L21(c18, r43);
  L123():
    sym11 = ldf `is.function`;
    base11 = ldf `is.function` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L124() else L125();
  L149():
    p2 = prom<V +>{
      keptNA = ld keptNA;
      keptNA1 = force? keptNA;
      checkMissing(keptNA1);
      c47 = `as.logical`(keptNA1);
      if c47 then L2() else L0();
    L0():
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    L2():
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c48 = `is.object`(x22);
      if c48 then L3() else L4(x22);
    L1(dx15):
      return dx15;
    L3():
      dr14 = tryDispatchBuiltin.1("[", x22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L5() else L4(dr14);
    L4(x24):
      ok6 = ld ok;
      ok7 = force? ok6;
      __5 = ldf `[` in base;
      r58 = dyn __5(x24, ok7);
      goto L1(r58);
    L5():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx14);
    };
    r60 = dyn is_unsorted(p2);
    check L150() else D39();
  L152():
    order = ldf order;
    check L153() else D40();
  L198():
    ok8 = ld ok;
    check L199() else D65();
  D15():
    deopt 56 [x17];
  D28():
    deopt 112 [c18, ties9];
  D39():
    deopt 164 [c44, r60];
  D40():
    deopt 167 [];
  D65():
    deopt 245 [ok8];
  D66():
    deopt 251 [r103];
  L23(c32, r48):
    c38 = `as.logical`(r48);
    c39 = `&&`(c32, c38);
    goto L22(c39);
  L25():
    stop = ldf stop;
    check L145() else D35();
  L34(r66):
    nx = ld nx;
    check L171() else D49();
  L85():
    x18 = force? x17;
    checkMissing(x18);
    length = ldf length in base;
    r23 = dyn length(x18);
    check L86() else D16();
  L120():
    ties10 = force? ties9;
    checkMissing(ties10);
    st T = ties10;
    length2 = ldf length in base;
    r45 = dyn length2(ties10);
    check L121() else D29();
  L124():
    T = ld T;
    check L126() else D30();
  L125():
    r47 = dyn base11(<lang `[[`(T, 2.0)>);
    goto L23(c27, r47);
  L132():
    T4 = ld T;
    check L133() else D32();
  L150():
    c49 = `as.logical`(r60);
    c50 = `&&`(c44, c49);
    goto L29(c50);
  L153():
    p3 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    r62 = dyn order(p3);
    check L154() else D41();
  L166():
    unique = ldf unique;
    check L168() else D46();
  L167():
    r65 = dyn base13(<lang `<-`(ux, unique(x))>);
    goto L34(r65);
  L199():
    ok9 = force? ok8;
    checkMissing(ok9);
    goto L45(ok9);
  L201():
    goto L43(r103);
  D16():
    deopt 59 [r23];
  D29():
    deopt 116 [c18, r45];
  D30():
    deopt 122 [c27, T];
  D32():
    deopt 130 [T4];
  D35():
    deopt 154 [];
  D41():
    deopt 169 [r62];
  D46():
    deopt 188 [];
  D49():
    deopt 193 [r66, nx];
  L86():
    goto L9(r23);
  L121():
    goto L21(c18, r45);
  L126():
    T1 = force? T;
    checkMissing(T1);
    c33 = `is.object`(T1);
    if c33 then L127() else L128(c27, T1);
  L133():
    T5 = force? T4;
    checkMissing(T5);
    c42 = `is.object`(T5);
    if c42 then L134() else L135(T5);
  L145():
    r56 = dyn stop("'ties' is not \"ordered\", a function, or list(<string>, <function>)");
    check L146() else D36();
  L154():
    st o = r62;
    x29 = ld x;
    check L155() else D42();
  L168():
    p4 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r68 = dyn unique(p4);
    check L169() else D47();
  L171():
    nx1 = force? nx;
    checkMissing(nx1);
    r70 = `<`(r66, nx1);
    c55 = `as.logical`(r70);
    if c55 then L172() else L35();
  D36():
    deopt 156 [r56];
  D42():
    deopt 171 [x29];
  D47():
    deopt 190 [r68];
  L24(c37, dx9):
    is_function1 = ldf `is.function` in base;
    r50 = dyn is_function1(dx9);
    check L130() else D31();
  L26(dx11):
    st ties = dx11;
    sym12 = ldf identical;
    base12 = ldf identical in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L137() else L138();
  L35():
    goto L41(NULL);
  L41(r99):
    goto L42();
  L127():
    dr8 = tryDispatchBuiltin.1("[[", T1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L129() else L128(c27, dr8);
  L128(c35, T3):
    __2 = ldf `[[` in base;
    r49 = dyn __2(T3, 2.0);
    goto L24(c35, r49);
  L134():
    dr10 = tryDispatchBuiltin.1("[[", T5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L136() else L135(dr10);
  L135(T7):
    __3 = ldf `[[` in base;
    r51 = dyn __3(T7, 2.0);
    goto L26(r51);
  L146():
    goto L18(r56);
  L155():
    x30 = force? x29;
    checkMissing(x30);
    c53 = `is.object`(x30);
    if c53 then L156() else L157(x30);
  L169():
    st ux = r68;
    length3 = ldf length in base;
    r69 = dyn length3(r68);
    check L170() else D48();
  L172():
    warn_collapsing1 = ld `warn.collapsing`;
    check L173() else D50();
  D31():
    deopt 128 [c37, r50];
  D48():
    deopt 193 [r69];
  D50():
    deopt 196 [warn_collapsing1];
  L27(r53):
    goto L18(r53);
  L31(dx17):
    st x = dx17;
    y9 = ld y;
    check L160() else D44();
  L129():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(c27, dx8);
  L130():
    goto L23(c37, r50);
  L136():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx10);
  L137():
    T8 = ld T;
    check L139() else D33();
  L138():
    r52 = dyn base12(<lang `[[`(T, 1.0)>, "ordered");
    goto L27(r52);
  L156():
    dr16 = tryDispatchBuiltin.1("[", x30);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L158() else L157(dr16);
  L157(x32):
    o = ld o;
    check L159() else D43();
  L170():
    goto L34(r69);
  L173():
    warn_collapsing2 = force? warn_collapsing1;
    checkMissing(warn_collapsing2);
    c56 = `as.logical`(warn_collapsing2);
    if c56 then L174() else L36();
  D33():
    deopt 138 [T8];
  D43():
    deopt 173 [x32, o];
  D44():
    deopt 177 [y9];
  L36():
    goto L37();
  L37():
    as_vector = ldf `as.vector`;
    check L178() else D53();
  L139():
    T9 = force? T8;
    checkMissing(T9);
    c43 = `is.object`(T9);
    if c43 then L140() else L141(T9);
  L158():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L31(dx16);
  L159():
    o1 = force? o;
    __6 = ldf `[` in base;
    r63 = dyn __6(x32, o1);
    goto L31(r63);
  L160():
    y10 = force? y9;
    checkMissing(y10);
    c54 = `is.object`(y10);
    if c54 then L161() else L162(y10);
  L174():
    warning = ldf warning;
    check L175() else D51();
  D51():
    deopt 199 [];
  D53():
    deopt 205 [];
  L28(dx13):
    identical1 = ldf identical in base;
    r55 = dyn identical1(dx13, "ordered", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L143() else D34();
  L32(dx19):
    st y = dx19;
    goto L33();
  L140():
    dr12 = tryDispatchBuiltin.1("[[", T9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L142() else L141(dr12);
  L141(T11):
    __4 = ldf `[[` in base;
    r54 = dyn __4(T11, 1.0);
    goto L28(r54);
  L161():
    dr18 = tryDispatchBuiltin.1("[", y10);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L163() else L162(dr18);
  L162(y12):
    o2 = ld o;
    check L164() else D45();
  L175():
    r71 = dyn warning("collapsing to unique 'x' values");
    check L176() else D52();
  L178():
    p8 = prom<V +>{
      tapply = ldf tapply;
      p5 = prom<V +>{
        y13 = ld y;
        y14 = force? y13;
        checkMissing(y14);
        return y14;
      };
      p6 = prom<V +>{
        sym14 = ldf match;
        base14 = ldf match in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L1() else L2();
      L0(r75):
        return r75;
      L1():
        x35 = ld x;
        x36 = force? x35;
        checkMissing(x36);
        x37 = ld x;
        x38 = force? x37;
        checkMissing(x38);
        match = ldf match in base;
        r76 = dyn match(x36, x38, NA_INT, NULL);
        goto L0(r76);
      L2():
        r74 = dyn base14(<sym x>, <sym x>);
        goto L0(r74);
      };
      p7 = prom<V +>{
        ties11 = ld ties;
        ties12 = force? ties11;
        checkMissing(ties12);
        return ties12;
      };
      r79 = dyn tapply(p5, p6, p7);
      return r79;
    };
    r81 = dyn as_vector(p8);
    check L179() else D54();
  D34():
    deopt 152 [r55];
  D45():
    deopt 179 [y12, o2];
  D52():
    deopt 201 [r71];
  D54():
    deopt 207 [r81];
  L142():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L28(dx12);
  L143():
    goto L27(r55);
  L163():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L32(dx18);
  L164():
    o3 = force? o2;
    __7 = ldf `[` in base;
    r64 = dyn __7(y12, o3);
    goto L32(r64);
  L176():
    goto L37();
  L179():
    st y = r81;
    ux = ld ux;
    check L180() else D55();
  D55():
    deopt 209 [ux];
  L180():
    ux1 = force? ux;
    checkMissing(ux1);
    st x = ux1;
    stopifnot = ldf stopifnot;
    check L181() else D56();
  D56():
    deopt 213 [];
  L181():
    p9 = prom<V +>{
      sym15 = ldf length;
      base15 = ldf length in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L2() else L3();
    L0(r83):
      sym16 = ldf length;
      base16 = ldf length in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L4() else L5();
    L2():
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      length4 = ldf length in base;
      r84 = dyn length4(y16);
      goto L0(r84);
    L3():
      r82 = dyn base15(<sym y>);
      goto L0(r82);
    L1(r88, r89):
      r91 = `==`(r88, r89);
      return r91;
    L4():
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      length5 = ldf length in base;
      r90 = dyn length5(x40);
      goto L1(r83, r90);
    L5():
      r87 = dyn base16(<sym x>);
      goto L1(r83, r87);
    };
    r93 = dyn stopifnot(p9);
    check L182() else D57();
  D57():
    deopt 215 [r93];
  L182():
    keptNA2 = ld keptNA;
    check L183() else D58();
  D58():
    deopt 216 [keptNA2];
  L183():
    keptNA3 = force? keptNA2;
    checkMissing(keptNA3);
    c57 = `as.logical`(keptNA3);
    if c57 then L184() else L38();
  L38():
    goto L40(NULL);
  L40(r98):
    goto L41(r98);
  L184():
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L185() else L186();
  L39(r95):
    r97 = `!`(r95);
    st ok = r97;
    goto L40(r97);
  L185():
    x41 = ld x;
    check L187() else D59();
  L186():
    r94 = dyn base17(<sym x>);
    goto L39(r94);
  D59():
    deopt 220 [x41];
  L187():
    x42 = force? x41;
    checkMissing(x42);
    is_na2 = ldf `is.na` in base;
    r96 = dyn is_na2(x42);
    check L188() else D60();
  D60():
    deopt 223 [r96];
  L188():
    goto L39(r96);
  }
}