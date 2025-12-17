fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1836514972;
    st `predict.smooth.spline.fit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1836514972(object, x, deriv, `...`) {
  (reg object:*, reg x:*, reg deriv:*, reg ddd:dots) -+> V { var object:*, var x:*, var deriv:*, reg deriv_isMissing:L, reg deriv_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg object9:*, reg object10:V, reg c3:L, reg dx5:V, reg object12:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg object13:*, reg object14:V, reg c4:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r11:V, reg length:cls, reg r12:V, reg r13:V, reg seq_int:cls, reg r14:V, reg x1:*, reg x2:V, reg object17:*, reg object18:V, reg c5:L, reg x4:V, reg object20:V, reg dr8:V, reg dc4:L, reg dx12:V, reg x6:V, reg dx13:V, reg r16:V, reg r17:V, reg object21:*, reg object22:V, reg c6:L, reg r19:V, reg object24:V, reg dr10:V, reg dc5:L, reg dx14:V, reg r21:V, reg dx15:V, reg r22:V, reg r23:V, reg xs:*, reg xs1:V, reg r24:V, reg xs2:*, reg xs3:V, reg r25:V, reg extrap_left:*, reg extrap_left1:V, reg extrap_right:*, reg extrap_right1:V, reg r26:V, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg interp:*, reg interp1:V, reg sum:cls, reg r30:V, reg xs4:*, reg xs5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg interp2:*, reg interp3:V, reg any:cls, reg r33:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg C_bvalus:*, reg C_bvalus1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg n:*, reg n1:V, reg as_integer:cls, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg object25:*, reg object26:V, reg c8:L, reg object28:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r41:V, reg as_double:cls, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg object29:*, reg object30:V, reg c9:L, reg object32:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r45:V, reg as_double1:cls, reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg object33:*, reg object34:V, reg c10:L, reg object36:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r49:V, reg as_integer1:cls, reg r50:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r51:V, reg r52:V, reg xs6:*, reg xs7:V, reg c11:L, reg xs9:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg interp4:*, reg interp5:V, reg __:cls, reg r53:V, reg as_double2:cls, reg r54:V, reg double:cls, reg n2:*, reg n3:V, reg p:p(V +), reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg r58:V, reg deriv1:*, reg deriv2:V, reg as_integer2:cls, reg r59:V, reg _Fortran:cls, reg r60:V, reg c12:L, reg r62:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r63:V, reg l:*, reg c13:L, reg dx27:V, reg l2:*, reg dr22:V, reg dc11:L, reg dx29:V, reg dx30:V, reg dx31:V, reg interp6:*, reg interp7:V, reg ___:cls, reg r64:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg r66:V, reg extrap:*, reg extrap1:V, reg any1:cls, reg r67:V, reg c14:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg object37:*, reg object38:V, reg c15:L, reg object40:V, reg dr24:V, reg dc12:L, reg dx33:V, reg dx34:V, reg r70:V, reg object41:*, reg object42:V, reg c16:L, reg object44:V, reg dr26:V, reg dc13:L, reg dx35:V, reg dx36:V, reg r71:V, reg object45:*, reg object46:V, reg c17:L, reg dx38:V, reg object48:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg dx42:V, reg r72:V, reg r73:V, reg c18:cls, reg r74:V, reg deriv3:*, reg deriv4:V, reg r75:V, reg c19:L, reg Recall:cls, reg object49:*, reg object50:V, reg p1:p(V +), reg xrange:*, reg xrange1:V, reg p2:p(V +), reg r78:V, reg c20:L, reg r80:V, reg dr30:V, reg dc15:L, reg dx43:V, reg dx44:V, reg r81:V, reg Recall1:cls, reg object51:*, reg object52:V, reg p3:p(V +), reg xrange2:*, reg xrange3:V, reg p4:p(V +), reg r84:V, reg c21:L, reg r86:V, reg dr32:V, reg dc16:L, reg dx45:V, reg dx46:V, reg r87:V, reg object53:*, reg object54:V, reg c22:L, reg dx48:V, reg object56:V, reg dr34:V, reg dc17:L, reg dx50:V, reg dx51:V, reg dx52:V, reg r88:V, reg r89:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg r91:V, reg extrap_left2:*, reg extrap_left3:V, reg any2:cls, reg r92:V, reg c23:L, reg end_object:*, reg end_object1:V, reg c24:L, reg end_object3:V, reg dr36:V, reg dc18:L, reg dx53:V, reg dx54:V, reg __1:cls, reg r93:V, reg end_slopes:*, reg end_slopes1:V, reg c25:L, reg dx56:V, reg end_slopes3:V, reg dr38:V, reg dc19:L, reg dx58:V, reg dx59:V, reg dx60:V, reg __2:cls, reg r94:V, reg xs10:*, reg xs11:V, reg c26:L, reg dx63:V, reg dx64:V, reg xs13:V, reg dr40:V, reg dc20:L, reg dx67:V, reg dx68:V, reg dx69:V, reg dx70:V, reg extrap_left4:*, reg extrap_left5:V, reg __3:cls, reg r95:V, reg r96:V, reg r97:V, reg r98:V, reg l3:*, reg c27:L, reg r100:V, reg l5:*, reg dr42:V, reg dc21:L, reg dx71:V, reg r102:V, reg dx72:V, reg extrap_left6:*, reg extrap_left7:V, reg ___1:cls, reg r103:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r105:V, reg r106:V, reg extrap_right2:*, reg extrap_right3:V, reg any3:cls, reg r107:V, reg c28:L, reg end_object4:*, reg end_object5:V, reg c29:L, reg end_object7:V, reg dr44:V, reg dc22:L, reg dx73:V, reg dx74:V, reg __4:cls, reg r108:V, reg end_slopes4:*, reg end_slopes5:V, reg c30:L, reg dx76:V, reg end_slopes7:V, reg dr46:V, reg dc23:L, reg dx78:V, reg dx79:V, reg dx80:V, reg __5:cls, reg r109:V, reg xs14:*, reg xs15:V, reg c31:L, reg dx83:V, reg dx84:V, reg xs17:V, reg dr48:V, reg dc24:L, reg dx87:V, reg dx88:V, reg dx89:V, reg dx90:V, reg extrap_right4:*, reg extrap_right5:V, reg __6:cls, reg r110:V, reg r111:V, reg r112:V, reg r113:V, reg l6:*, reg c32:L, reg r115:V, reg l8:*, reg dr50:V, reg dc25:L, reg dx91:V, reg r117:V, reg dx92:V, reg extrap_right6:*, reg extrap_right7:V, reg ___2:cls, reg r118:V, reg r119:V, reg r120:V, reg deriv5:*, reg deriv6:V, reg r121:V, reg c33:L, reg Recall2:cls, reg object57:*, reg object58:V, reg p5:p(V +), reg xrange4:*, reg xrange5:V, reg p6:p(V +), reg r124:V, reg c34:L, reg r126:V, reg dr52:V, reg dc26:L, reg dx93:V, reg dx94:V, reg r127:V, reg object59:*, reg object60:V, reg c35:L, reg dx96:V, reg object62:V, reg dr54:V, reg dc27:L, reg dx98:V, reg dx99:V, reg dx100:V, reg r128:V, reg r129:V, reg end_slopes8:*, reg end_slopes9:V, reg c36:L, reg end_slopes11:V, reg dr56:V, reg dc28:L, reg dx101:V, reg dx102:V, reg __7:cls, reg r130:V, reg l9:*, reg c37:L, reg dx104:V, reg l11:*, reg dr58:V, reg dc29:L, reg dx106:V, reg dx108:V, reg extrap_left8:*, reg extrap_left9:V, reg ___3:cls, reg r131:V, reg end_slopes12:*, reg end_slopes13:V, reg c38:L, reg end_slopes15:V, reg dr60:V, reg dc30:L, reg dx109:V, reg dx110:V, reg __8:cls, reg r132:V, reg l12:*, reg c39:L, reg dx112:V, reg l14:*, reg dr62:V, reg dc31:L, reg dx114:V, reg dx115:V, reg dx116:V, reg extrap_right8:*, reg extrap_right9:V, reg ___4:cls, reg r133:V, reg l15:*, reg c40:L, reg r135:R, reg l17:*, reg dr64:V, reg dc32:L, reg dx117:V, reg r137:R, reg dx118:V, reg extrap2:*, reg extrap3:V, reg ___5:cls, reg r138:V, reg deriv7:*, reg deriv8:V, reg r140:V, reg c41:L, reg y:*, reg y1:V, reg object63:*, reg object64:V, reg c42:L, reg y3:V, reg object66:V, reg dr66:V, reg dc33:L, reg dx119:V, reg y5:V, reg dx120:V, reg r141:V, reg deriv9:*, reg deriv10:V, reg r142:V, reg r143:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r145:V, reg r146:V, reg x7:*, reg x8:V, reg y6:*, reg y7:V, reg list:cls, reg r147:V |
    mkenv;
    st object = object;
    st x = x;
    deriv_isMissing = missing.0(deriv);
    if deriv_isMissing then L0(0.0) else L0(deriv);
  L0(deriv_orDefault):
    st deriv = deriv_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L48() else L49();
  L1(r1):
    c = `as.logical`(r1);
    if c then L50() else L2();
  L48():
    missing = ldf missing in base;
    r2 = dyn missing(<sym x>);
    goto L1(r2);
  L49():
    r = dyn base(<sym x>);
    goto L1(r);
  L2():
    goto L5();
  L5():
    x1 = ld x;
    check L78() else D6();
  L50():
    sym1 = ldf `seq.int`;
    base1 = ldf `seq.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  D6():
    deopt 31 [x1];
  L3(r4):
    st x = r4;
    goto L5();
  L51():
    object1 = ld object;
    check L53() else D0();
  L52():
    r3 = dyn base1[from, to, `length.out`](<lang `$`(object, min)>, <lang `+`(`$`(object, min), `$`(object, range))>, <lang `-`(length(`$`(object, coef)), 4)>);
    goto L3(r3);
  L78():
    x2 = force? x1;
    checkMissing(x2);
    object17 = ld object;
    check L79() else D7();
  D0():
    deopt 5 [object1];
  D7():
    deopt 32 [x2, object17];
  L53():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L55() else L56(object2);
  L79():
    object18 = force? object17;
    checkMissing(object18);
    c5 = `is.object`(object18);
    if c5 then L81() else L82(x2, object18);
  L54(dx1):
    object5 = ld object;
    check L58() else D1();
  L55():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L57() else L56(dr);
  L56(object4):
    r5 = `$`(object4, <sym min>);
    goto L54(r5);
  L80(x6, dx13):
    r17 = `-`(x6, dx13);
    object21 = ld object;
    check L84() else D8();
  L81():
    dr8 = tryDispatchBuiltin.1("$", object18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L83() else L82(x2, dr8);
  L82(x4, object20):
    r16 = `$`(object20, <sym min>);
    goto L80(x4, r16);
  D1():
    deopt 9 [object5];
  D8():
    deopt 35 [r17, object21];
  L57():
    dx = getTryDispatchBuiltinValue(dr);
    goto L54(dx);
  L58():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L60() else L61(object6);
  L83():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L80(x2, dx12);
  L84():
    object22 = force? object21;
    checkMissing(object22);
    c6 = `is.object`(object22);
    if c6 then L86() else L87(r17, object22);
  L59(dx3):
    object9 = ld object;
    check L63() else D2();
  L60():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L62() else L61(dr2);
  L61(object8):
    r6 = `$`(object8, <sym min>);
    goto L59(r6);
  L85(r21, dx15):
    r23 = `/`(r21, dx15);
    st xs = r23;
    xs = ld xs;
    check L89() else D9();
  L86():
    dr10 = tryDispatchBuiltin.1("$", object22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L88() else L87(r17, dr10);
  L87(r19, object24):
    r22 = `$`(object24, <sym range>);
    goto L85(r19, r22);
  D2():
    deopt 11 [dx3, object9];
  D9():
    deopt 40 [xs];
  L62():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L59(dx2);
  L63():
    object10 = force? object9;
    checkMissing(object10);
    c3 = `is.object`(object10);
    if c3 then L65() else L66(dx3, object10);
  L88():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L85(r17, dx14);
  L89():
    xs1 = force? xs;
    checkMissing(xs1);
    r24 = `<`(xs1, 0.0);
    st `extrap.left` = r24;
    xs2 = ld xs;
    check L90() else D10();
  D10():
    deopt 45 [xs2];
  L64(dx8, dx9):
    r8 = `+`(dx8, dx9);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L65():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L67() else L66(dx3, dr4);
  L66(dx5, object12):
    r7 = `$`(object12, <sym range>);
    goto L64(dx5, r7);
  L90():
    xs3 = force? xs2;
    checkMissing(xs3);
    r25 = `>`(xs3, 1.0);
    st `extrap.right` = r25;
    extrap_left = ld `extrap.left`;
    check L91() else D11();
  D11():
    deopt 50 [extrap_left];
  L4(r10):
    r13 = `-`(r10, 4);
    seq_int = ldf `seq.int` in base;
    r14 = dyn seq_int(dx1, r8, r13);
    check L76() else D5();
  L67():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L64(dx3, dx7);
  L68():
    object13 = ld object;
    check L70() else D3();
  L69():
    r9 = dyn base2(<lang `$`(object, coef)>);
    goto L4(r9);
  L91():
    extrap_left1 = force? extrap_left;
    checkMissing(extrap_left1);
    extrap_right = ld `extrap.right`;
    check L92() else D12();
  D3():
    deopt 18 [object13];
  D5():
    deopt 27 [r14];
  D12():
    deopt 51 [extrap_left1, extrap_right];
  L70():
    object14 = force? object13;
    checkMissing(object14);
    c4 = `is.object`(object14);
    if c4 then L72() else L73(object14);
  L76():
    goto L3(r14);
  L92():
    extrap_right1 = force? extrap_right;
    checkMissing(extrap_right1);
    r26 = `||`(extrap_left1, extrap_right1);
    st extrap = r26;
    r27 = `!`(r26);
    st interp = r27;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L6(r29):
    st n = r29;
    xs4 = ld xs;
    check L97() else D15();
  L71(dx11):
    length = ldf length in base;
    r12 = dyn length(dx11);
    check L75() else D4();
  L72():
    dr6 = tryDispatchBuiltin.1("$", object14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L74() else L73(dr6);
  L73(object16):
    r11 = `$`(object16, <sym coef>);
    goto L71(r11);
  L93():
    interp = ld interp;
    check L95() else D13();
  L94():
    r28 = dyn base3(<sym interp>);
    goto L6(r28);
  D4():
    deopt 22 [r12];
  D13():
    deopt 59 [interp];
  D15():
    deopt 64 [xs4];
  L74():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L71(dx10);
  L75():
    goto L4(r12);
  L95():
    interp1 = force? interp;
    checkMissing(interp1);
    sum = ldf sum in base;
    r30 = dyn sum(interp1);
    check L96() else D14();
  L97():
    xs5 = force? xs4;
    checkMissing(xs5);
    st y = xs5;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  D14():
    deopt 62 [r30];
  L7(r32):
    c7 = `as.logical`(r32);
    if c7 then L102() else L8();
  L96():
    goto L6(r30);
  L98():
    interp2 = ld interp;
    check L100() else D16();
  L99():
    r31 = dyn base4(<sym interp>);
    goto L7(r31);
  D16():
    deopt 69 [interp2];
  L8():
    goto L18();
  L18():
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L158() else L159();
  L100():
    interp3 = force? interp2;
    checkMissing(interp3);
    any = ldf any in base;
    r33 = dyn any(interp3);
    check L101() else D17();
  L102():
    sym5 = ldf `.Fortran`;
    base5 = ldf `.Fortran` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L103() else L104();
  D17():
    deopt 72 [r33];
  L9(r35):
    c12 = `is.object`(r35);
    if c12 then L150() else L151(r35);
  L19(r66):
    c14 = `as.logical`(r66);
    if c14 then L162() else L20();
  L101():
    goto L7(r33);
  L103():
    C_bvalus = ld C_bvalus;
    check L105() else D18();
  L104():
    r34 = dyn base5[, n, knot, coef, nk, x, s, order](<sym C_bvalus>, <lang as.integer(n)>, <lang as.double(`$`(object, knot))>, <lang as.double(`$`(object, coef))>, <lang as.integer(`$`(object, nk))>, <lang as.double(`[`(xs, interp))>, <lang double(n)>, <lang as.integer(deriv)>);
    goto L9(r34);
  L158():
    extrap = ld extrap;
    check L160() else D36();
  L159():
    r65 = dyn base12(<sym extrap>);
    goto L19(r65);
  D18():
    deopt 75 [C_bvalus];
  D36():
    deopt 142 [extrap];
  L20():
    goto L44();
  L44():
    deriv7 = ld deriv;
    check L282() else D71();
  L105():
    C_bvalus1 = force? C_bvalus;
    checkMissing(C_bvalus1);
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L106() else L107();
  L149(dx25):
    l = ld y;
    c13 = `is.object`(l);
    if c13 then L153() else L154(dx25, l);
  L150():
    dr20 = tryDispatchBuiltin.1("$", r35);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L152() else L151(dr20);
  L151(r62):
    r63 = `$`(r62, <sym s>);
    goto L149(r63);
  L160():
    extrap1 = force? extrap;
    checkMissing(extrap1);
    any1 = ldf any in base;
    r67 = dyn any1(extrap1);
    check L161() else D37();
  L162():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L163() else L164();
  D37():
    deopt 145 [r67];
  D71():
    deopt 286 [deriv7];
  L10(r37):
    sym7 = ldf `as.double`;
    base7 = ldf `as.double` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L17(dx30, dx31):
    st y = dx31;
    goto L18();
  L21(r69):
    st xrange = r69;
    deriv3 = ld deriv;
    check L181() else D42();
  L106():
    n = ld n;
    check L108() else D19();
  L107():
    r36 = dyn base6(<sym n>);
    goto L10(r36);
  L152():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L149(dx24);
  L153():
    dr22 = tryDispatchBuiltin.0("[<-", l, dx25);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L155() else L154(dx25, dr22);
  L154(dx27, l2):
    interp6 = ld interp;
    check L156() else D35();
  L161():
    goto L19(r67);
  L163():
    object37 = ld object;
    check L165() else D38();
  L164():
    r68 = dyn base13(<lang `$`(object, min)>, <lang `+`(`$`(object, min), `$`(object, range))>);
    goto L21(r68);
  L282():
    deriv8 = force? deriv7;
    checkMissing(deriv8);
    r140 = `>`(deriv8, 0.0);
    c41 = `as.logical`(r140);
    if c41 then L283() else L45();
  D19():
    deopt 79 [n];
  D35():
    deopt 134 [dx27, l2, dx25, interp6];
  D38():
    deopt 148 [object37];
  D42():
    deopt 160 [deriv3];
  L11(r40):
    sym8 = ldf `as.double`;
    base8 = ldf `as.double` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  L45():
    goto L46();
  L46():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L292() else L293();
  L108():
    n1 = force? n;
    checkMissing(n1);
    as_integer = ldf `as.integer` in base;
    r38 = dyn as_integer(n1);
    check L109() else D20();
  L110():
    object25 = ld object;
    check L112() else D21();
  L111():
    r39 = dyn base7(<lang `$`(object, knot)>);
    goto L11(r39);
  L155():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L17(dx25, dx29);
  L156():
    interp7 = force? interp6;
    ___ = ldf `[<-` in base;
    r64 = dyn ___(l2, dx25, interp7);
    goto L17(dx27, r64);
  L165():
    object38 = force? object37;
    checkMissing(object38);
    c15 = `is.object`(object38);
    if c15 then L167() else L168(object38);
  L181():
    deriv4 = force? deriv3;
    checkMissing(deriv4);
    r75 = `==`(deriv4, 0.0);
    c19 = `as.logical`(r75);
    if c19 then L182() else L22();
  L283():
    y = ld y;
    check L284() else D72();
  D20():
    deopt 82 [r38];
  D21():
    deopt 86 [object25];
  D72():
    deopt 290 [y];
  L12(r44):
    sym9 = ldf `as.integer`;
    base9 = ldf `as.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L126() else L127();
  L22():
    deriv5 = ld deriv;
    check L247() else D62();
  L37(r120):
    goto L44();
  L47(r146):
    popenv;
    return r146;
  L109():
    goto L10(r38);
  L112():
    object26 = force? object25;
    checkMissing(object26);
    c8 = `is.object`(object26);
    if c8 then L114() else L115(object26);
  L118():
    object29 = ld object;
    check L120() else D23();
  L119():
    r43 = dyn base8(<lang `$`(object, coef)>);
    goto L12(r43);
  L166(dx34):
    object41 = ld object;
    check L170() else D39();
  L167():
    dr24 = tryDispatchBuiltin.1("$", object38);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L169() else L168(dr24);
  L168(object40):
    r70 = `$`(object40, <sym min>);
    goto L166(r70);
  L182():
    Recall = ldf Recall;
    check L183() else D43();
  L284():
    y1 = force? y;
    checkMissing(y1);
    object63 = ld object;
    check L285() else D73();
  L292():
    x7 = ld x;
    check L294() else D75();
  L293():
    r145 = dyn base16[x, y](<sym x>, <sym y>);
    goto L47(r145);
  D23():
    deopt 94 [object29];
  D39():
    deopt 151 [object41];
  D43():
    deopt 165 [];
  D62():
    deopt 242 [deriv5];
  D73():
    deopt 291 [y1, object63];
  D75():
    deopt 302 [x7];
  L13(r48):
    sym10 = ldf `as.double`;
    base10 = ldf `as.double` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L134() else L135();
  L113(dx17):
    as_double = ldf `as.double` in base;
    r42 = dyn as_double(dx17);
    check L117() else D22();
  L114():
    dr12 = tryDispatchBuiltin.1("$", object26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L116() else L115(dr12);
  L115(object28):
    r41 = `$`(object28, <sym knot>);
    goto L113(r41);
  L120():
    object30 = force? object29;
    checkMissing(object30);
    c9 = `is.object`(object30);
    if c9 then L122() else L123(object30);
  L126():
    object33 = ld object;
    check L128() else D25();
  L127():
    r47 = dyn base9(<lang `$`(object, nk)>);
    goto L13(r47);
  L169():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L166(dx33);
  L170():
    object42 = force? object41;
    checkMissing(object42);
    c16 = `is.object`(object42);
    if c16 then L172() else L173(object42);
  L183():
    p1 = prom<V +>{
      object49 = ld object;
      object50 = force? object49;
      checkMissing(object50);
      return object50;
    };
    p2 = prom<V +>{
      xrange = ld xrange;
      xrange1 = force? xrange;
      checkMissing(xrange1);
      return xrange1;
    };
    r78 = dyn Recall(p1, p2);
    check L184() else D44();
  L247():
    deriv6 = force? deriv5;
    checkMissing(deriv6);
    r121 = `==`(deriv6, 1.0);
    c33 = `as.logical`(r121);
    if c33 then L248() else L38();
  L285():
    object64 = force? object63;
    checkMissing(object64);
    c42 = `is.object`(object64);
    if c42 then L287() else L288(y1, object64);
  L294():
    x8 = force? x7;
    checkMissing(x8);
    y6 = ld y;
    check L295() else D76();
  D22():
    deopt 90 [r42];
  D25():
    deopt 102 [object33];
  D44():
    deopt 168 [r78];
  D76():
    deopt 305 [y6];
  L14(r52):
    double = ldf double;
    check L142() else D30();
  L38():
    l15 = ld y;
    c40 = `is.object`(l15);
    if c40 then L277() else L278(0.0, l15);
  L116():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L113(dx16);
  L117():
    goto L11(r42);
  L121(dx19):
    as_double1 = ldf `as.double` in base;
    r46 = dyn as_double1(dx19);
    check L125() else D24();
  L122():
    dr14 = tryDispatchBuiltin.1("$", object30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L124() else L123(dr14);
  L123(object32):
    r45 = `$`(object32, <sym coef>);
    goto L121(r45);
  L128():
    object34 = force? object33;
    checkMissing(object34);
    c10 = `is.object`(object34);
    if c10 then L130() else L131(object34);
  L134():
    xs6 = ld xs;
    check L136() else D27();
  L135():
    r51 = dyn base10(<lang `[`(xs, interp)>);
    goto L14(r51);
  L171(dx36):
    object45 = ld object;
    check L175() else D40();
  L172():
    dr26 = tryDispatchBuiltin.1("$", object42);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L174() else L173(dr26);
  L173(object44):
    r71 = `$`(object44, <sym min>);
    goto L171(r71);
  L184():
    c20 = `is.object`(r78);
    if c20 then L186() else L187(r78);
  L248():
    Recall2 = ldf Recall;
    check L249() else D63();
  L286(y5, dx120):
    deriv9 = ld deriv;
    check L290() else D74();
  L287():
    dr66 = tryDispatchBuiltin.1("$", object64);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L289() else L288(y1, dr66);
  L288(y3, object66):
    r141 = `$`(object66, <sym range>);
    goto L286(y3, r141);
  L295():
    y7 = force? y6;
    checkMissing(y7);
    list = ldf list in base;
    r147 = dyn list(x8, y7);
    check L296() else D77();
  D24():
    deopt 98 [r46];
  D27():
    deopt 110 [xs6];
  D30():
    deopt 119 [];
  D40():
    deopt 153 [dx36, object45];
  D63():
    deopt 247 [];
  D74():
    deopt 293 [y5, dx120, deriv9];
  D77():
    deopt 309 [r147];
  L43(r137, dx118):
    st y = dx118;
    goto L37(r137);
  L124():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L121(dx18);
  L125():
    goto L12(r46);
  L129(dx21):
    as_integer1 = ldf `as.integer` in base;
    r50 = dyn as_integer1(dx21);
    check L133() else D26();
  L130():
    dr16 = tryDispatchBuiltin.1("$", object34);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L132() else L131(dr16);
  L131(object36):
    r49 = `$`(object36, <sym nk>);
    goto L129(r49);
  L136():
    xs7 = force? xs6;
    checkMissing(xs7);
    c11 = `is.object`(xs7);
    if c11 then L137() else L138(xs7);
  L142():
    p = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    r56 = dyn double(p);
    check L143() else D31();
  L174():
    dx35 = getTryDispatchBuiltinValue(dr26);
    goto L171(dx35);
  L175():
    object46 = force? object45;
    checkMissing(object46);
    c17 = `is.object`(object46);
    if c17 then L177() else L178(dx36, object46);
  L185(dx44):
    st `end.object` = dx44;
    Recall1 = ldf Recall;
    check L189() else D45();
  L186():
    dr30 = tryDispatchBuiltin.1("$", r78);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L188() else L187(dr30);
  L187(r80):
    r81 = `$`(r80, <sym y>);
    goto L185(r81);
  L249():
    p5 = prom<V +>{
      object57 = ld object;
      object58 = force? object57;
      checkMissing(object58);
      return object58;
    };
    p6 = prom<V +>{
      xrange4 = ld xrange;
      xrange5 = force? xrange4;
      checkMissing(xrange5);
      return xrange5;
    };
    r124 = dyn Recall2(p5, p6, 1.0);
    check L250() else D64();
  L277():
    dr64 = tryDispatchBuiltin.0("[<-", l15, 0.0);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L279() else L278(0.0, dr64);
  L278(r135, l17):
    extrap2 = ld extrap;
    check L280() else D70();
  L289():
    dx119 = getTryDispatchBuiltinValue(dr66);
    goto L286(y1, dx119);
  L290():
    deriv10 = force? deriv9;
    checkMissing(deriv10);
    r142 = `^`(dx120, deriv10);
    r143 = `/`(y5, r142);
    st y = r143;
    goto L46();
  L296():
    goto L47(r147);
  D26():
    deopt 106 [r50];
  D31():
    deopt 121 [r56];
  D45():
    deopt 172 [];
  D64():
    deopt 251 [r124];
  D70():
    deopt 280 [r135, l17, 0.0, extrap2];
  L15(dx23):
    as_double2 = ldf `as.double` in base;
    r54 = dyn as_double2(dx23);
    check L141() else D29();
  L132():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L129(dx20);
  L133():
    goto L13(r50);
  L137():
    dr18 = tryDispatchBuiltin.1("[", xs7);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L139() else L138(dr18);
  L138(xs9):
    interp4 = ld interp;
    check L140() else D28();
  L143():
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L144() else L145();
  L176(dx41, dx42):
    r73 = `+`(dx41, dx42);
    c18 = ldf c in base;
    r74 = dyn c18(dx34, r73);
    check L180() else D41();
  L177():
    dr28 = tryDispatchBuiltin.1("$", object46);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L179() else L178(dx36, dr28);
  L178(dx38, object48):
    r72 = `$`(object48, <sym range>);
    goto L176(dx38, r72);
  L188():
    dx43 = getTryDispatchBuiltinValue(dr30);
    goto L185(dx43);
  L189():
    p3 = prom<V +>{
      object51 = ld object;
      object52 = force? object51;
      checkMissing(object52);
      return object52;
    };
    p4 = prom<V +>{
      xrange2 = ld xrange;
      xrange3 = force? xrange2;
      checkMissing(xrange3);
      return xrange3;
    };
    r84 = dyn Recall1(p3, p4, 1.0);
    check L190() else D46();
  L250():
    c34 = `is.object`(r124);
    if c34 then L252() else L253(r124);
  L279():
    dx117 = getTryDispatchBuiltinValue(dr64);
    goto L43(0.0, dx117);
  L280():
    extrap3 = force? extrap2;
    ___5 = ldf `[<-` in base;
    r138 = dyn ___5(l17, 0.0, extrap3);
    goto L43(r135, r138);
  D28():
    deopt 112 [xs9, interp4];
  D29():
    deopt 116 [r54];
  D41():
    deopt 158 [r74];
  D46():
    deopt 176 [r84];
  L16(r58):
    _Fortran = ldf `.Fortran` in base;
    r60 = dyn _Fortran(C_bvalus1, r37, r40, r44, r48, r52, r56, r58);
    check L148() else D34();
  L139():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L15(dx22);
  L140():
    interp5 = force? interp4;
    __ = ldf `[` in base;
    r53 = dyn __(xs9, interp5);
    goto L15(r53);
  L141():
    goto L14(r54);
  L144():
    deriv1 = ld deriv;
    check L146() else D32();
  L145():
    r57 = dyn base11(<sym deriv>);
    goto L16(r57);
  L179():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L176(dx36, dx40);
  L180():
    goto L21(r74);
  L190():
    c21 = `is.object`(r84);
    if c21 then L192() else L193(r84);
  L251(dx94):
    object59 = ld object;
    check L255() else D65();
  L252():
    dr52 = tryDispatchBuiltin.1("$", r124);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L254() else L253(dr52);
  L253(r126):
    r127 = `$`(r126, <sym y>);
    goto L251(r127);
  D32():
    deopt 125 [deriv1];
  D34():
    deopt 131 [r60];
  D65():
    deopt 252 [dx94, object59];
  L146():
    deriv2 = force? deriv1;
    checkMissing(deriv2);
    as_integer2 = ldf `as.integer` in base;
    r59 = dyn as_integer2(deriv2);
    check L147() else D33();
  L148():
    goto L9(r60);
  L191(dx46):
    object53 = ld object;
    check L195() else D47();
  L192():
    dr32 = tryDispatchBuiltin.1("$", r84);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L194() else L193(dr32);
  L193(r86):
    r87 = `$`(r86, <sym y>);
    goto L191(r87);
  L254():
    dx93 = getTryDispatchBuiltinValue(dr52);
    goto L251(dx93);
  L255():
    object60 = force? object59;
    checkMissing(object60);
    c35 = `is.object`(object60);
    if c35 then L257() else L258(dx94, object60);
  D33():
    deopt 128 [r59];
  D47():
    deopt 177 [dx46, object53];
  L147():
    goto L16(r59);
  L194():
    dx45 = getTryDispatchBuiltinValue(dr32);
    goto L191(dx45);
  L195():
    object54 = force? object53;
    checkMissing(object54);
    c22 = `is.object`(object54);
    if c22 then L197() else L198(dx46, object54);
  L256(dx99, dx100):
    r129 = `*`(dx99, dx100);
    st `end.slopes` = r129;
    end_slopes8 = ld `end.slopes`;
    check L260() else D66();
  L257():
    dr54 = tryDispatchBuiltin.1("$", object60);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L259() else L258(dx94, dr54);
  L258(dx96, object62):
    r128 = `$`(object62, <sym range>);
    goto L256(dx96, r128);
  D66():
    deopt 257 [end_slopes8];
  L196(dx51, dx52):
    r89 = `*`(dx51, dx52);
    st `end.slopes` = r89;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L200() else L201();
  L197():
    dr34 = tryDispatchBuiltin.1("$", object54);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L199() else L198(dx46, dr34);
  L198(dx48, object56):
    r88 = `$`(object56, <sym range>);
    goto L196(dx48, r88);
  L259():
    dx98 = getTryDispatchBuiltinValue(dr54);
    goto L256(dx94, dx98);
  L260():
    end_slopes9 = force? end_slopes8;
    checkMissing(end_slopes9);
    c36 = `is.object`(end_slopes9);
    if c36 then L261() else L262(end_slopes9);
  L23(r91):
    c23 = `as.logical`(r91);
    if c23 then L204() else L24();
  L39(dx102):
    l9 = ld y;
    c37 = `is.object`(l9);
    if c37 then L264() else L265(dx102, l9);
  L199():
    dx50 = getTryDispatchBuiltinValue(dr34);
    goto L196(dx46, dx50);
  L200():
    extrap_left2 = ld `extrap.left`;
    check L202() else D48();
  L201():
    r90 = dyn base14(<sym extrap.left>);
    goto L23(r90);
  L261():
    dr56 = tryDispatchBuiltin.1("[", end_slopes9);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L263() else L262(dr56);
  L262(end_slopes11):
    __7 = ldf `[` in base;
    r130 = dyn __7(end_slopes11, 1);
    goto L39(r130);
  D48():
    deopt 184 [extrap_left2];
  L24():
    goto L29();
  L29():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L223() else L224();
  L40(dx108):
    st y = dx108;
    end_slopes12 = ld `end.slopes`;
    check L268() else D68();
  L202():
    extrap_left3 = force? extrap_left2;
    checkMissing(extrap_left3);
    any2 = ldf any in base;
    r92 = dyn any2(extrap_left3);
    check L203() else D49();
  L204():
    end_object = ld `end.object`;
    check L205() else D50();
  L263():
    dx101 = getTryDispatchBuiltinValue(dr56);
    goto L39(dx101);
  L264():
    dr58 = tryDispatchBuiltin.0("[<-", l9, dx102);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L266() else L265(dx102, dr58);
  L265(dx104, l11):
    extrap_left8 = ld `extrap.left`;
    check L267() else D67();
  D49():
    deopt 187 [r92];
  D50():
    deopt 188 [end_object];
  D67():
    deopt 263 [dx104, l11, dx102, extrap_left8];
  D68():
    deopt 267 [end_slopes12];
  L30(r106):
    c28 = `as.logical`(r106);
    if c28 then L227() else L31();
  L203():
    goto L23(r92);
  L205():
    end_object1 = force? end_object;
    checkMissing(end_object1);
    c24 = `is.object`(end_object1);
    if c24 then L206() else L207(end_object1);
  L223():
    extrap_right2 = ld `extrap.right`;
    check L225() else D55();
  L224():
    r105 = dyn base15(<sym extrap.right>);
    goto L30(r105);
  L266():
    dx106 = getTryDispatchBuiltinValue(dr58);
    goto L40(dx106);
  L267():
    extrap_left9 = force? extrap_left8;
    ___3 = ldf `[<-` in base;
    r131 = dyn ___3(l11, dx102, extrap_left9);
    goto L40(r131);
  L268():
    end_slopes13 = force? end_slopes12;
    checkMissing(end_slopes13);
    c38 = `is.object`(end_slopes13);
    if c38 then L269() else L270(end_slopes13);
  D55():
    deopt 214 [extrap_right2];
  L25(dx54):
    end_slopes = ld `end.slopes`;
    check L209() else D51();
  L31():
    goto L36(NULL);
  L36(r119):
    goto L37(r119);
  L41(dx110):
    l12 = ld y;
    c39 = `is.object`(l12);
    if c39 then L272() else L273(dx110, l12);
  L206():
    dr36 = tryDispatchBuiltin.1("[", end_object1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L208() else L207(dr36);
  L207(end_object3):
    __1 = ldf `[` in base;
    r93 = dyn __1(end_object3, 1);
    goto L25(r93);
  L225():
    extrap_right3 = force? extrap_right2;
    checkMissing(extrap_right3);
    any3 = ldf any in base;
    r107 = dyn any3(extrap_right3);
    check L226() else D56();
  L227():
    end_object4 = ld `end.object`;
    check L228() else D57();
  L269():
    dr60 = tryDispatchBuiltin.1("[", end_slopes13);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L271() else L270(dr60);
  L270(end_slopes15):
    __8 = ldf `[` in base;
    r132 = dyn __8(end_slopes15, 2);
    goto L41(r132);
  D51():
    deopt 192 [dx54, end_slopes];
  D56():
    deopt 217 [r107];
  D57():
    deopt 218 [end_object4];
  L42(dx115, dx116):
    st y = dx116;
    goto L37(dx115);
  L208():
    dx53 = getTryDispatchBuiltinValue(dr36);
    goto L25(dx53);
  L209():
    end_slopes1 = force? end_slopes;
    checkMissing(end_slopes1);
    c25 = `is.object`(end_slopes1);
    if c25 then L210() else L211(dx54, end_slopes1);
  L226():
    goto L30(r107);
  L228():
    end_object5 = force? end_object4;
    checkMissing(end_object5);
    c29 = `is.object`(end_object5);
    if c29 then L229() else L230(end_object5);
  L271():
    dx109 = getTryDispatchBuiltinValue(dr60);
    goto L41(dx109);
  L272():
    dr62 = tryDispatchBuiltin.0("[<-", l12, dx110);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L274() else L273(dx110, dr62);
  L273(dx112, l14):
    extrap_right8 = ld `extrap.right`;
    check L275() else D69();
  D69():
    deopt 273 [dx112, l14, dx110, extrap_right8];
  L26(dx59, dx60):
    xs10 = ld xs;
    check L213() else D52();
  L32(dx74):
    end_slopes4 = ld `end.slopes`;
    check L232() else D58();
  L210():
    dr38 = tryDispatchBuiltin.1("[", end_slopes1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L212() else L211(dx54, dr38);
  L211(dx56, end_slopes3):
    __2 = ldf `[` in base;
    r94 = dyn __2(end_slopes3, 1);
    goto L26(dx56, r94);
  L229():
    dr44 = tryDispatchBuiltin.1("[", end_object5);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L231() else L230(dr44);
  L230(end_object7):
    __4 = ldf `[` in base;
    r108 = dyn __4(end_object7, 2);
    goto L32(r108);
  L274():
    dx114 = getTryDispatchBuiltinValue(dr62);
    goto L42(dx110, dx114);
  L275():
    extrap_right9 = force? extrap_right8;
    ___4 = ldf `[<-` in base;
    r133 = dyn ___4(l14, dx110, extrap_right9);
    goto L42(dx112, r133);
  D52():
    deopt 196 [dx59, dx60, xs10];
  D58():
    deopt 222 [dx74, end_slopes4];
  L212():
    dx58 = getTryDispatchBuiltinValue(dr38);
    goto L26(dx54, dx58);
  L213():
    xs11 = force? xs10;
    checkMissing(xs11);
    c26 = `is.object`(xs11);
    if c26 then L214() else L215(dx59, dx60, xs11);
  L231():
    dx73 = getTryDispatchBuiltinValue(dr44);
    goto L32(dx73);
  L232():
    end_slopes5 = force? end_slopes4;
    checkMissing(end_slopes5);
    c30 = `is.object`(end_slopes5);
    if c30 then L233() else L234(dx74, end_slopes5);
  L27(dx68, dx69, dx70):
    r96 = `-`(dx70, 0.0);
    r97 = `*`(dx69, r96);
    r98 = `+`(dx68, r97);
    l3 = ld y;
    c27 = `is.object`(l3);
    if c27 then L218() else L219(r98, l3);
  L33(dx79, dx80):
    xs14 = ld xs;
    check L236() else D59();
  L214():
    dr40 = tryDispatchBuiltin.1("[", xs11);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L216() else L215(dx59, dx60, dr40);
  L215(dx63, dx64, xs13):
    extrap_left4 = ld `extrap.left`;
    check L217() else D53();
  L233():
    dr46 = tryDispatchBuiltin.1("[", end_slopes5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L235() else L234(dx74, dr46);
  L234(dx76, end_slopes7):
    __5 = ldf `[` in base;
    r109 = dyn __5(end_slopes7, 2);
    goto L33(dx76, r109);
  D53():
    deopt 198 [dx63, dx64, xs13, extrap_left4];
  D59():
    deopt 226 [dx79, dx80, xs14];
  L28(r102, dx72):
    st y = dx72;
    goto L29();
  L216():
    dx67 = getTryDispatchBuiltinValue(dr40);
    goto L27(dx59, dx60, dx67);
  L217():
    extrap_left5 = force? extrap_left4;
    __3 = ldf `[` in base;
    r95 = dyn __3(xs13, extrap_left5);
    goto L27(dx63, dx64, r95);
  L218():
    dr42 = tryDispatchBuiltin.0("[<-", l3, r98);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L220() else L219(r98, dr42);
  L219(r100, l5):
    extrap_left6 = ld `extrap.left`;
    check L221() else D54();
  L235():
    dx78 = getTryDispatchBuiltinValue(dr46);
    goto L33(dx74, dx78);
  L236():
    xs15 = force? xs14;
    checkMissing(xs15);
    c31 = `is.object`(xs15);
    if c31 then L237() else L238(dx79, dx80, xs15);
  D54():
    deopt 206 [r100, l5, r98, extrap_left6];
  L34(dx88, dx89, dx90):
    r111 = `-`(dx90, 1.0);
    r112 = `*`(dx89, r111);
    r113 = `+`(dx88, r112);
    l6 = ld y;
    c32 = `is.object`(l6);
    if c32 then L241() else L242(r113, l6);
  L220():
    dx71 = getTryDispatchBuiltinValue(dr42);
    goto L28(r98, dx71);
  L221():
    extrap_left7 = force? extrap_left6;
    ___1 = ldf `[<-` in base;
    r103 = dyn ___1(l5, r98, extrap_left7);
    goto L28(r100, r103);
  L237():
    dr48 = tryDispatchBuiltin.1("[", xs15);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L239() else L238(dx79, dx80, dr48);
  L238(dx83, dx84, xs17):
    extrap_right4 = ld `extrap.right`;
    check L240() else D60();
  D60():
    deopt 228 [dx83, dx84, xs17, extrap_right4];
  L35(r117, dx92):
    st y = dx92;
    goto L36(r117);
  L239():
    dx87 = getTryDispatchBuiltinValue(dr48);
    goto L34(dx79, dx80, dx87);
  L240():
    extrap_right5 = force? extrap_right4;
    __6 = ldf `[` in base;
    r110 = dyn __6(xs17, extrap_right5);
    goto L34(dx83, dx84, r110);
  L241():
    dr50 = tryDispatchBuiltin.0("[<-", l6, r113);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L243() else L242(r113, dr50);
  L242(r115, l8):
    extrap_right6 = ld `extrap.right`;
    check L244() else D61();
  D61():
    deopt 236 [r115, l8, r113, extrap_right6];
  L243():
    dx91 = getTryDispatchBuiltinValue(dr50);
    goto L35(r113, dx91);
  L244():
    extrap_right7 = force? extrap_right6;
    ___2 = ldf `[<-` in base;
    r118 = dyn ___2(l8, r113, extrap_right7);
    goto L35(r115, r118);
  }
}