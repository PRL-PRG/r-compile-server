fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1315580161;
    st `residuals.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1315580161(object, type, `...`) {
  (reg object:*, reg type:*, reg ddd:dots) -+> V { var object:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg type3:*, reg type4:V, reg r6:V, reg c1:L, reg as_vector:cls, reg object1:*, reg object2:V, reg c2:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r8:V, reg dx6:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg val:*, reg val1:V, reg r16:V, reg sum:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg r22:V, reg val2:*, reg val3:V, reg length:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg r30:V, reg r31:V, reg coef:cls, reg object5:*, reg object6:V, reg p3:p(V +), reg r33:V, reg length1:cls, reg r34:V, reg r35:V, reg r36:V, reg r37:V, reg val4:*, reg val5:V, reg std:*, reg std1:V, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg object7:*, reg object8:V, reg c4:L, reg object10:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg r41:V, reg c5:V, reg r42:V, reg c6:L, reg naresid:cls, reg object11:*, reg object12:V, reg c7:L, reg object14:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r43:V, reg p4:p(V +), reg val6:*, reg val7:V, reg p5:p(V +), reg r46:V, reg l:*, reg attr__:cls, reg r48:V, reg as_vector1:cls, reg object15:*, reg object16:V, reg c8:L, reg object18:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r50:V, reg c9:L, reg dx14:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg r51:V, reg dx17:cls, reg r52:V, reg object19:*, reg object20:V, reg c10:L, reg r54:V, reg object22:V, reg dr12:V, reg dc6:L, reg dx18:V, reg r56:V, reg dx19:V, reg r57:V, reg c11:L, reg r59:V, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg r61:V, reg dx23:V, reg r62:V, reg dx24:cls, reg r63:V, reg r64:V, reg p6:p(V +), reg r66:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg object23:*, reg object24:V, reg c12:L, reg object26:V, reg dr16:V, reg dc8:L, reg dx25:V, reg dx26:V, reg r69:V, reg c13:V, reg r70:V, reg c14:L, reg naresid1:cls, reg object27:*, reg object28:V, reg c15:L, reg object30:V, reg dr18:V, reg dc9:L, reg dx27:V, reg dx28:V, reg r71:V, reg p7:p(V +), reg val8:*, reg val9:V, reg p8:p(V +), reg r74:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r76:V, reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg object31:*, reg object32:V, reg attr:cls, reg r80:V, reg c16:L, reg r82:V, reg dr20:V, reg dc10:L, reg dx29:V, reg dx30:V, reg r83:V, reg c17:V, reg r84:V, reg c18:L, reg paste:cls, reg lab:*, reg lab1:V, reg p9:p(V +), reg aux:*, reg aux1:V, reg p10:p(V +), reg r87:V, reg lab2:*, reg lab3:V, reg l1:*, reg attr__1:cls, reg r89:V, reg val10:*, reg val11:V |
    mkenv;
    st object = object;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("response", "pearson");
      goto L0(r2);
    L2():
      r = dyn base("response", "pearson");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L19() else D1();
  D1():
    deopt 3 [r5];
  L19():
    st type = r5;
    type3 = ld type;
    check L20() else D2();
  D2():
    deopt 5 [type3];
  L20():
    type4 = force? type3;
    checkMissing(type4);
    r6 = `==`(type4, "pearson");
    c1 = `as.logical`(r6);
    if c1 then L21() else L2();
  L2():
    as_vector1 = ldf `as.vector`;
    check L55() else D19();
  L10():
    val10 = ld val;
    check L85() else D31();
  L21():
    as_vector = ldf `as.vector`;
    check L22() else D3();
  D3():
    deopt 10 [];
  D19():
    deopt 67 [];
  D31():
    deopt 116 [val10];
  L22():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c2 = `is.object`(object2);
      if c2 then L1() else L2(object2);
    L0(dx1):
      c3 = `is.object`(dx1);
      if c3 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r7 = `$`(object4, <sym m>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      checkFun.0(dx5);
      dx6 = dx5 as cls;
      r9 = dyn dx6();
      return r9;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r8 = `$`(dx3, <sym resid>);
      goto L4(r8);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    r11 = dyn as_vector(p2);
    check L23() else D4();
  L55():
    p6 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      c8 = `is.object`(object16);
      if c8 then L1() else L2(object16);
    L0(dx12):
      c9 = `is.object`(dx12);
      if c9 then L5() else L6(dx12);
    L1():
      dr8 = tryDispatchBuiltin.1("$", object16);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object18):
      r50 = `$`(object18, <sym m>);
      goto L0(r50);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx11);
    L4(dx16):
      checkFun.0(dx16);
      dx17 = dx16 as cls;
      r52 = dyn dx17();
      object19 = ld object;
      object20 = force? object19;
      checkMissing(object20);
      c10 = `is.object`(object20);
      if c10 then L9() else L10(r52, object20);
    L5():
      dr10 = tryDispatchBuiltin.1("$", dx12);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(dr10);
    L6(dx14):
      r51 = `$`(dx14, <sym lhs>);
      goto L4(r51);
    L7():
      dx15 = getTryDispatchBuiltinValue(dr10);
      goto L4(dx15);
    L8(r56, dx19):
      c11 = `is.object`(dx19);
      if c11 then L13() else L14(r56, dx19);
    L9():
      dr12 = tryDispatchBuiltin.1("$", object20);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L11() else L10(r52, dr12);
    L10(r54, object22):
      r57 = `$`(object22, <sym m>);
      goto L8(r54, r57);
    L11():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L8(r52, dx18);
    L12(r61, dx23):
      checkFun.0(dx23);
      dx24 = dx23 as cls;
      r63 = dyn dx24();
      r64 = `-`(r61, r63);
      return r64;
    L13():
      dr14 = tryDispatchBuiltin.1("$", dx19);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L15() else L14(r56, dr14);
    L14(r59, dx21):
      r62 = `$`(dx21, <sym fitted>);
      goto L12(r59, r62);
    L15():
      dx22 = getTryDispatchBuiltinValue(dr14);
      goto L12(r56, dx22);
    };
    r66 = dyn as_vector1(p6);
    check L56() else D20();
  L85():
    val11 = force? val10;
    checkMissing(val11);
    popenv;
    return val11;
  D4():
    deopt 12 [r11];
  D20():
    deopt 69 [r66];
  L23():
    st val = r11;
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L56():
    st val = r66;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L3(r13):
    st std = r13;
    val4 = ld val;
    check L39() else D12();
  L11(r68):
    r70 = `!`(r68);
    c14 = `as.logical`(r70);
    if c14 then L64() else L12();
  L24():
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L25():
    r12 = dyn base1(<lang `/`(sum(`^`(val, 2.0)), `(`(`-`(length(val), length(coef(object)))))>);
    goto L3(r12);
  L57():
    object23 = ld object;
    check L59() else D21();
  L58():
    r67 = dyn base6(<lang `$`(object, na.action)>);
    goto L11(r67);
  D12():
    deopt 39 [val4];
  D21():
    deopt 72 [object23];
  L4(r15):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L12():
    goto L13();
  L13():
    st lab = "Residuals";
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L26():
    val = ld val;
    check L28() else D5();
  L27():
    r14 = dyn base2(<lang `^`(val, 2.0)>);
    goto L4(r14);
  L39():
    val5 = force? val4;
    checkMissing(val5);
    std = ld std;
    check L40() else D13();
  L59():
    object24 = force? object23;
    checkMissing(object24);
    c12 = `is.object`(object24);
    if c12 then L61() else L62(object24);
  L64():
    naresid1 = ldf naresid;
    check L65() else D22();
  D5():
    deopt 17 [val];
  D13():
    deopt 40 [val5, std];
  D22():
    deopt 78 [];
  L5(r21, r22):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L14(r77):
    r84 = `!`(r77);
    c18 = `as.logical`(r84);
    if c18 then L78() else L16();
  L28():
    val1 = force? val;
    checkMissing(val1);
    r16 = `^`(val1, 2.0);
    sum = ldf sum in base;
    r17 = dyn sum(r16);
    check L29() else D6();
  L30():
    val2 = ld val;
    check L32() else D7();
  L31():
    r20 = dyn base3(<sym val>);
    goto L5(r15, r20);
  L40():
    std1 = force? std;
    checkMissing(std1);
    r38 = `/`(val5, std1);
    st val = r38;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L60(dx26):
    c13 = `==`(dx26, NULL);
    goto L11(c13);
  L61():
    dr16 = tryDispatchBuiltin.1("$", object24);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L63() else L62(dr16);
  L62(object26):
    r69 = `$`(object26, <sym na.action>);
    goto L60(r69);
  L65():
    p7 = prom<V +>{
      object27 = ld object;
      object28 = force? object27;
      checkMissing(object28);
      c15 = `is.object`(object28);
      if c15 then L1() else L2(object28);
    L0(dx28):
      return dx28;
    L1():
      dr18 = tryDispatchBuiltin.1("$", object28);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(object30):
      r71 = `$`(object30, <sym na.action>);
      goto L0(r71);
    L3():
      dx27 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx27);
    };
    p8 = prom<V +>{
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      return val9;
    };
    r74 = dyn naresid1(p7, p8);
    check L66() else D23();
  L68():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L70() else L71();
  L69():
    r76 = dyn base7(<lang `<-`(aux, `$`(attr(object, "units"), y))>);
    goto L14(r76);
  D6():
    deopt 22 [r17];
  D7():
    deopt 24 [r15, val2];
  D23():
    deopt 81 [r74];
  L6(r29, r30, r31):
    r35 = `-`(r30, r31);
    r36 = `/`(r29, r35);
    r37 = sqrt(r36);
    goto L3(r37);
  L7(r40):
    r42 = `!`(r40);
    c6 = `as.logical`(r42);
    if c6 then L48() else L8();
  L15(r79):
    c16 = `is.object`(r79);
    if c16 then L75() else L76(r79);
  L16():
    goto L17();
  L17():
    lab2 = ld lab;
    check L82() else D28();
  L29():
    goto L4(r17);
  L32():
    val3 = force? val2;
    checkMissing(val3);
    length = ldf length in base;
    r23 = dyn length(val3);
    check L33() else D8();
  L34():
    coef = ldf coef;
    check L36() else D9();
  L35():
    r28 = dyn base4(<lang coef(object)>);
    goto L6(r21, r22, r28);
  L41():
    object7 = ld object;
    check L43() else D14();
  L42():
    r39 = dyn base5(<lang `$`(object, na.action)>);
    goto L7(r39);
  L63():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L60(dx25);
  L66():
    st val = r74;
    goto L13();
  L70():
    object31 = ld object;
    check L72() else D24();
  L71():
    r78 = dyn base8(<sym object>, "units");
    goto L15(r78);
  L78():
    paste = ldf paste;
    check L79() else D26();
  D8():
    deopt 27 [r15, r23];
  D9():
    deopt 30 [r21, r22];
  D14():
    deopt 45 [object7];
  D24():
    deopt 91 [object31];
  D26():
    deopt 101 [];
  D28():
    deopt 108 [lab2];
  L8():
    goto L9();
  L9():
    l = ld val;
    attr__ = ldf `attr<-`;
    check L52() else D17();
  L33():
    goto L5(r15, r23);
  L36():
    p3 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r33 = dyn coef(p3);
    check L37() else D10();
  L43():
    object8 = force? object7;
    checkMissing(object8);
    c4 = `is.object`(object8);
    if c4 then L45() else L46(object8);
  L48():
    naresid = ldf naresid;
    check L49() else D15();
  L72():
    object32 = force? object31;
    checkMissing(object32);
    attr = ldf attr in base;
    r80 = dyn attr(object32, "units");
    check L73() else D25();
  L74(dx30):
    st aux = dx30;
    c17 = `==`(dx30, NULL);
    goto L14(c17);
  L75():
    dr20 = tryDispatchBuiltin.1("$", r79);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L77() else L76(dr20);
  L76(r82):
    r83 = `$`(r82, <sym y>);
    goto L74(r83);
  L79():
    p9 = prom<V +>{
      lab = ld lab;
      lab1 = force? lab;
      checkMissing(lab1);
      return lab1;
    };
    p10 = prom<V +>{
      aux = ld aux;
      aux1 = force? aux;
      checkMissing(aux1);
      return aux1;
    };
    r87 = dyn paste(p9, p10);
    check L80() else D27();
  L82():
    lab3 = force? lab2;
    checkMissing(lab3);
    l1 = ld val;
    attr__1 = ldf `attr<-`;
    check L83() else D29();
  D10():
    deopt 32 [r21, r22, r33];
  D15():
    deopt 51 [];
  D17():
    deopt 61 ["Standardized residuals", l, "Standardized residuals"];
  D25():
    deopt 95 [r80];
  D27():
    deopt 104 [r87];
  D29():
    deopt 111 [lab3, l1, lab3];
  L37():
    length1 = ldf length in base;
    r34 = dyn length1(r33);
    check L38() else D11();
  L44(dx8):
    c5 = `==`(dx8, NULL);
    goto L7(c5);
  L45():
    dr4 = tryDispatchBuiltin.1("$", object8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(dr4);
  L46(object10):
    r41 = `$`(object10, <sym na.action>);
    goto L44(r41);
  L49():
    p4 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      c7 = `is.object`(object12);
      if c7 then L1() else L2(object12);
    L0(dx10):
      return dx10;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object12);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object14):
      r43 = `$`(object14, <sym na.action>);
      goto L0(r43);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx9);
    };
    p5 = prom<V +>{
      val6 = ld val;
      val7 = force? val6;
      checkMissing(val7);
      return val7;
    };
    r46 = dyn naresid(p4, p5);
    check L50() else D16();
  L52():
    r48 = dyn attr__(l, NULL, "label", "Standardized residuals");
    check L53() else D18();
  L73():
    goto L15(r80);
  L77():
    dx29 = getTryDispatchBuiltinValue(dr20);
    goto L74(dx29);
  L80():
    st lab = r87;
    goto L17();
  L83():
    r89 = dyn attr__1(l1, NULL, "label", lab3);
    check L84() else D30();
  D11():
    deopt 34 [r21, r22, r34];
  D16():
    deopt 54 [r46];
  D18():
    deopt 64 ["Standardized residuals", r48];
  D30():
    deopt 114 [lab3, r89];
  L38():
    goto L6(r21, r22, r34);
  L47():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L44(dx7);
  L50():
    st val = r46;
    goto L9();
  L53():
    st val = r48;
    goto L10();
  L84():
    st val = r89;
    goto L10();
  }
}