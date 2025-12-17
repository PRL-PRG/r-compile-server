fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1719482137;
    st `proj.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1719482137(object, onedf, `unweighted.scale`, `...`) {
  (reg object:*, reg onedf:*, reg unweighted_scale:*, reg ddd:dots) -+> V { var object:*, var onedf:*, reg onedf_isMissing:L, reg onedf_orDefault:*, var `unweighted.scale`:*, reg unweighted_scale_isMissing:L, reg unweighted_scale_orDefault:*, var `...`:dots?, reg r:cls, reg r1:cls, reg r2:cls, reg unweighted_scale1:*, reg unweighted_scale2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg c5:L, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c8:L, reg r6:V, reg object1:*, reg object2:V, reg attr:cls, reg r7:V, reg c9:V, reg c10:L, reg c11:V, reg c13:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg object3:*, reg object4:V, reg attr1:cls, reg r11:V, reg terms:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg Terms:*, reg Terms1:V, reg attr2:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg Terms2:*, reg Terms3:V, reg attr3:cls, reg r19:V, reg c14:L, reg r21:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg Terms4:*, reg Terms5:V, reg attr4:cls, reg r25:V, reg c15:L, reg r27:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg r28:V, reg __:cls, reg r29:V, reg Terms6:*, reg Terms7:V, reg t:*, reg t1:V, reg c16:L, reg t3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r30:V, reg l:*, reg c17:L, reg dx7:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx9:V, reg dx11:V, reg ____:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg terms1:cls, reg formula:cls, reg error:*, reg error1:V, reg p1:p(V +), reg r35:V, reg p2:p(V +), reg r37:V, reg attr5:cls, reg r38:V, reg nrow:cls, reg err_qr:*, reg err_qr1:V, reg c18:L, reg err_qr3:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r39:V, reg p3:p(V +), reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg object7:*, reg object8:V, reg length:cls, reg r44:V, reg setNames:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg n_object:*, reg n_object1:V, reg vector:cls, reg r47:V, reg p4:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg object9:*, reg object10:V, reg names:cls, reg r51:V, reg p5:p(V +), reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg NROW:cls, reg err_qr4:*, reg err_qr5:V, reg c19:L, reg err_qr7:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r56:V, reg p6:p(V +), reg r58:V, reg r59:I, reg unweighted_scale3:*, reg unweighted_scale4:V, reg c20:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg r61:V, reg object11:*, reg object12:V, reg attr6:cls, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg r65:V, reg object13:*, reg object14:V, reg names1:cls, reg r66:V, reg s:V, reg l3:I, reg i2:I, reg i3:I, reg i4:I, reg c21:L, reg x:V, reg proj_lm:cls, reg object15:*, reg object16:V, reg c22:L, reg object18:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg i7:*, reg i8:V, reg __2:cls, reg r67:V, reg p7:p(V +), reg onedf1:*, reg onedf2:V, reg p8:p(V +), reg r70:V, reg unweighted_scale5:*, reg unweighted_scale6:V, reg c23:L, reg prj:*, reg prj1:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r71:V, reg i13:I, reg prj4:V, reg r72:V, reg wt:*, reg wt1:V, reg r73:V, reg r74:V, reg i14:I, reg matrix:cls, reg n:*, reg n1:V, reg p9:p(V +), reg ncol:cls, reg prj5:*, reg prj6:V, reg p10:p(V +), reg r78:V, reg p11:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r80:V, reg r81:V, reg D1:*, reg D2:V, reg colnames:cls, reg prj7:*, reg prj8:V, reg p12:p(V +), reg r83:V, reg list:cls, reg r84:V, reg p13:p(V +), reg r86:V, reg ____1:cls, reg rownames:cls, reg object19:*, reg object20:V, reg c24:L, reg object22:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg i15:*, reg i16:V, reg __3:cls, reg r87:V, reg c25:L, reg dx21:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r88:V, reg c26:L, reg dx25:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg r89:V, reg p14:p(V +), reg r91:V, reg p15:p(V +), reg rownames1:cls, reg object23:*, reg object24:V, reg c27:L, reg object26:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg i17:*, reg i18:V, reg __4:cls, reg r93:V, reg c28:L, reg dx31:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg r94:V, reg p16:p(V +), reg r96:V, reg p17:p(V +), reg r98:V, reg prj9:*, reg prj10:V, reg l4:*, reg c29:L, reg i20:I, reg prj12:V, reg l6:*, reg dr24:V, reg dc12:L, reg dx34:V, reg i22:I, reg dx35:V, reg select:*, reg select1:V, reg ___:cls, reg r99:V, reg as_matrix:cls, reg qr_qy:cls, reg err_qr8:*, reg err_qr9:V, reg p18:p(V +), reg result_i:*, reg result_i1:V, reg p19:p(V +), reg r102:V, reg p20:p(V +), reg r104:V, reg l7:*, reg c30:L, reg i24:I, reg r106:V, reg l9:*, reg dr26:V, reg dc13:L, reg dx36:V, reg i26:I, reg dx37:V, reg i27:*, reg i28:V, reg ____2:cls, reg r109:V, reg attr_xdim:cls, reg prj15:*, reg prj16:V, reg p21:p(V +), reg r111:V, reg l10:*, reg c31:L, reg i30:I, reg r114:V, reg l13:*, reg r115:V, reg l14:*, reg dr28:V, reg dc14:L, reg dx38:V, reg i32:I, reg r118:V, reg l16:*, reg r119:V, reg dx39:V, reg i33:*, reg i34:V, reg __5:cls, reg r120:V, reg attr_assign__:cls, reg r121:V, reg c32:L, reg i36:I, reg r123:V, reg l18:*, reg dr30:V, reg dc15:L, reg dx40:V, reg i38:I, reg dx41:V, reg i39:*, reg i40:V, reg ____3:cls, reg r126:V, reg colnames1:cls, reg prj17:*, reg prj18:V, reg p22:p(V +), reg r128:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r129:V, reg i43:I, reg r130:V, reg D3:*, reg D4:V, reg D2i:*, reg D2i1:V, reg list1:cls, reg r131:V, reg l19:*, reg c33:L, reg i45:I, reg r134:V, reg l22:*, reg r135:V, reg l23:*, reg dr32:V, reg dc16:L, reg dx42:V, reg i47:I, reg r138:V, reg l25:*, reg r139:V, reg dx43:V, reg i48:*, reg i49:V, reg __6:cls, reg r140:V, reg dimnames__:cls, reg r141:V, reg c34:L, reg i51:I, reg r143:V, reg l27:*, reg dr34:V, reg dc17:L, reg dx44:V, reg i53:I, reg dx45:V, reg i54:*, reg i55:V, reg ____4:cls, reg r146:V, reg factors_aovlist:cls, reg D2i2:*, reg D2i3:V, reg p23:p(V +), reg t_factor:*, reg t_factor1:V, reg p24:p(V +), reg i56:*, reg i57:V, reg p25:p(V +), reg e_factor:*, reg e_factor1:V, reg p26:p(V +), reg r151:V, reg l28:*, reg c35:L, reg i59:I, reg r154:V, reg l31:*, reg r155:V, reg l32:*, reg dr36:V, reg dc18:L, reg dx46:V, reg i61:I, reg r158:V, reg l34:*, reg r159:V, reg dx47:V, reg i62:*, reg i63:V, reg __7:cls, reg r160:V, reg attr__:cls, reg r161:V, reg c36:L, reg i65:I, reg r163:V, reg l36:*, reg dr38:V, reg dc19:L, reg dx48:V, reg i67:I, reg dx49:V, reg i68:*, reg i69:V, reg ____5:cls, reg r166:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r167:V, reg r168:V, reg object27:*, reg object28:V, reg attr7:cls, reg r169:V, reg l37:*, reg attr__1:cls, reg r170:V, reg e_factor2:*, reg e_factor3:V, reg l38:*, reg attr__2:cls, reg r171:V, reg t_factor2:*, reg t_factor3:V, reg l39:*, reg attr__3:cls, reg r172:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r173:V, reg r174:V, reg c37:cls, reg r175:V, reg l40:*, reg class__:cls, reg r176:V, reg result:*, reg result1:V |
    mkenv;
    st object = object;
    onedf_isMissing = missing.0(onedf);
    if onedf_isMissing then L0(FALSE) else L0(onedf);
  L0(onedf_orDefault):
    st onedf = onedf_orDefault;
    unweighted_scale_isMissing = missing.0(unweighted_scale);
    if unweighted_scale_isMissing then L1(FALSE) else L1(unweighted_scale);
  L1(unweighted_scale_orDefault):
    st `unweighted.scale` = unweighted_scale_orDefault;
    st `...` = ddd;
    r = clos inner2501545716;
    st `attr.xdim` = r;
    r1 = clos inner736444261;
    st `attr.assign<-` = r1;
    r2 = clos inner1652703032;
    st `factors.aovlist` = r2;
    unweighted_scale1 = ld `unweighted.scale`;
    check L37() else D0();
  D0():
    deopt 9 [unweighted_scale1];
  L37():
    unweighted_scale2 = force? unweighted_scale1;
    checkMissing(unweighted_scale2);
    c = `as.logical`(unweighted_scale2);
    if c then L38() else L2(c);
  L2(c2):
    c13 = `as.logical`(c2);
    if c13 then L46() else L5();
  L38():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L3(c5, r4):
    c10 = `as.logical`(r4);
    c11 = `&&`(c5, c10);
    goto L2(c11);
  L5():
    goto L6();
  L6():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L39():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L40():
    r3 = dyn base(<lang attr(object, "weights")>);
    goto L3(c, r3);
  L46():
    st `unweighted.scale` = FALSE;
    goto L6();
  L4(c8, r6):
    c9 = `==`(r6, NULL);
    goto L3(c8, c9);
  L7(r10):
    st `err.qr` = r10;
    terms = ldf terms;
    check L52() else D5();
  L41():
    object1 = ld object;
    check L43() else D1();
  L42():
    r5 = dyn base1(<sym object>, "weights");
    goto L4(c, r5);
  L48():
    object3 = ld object;
    check L50() else D3();
  L49():
    r9 = dyn base2(<sym object>, "error.qr");
    goto L7(r9);
  D1():
    deopt 14 [c, object1];
  D3():
    deopt 28 [object3];
  D5():
    deopt 35 [];
  L43():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r7 = dyn attr(object2, "weights");
    check L44() else D2();
  L50():
    object4 = force? object3;
    checkMissing(object4);
    attr1 = ldf attr in base;
    r11 = dyn attr1(object4, "error.qr");
    check L51() else D4();
  L52():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r13 = dyn terms(p, "Error");
    check L53() else D6();
  D2():
    deopt 18 [c, r7];
  D4():
    deopt 32 [r11];
  D6():
    deopt 38 [r13];
  L44():
    goto L4(c, r7);
  L51():
    goto L7(r11);
  L53():
    st Terms = r13;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L8(r15):
    st `t.factor` = r15;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L54():
    Terms = ld Terms;
    check L56() else D7();
  L55():
    r14 = dyn base3(<sym Terms>, "factors");
    goto L8(r14);
  D7():
    deopt 42 [Terms];
  L9(r18):
    c14 = `is.object`(r18);
    if c14 then L63() else L64(r18);
  L56():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    attr2 = ldf attr in base;
    r16 = dyn attr2(Terms1, "factors");
    check L57() else D8();
  L58():
    Terms2 = ld Terms;
    check L60() else D9();
  L59():
    r17 = dyn base4(<sym Terms>, "specials");
    goto L9(r17);
  D8():
    deopt 46 [r16];
  D9():
    deopt 50 [Terms2];
  L57():
    goto L8(r16);
  L60():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    attr3 = ldf attr in base;
    r19 = dyn attr3(Terms3, "specials");
    check L61() else D10();
  L62(dx1):
    st i = dx1;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L63():
    dr = tryDispatchBuiltin.1("$", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(dr);
  L64(r21):
    r22 = `$`(r21, <sym Error>);
    goto L62(r22);
  D10():
    deopt 54 [r19];
  L10(r24):
    c15 = `is.object`(r24);
    if c15 then L70() else L71(r24);
  L61():
    goto L9(r19);
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L62(dx);
  L66():
    Terms4 = ld Terms;
    check L68() else D11();
  L67():
    r23 = dyn base5(<sym Terms>, "variables");
    goto L10(r23);
  D11():
    deopt 59 [Terms4];
  L11(dx3):
    st t = dx3;
    Terms6 = ld Terms;
    check L74() else D14();
  L68():
    Terms5 = force? Terms4;
    checkMissing(Terms5);
    attr4 = ldf attr in base;
    r25 = dyn attr4(Terms5, "variables");
    check L69() else D12();
  L70():
    dr2 = tryDispatchBuiltin.1("[[", r24);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L72() else L71(dr2);
  L71(r27):
    i = ld i;
    check L73() else D13();
  D12():
    deopt 63 [r25];
  D13():
    deopt 65 [r27, 1.0, i];
  D14():
    deopt 70 [Terms6];
  L69():
    goto L10(r25);
  L72():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L73():
    i1 = force? i;
    checkMissing(i1);
    r28 = `+`(1.0, i1);
    __ = ldf `[[` in base;
    r29 = dyn __(r27, r28);
    goto L11(r29);
  L74():
    Terms7 = force? Terms6;
    checkMissing(Terms7);
    st error = Terms7;
    t = ld t;
    check L75() else D15();
  D15():
    deopt 73 [t];
  L75():
    t1 = force? t;
    checkMissing(t1);
    c16 = `is.object`(t1);
    if c16 then L76() else L77(t1);
  L12(dx5):
    l = ld error;
    c17 = `is.object`(l);
    if c17 then L79() else L80(dx5, l);
  L76():
    dr4 = tryDispatchBuiltin.1("[[", t1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L78() else L77(dr4);
  L77(t3):
    __1 = ldf `[[` in base;
    r30 = dyn __1(t3, 2);
    goto L12(r30);
  L13(dx11):
    st error = dx11;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L78():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L79():
    dr6 = tryDispatchBuiltin.0("[[<-", l, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L81() else L80(dx5, dr6);
  L80(dx7, l2):
    ____ = ldf `[[<-` in base;
    r31 = dyn ____(l2, dx5, 3);
    goto L13(r31);
  L14(r33):
    st `e.factor` = r33;
    nrow = ldf nrow;
    check L87() else D19();
  L81():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx9);
  L82():
    terms1 = ldf terms;
    check L84() else D16();
  L83():
    r32 = dyn base6(<lang terms(formula(error))>, "factors");
    goto L14(r32);
  D16():
    deopt 86 [];
  D19():
    deopt 94 [];
  L84():
    p2 = prom<V +>{
      formula = ldf formula;
      p1 = prom<V +>{
        error = ld error;
        error1 = force? error;
        checkMissing(error1);
        return error1;
      };
      r35 = dyn formula(p1);
      return r35;
    };
    r37 = dyn terms1(p2);
    check L85() else D17();
  L87():
    p3 = prom<V +>{
      err_qr = ld `err.qr`;
      err_qr1 = force? err_qr;
      checkMissing(err_qr1);
      c18 = `is.object`(err_qr1);
      if c18 then L1() else L2(err_qr1);
    L0(dx13):
      return dx13;
    L1():
      dr8 = tryDispatchBuiltin.1("$", err_qr1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(err_qr3):
      r39 = `$`(err_qr3, <sym qr>);
      goto L0(r39);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    };
    r41 = dyn nrow(p3);
    check L88() else D20();
  D17():
    deopt 88 [r37];
  D20():
    deopt 96 [r41];
  L85():
    attr5 = ldf attr in base;
    r38 = dyn attr5(r37, "factors");
    check L86() else D18();
  L88():
    st n = r41;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  D18():
    deopt 91 [r38];
  L15(r43):
    st `n.object` = r43;
    setNames = ldf setNames;
    check L93() else D23();
  L86():
    goto L14(r38);
  L89():
    object7 = ld object;
    check L91() else D21();
  L90():
    r42 = dyn base7(<sym object>);
    goto L15(r42);
  D21():
    deopt 100 [object7];
  D23():
    deopt 106 [];
  L91():
    object8 = force? object7;
    checkMissing(object8);
    length = ldf length in base;
    r44 = dyn length(object8);
    check L92() else D22();
  L93():
    p4 = prom<V +>{
      sym8 = ldf vector;
      base8 = ldf vector in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      n_object = ld `n.object`;
      n_object1 = force? n_object;
      checkMissing(n_object1);
      vector = ldf vector in base;
      r47 = dyn vector("list", n_object1);
      goto L0(r47);
    L2():
      r45 = dyn base8("list", <sym n.object>);
      goto L0(r45);
    };
    p5 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      names = ldf names in base;
      r51 = dyn names(object10);
      goto L0(r51);
    L2():
      r49 = dyn base9(<sym object>);
      goto L0(r49);
    };
    r53 = dyn setNames(p4, p5);
    check L94() else D24();
  D22():
    deopt 103 [r44];
  D24():
    deopt 109 [r53];
  L92():
    goto L15(r44);
  L94():
    st result = r53;
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L95() else L96();
  L16(r55):
    st D1 = r55;
    unweighted_scale3 = ld `unweighted.scale`;
    check L99() else D27();
  L95():
    NROW = ldf NROW;
    check L97() else D25();
  L96():
    r54 = dyn base10(<lang NROW(`$`(err.qr, qr))>);
    goto L16(r54);
  D25():
    deopt 113 [];
  D27():
    deopt 118 [unweighted_scale3];
  L97():
    p6 = prom<V +>{
      err_qr4 = ld `err.qr`;
      err_qr5 = force? err_qr4;
      checkMissing(err_qr5);
      c19 = `is.object`(err_qr5);
      if c19 then L1() else L2(err_qr5);
    L0(dx15):
      return dx15;
    L1():
      dr10 = tryDispatchBuiltin.1("$", err_qr5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(err_qr7):
      r56 = `$`(err_qr7, <sym qr>);
      goto L0(r56);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    };
    r58 = dyn NROW(p6);
    check L98() else D26();
  L99():
    unweighted_scale4 = force? unweighted_scale3;
    checkMissing(unweighted_scale4);
    c20 = `as.logical`(unweighted_scale4);
    if c20 then L100() else L17();
  D26():
    deopt 115 [r58];
  L17():
    goto L19();
  L19():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L106() else L107();
  L98():
    r59 = seq_len(r58);
    goto L16(r59);
  L100():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  L18(r61):
    st wt = r61;
    goto L19();
  L20(r65):
    s = toForSeq(r65);
    l3 = length(s);
    i2 = 0;
    goto L21(i2);
  L101():
    object11 = ld object;
    check L103() else D28();
  L102():
    r60 = dyn base11(<sym object>, "weights");
    goto L18(r60);
  L106():
    object13 = ld object;
    check L108() else D30();
  L107():
    r64 = dyn base12(<sym object>);
    goto L20(r64);
  D28():
    deopt 122 [object11];
  D30():
    deopt 132 [object13];
  L21(i3):
    i4 = `+`.1(i3, 1);
    c21 = `<`.1(l3, i4);
    if c21 then L110() else L34();
  L103():
    object12 = force? object11;
    checkMissing(object12);
    attr6 = ldf attr in base;
    r62 = dyn attr6(object12, "weights");
    check L104() else D29();
  L108():
    object14 = force? object13;
    checkMissing(object14);
    names1 = ldf names in base;
    r66 = dyn names1(object14);
    check L109() else D31();
  D29():
    deopt 126 [r62];
  D31():
    deopt 135 [r66];
  L34():
    x = `[[`(s, i4, NULL, TRUE);
    st i = x;
    proj_lm = ldf `proj.lm`;
    check L111() else D32();
  L104():
    goto L18(r62);
  L109():
    goto L20(r66);
  L110():
    sym16 = ldf attr;
    base16 = ldf attr in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L176() else L177();
  D32():
    deopt 137 [i4];
  L35(r168):
    l37 = ld result;
    attr__1 = ldf `attr<-`;
    check L180() else D69();
  L111():
    p7 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      c22 = `is.object`(object16);
      if c22 then L1() else L2(object16);
    L0(dx17):
      return dx17;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", object16);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object18):
      i7 = ld i;
      i8 = force? i7;
      __2 = ldf `[[` in base;
      r67 = dyn __2(object18, i8);
      goto L0(r67);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    p8 = prom<V +>{
      onedf1 = ld onedf;
      onedf2 = force? onedf1;
      checkMissing(onedf2);
      return onedf2;
    };
    r70 = dyn proj_lm[, onedf](p7, p8);
    check L112() else D33();
  L176():
    object27 = ld object;
    check L178() else D67();
  L177():
    r167 = dyn base16(<sym object>, "call");
    goto L35(r167);
  D33():
    deopt 141 [i4, r70];
  D67():
    deopt 258 [object27];
  D69():
    deopt 264 [r168, l37, r168];
  L112():
    st prj = r70;
    unweighted_scale5 = ld `unweighted.scale`;
    check L113() else D34();
  L178():
    object28 = force? object27;
    checkMissing(object28);
    attr7 = ldf attr in base;
    r169 = dyn attr7(object28, "call");
    check L179() else D68();
  L180():
    r170 = dyn attr__1(l37, NULL, "call", r168);
    check L181() else D70();
  D34():
    deopt 143 [i4, unweighted_scale5];
  D68():
    deopt 262 [r169];
  D70():
    deopt 267 [r168, r170];
  L113():
    unweighted_scale6 = force? unweighted_scale5;
    checkMissing(unweighted_scale6);
    c23 = `as.logical`(unweighted_scale6);
    if c23 then L114() else L22();
  L179():
    goto L35(r169);
  L181():
    st result = r170;
    e_factor2 = ld `e.factor`;
    check L182() else D71();
  D71():
    deopt 269 [e_factor2];
  L22():
    goto L24(i4);
  L24(i14):
    matrix = ldf matrix;
    check L120() else D37();
  L114():
    prj = ld prj;
    check L115() else D35();
  L182():
    e_factor3 = force? e_factor2;
    checkMissing(e_factor3);
    l38 = ld result;
    attr__2 = ldf `attr<-`;
    check L183() else D72();
  D35():
    deopt 145 [i4, prj];
  D37():
    deopt 155 [i14];
  D72():
    deopt 272 [e_factor3, l38, e_factor3];
  L115():
    prj1 = force? prj;
    checkMissing(prj1);
    sym13 = ldf sqrt;
    base13 = ldf sqrt in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L116() else L117();
  L120():
    p9 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    p11 = prom<V +>{
      ncol = ldf ncol;
      p10 = prom<V +>{
        prj5 = ld prj;
        prj6 = force? prj5;
        checkMissing(prj6);
        return prj6;
      };
      r78 = dyn ncol(p10);
      return r78;
    };
    p13 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      D1 = ld D1;
      D2 = force? D1;
      checkMissing(D2);
      colnames = ldf colnames;
      p12 = prom<V +>{
        prj7 = ld prj;
        prj8 = force? prj7;
        checkMissing(prj8);
        return prj8;
      };
      r83 = dyn colnames(p12);
      list = ldf list in base;
      r84 = dyn list(D2, r83);
      goto L0(r84);
    L2():
      r80 = dyn base14(<sym D1>, <lang colnames(prj)>);
      goto L0(r80);
    };
    r86 = dyn matrix[, , , dimnames](0.0, p9, p11, p13);
    check L121() else D38();
  L183():
    r171 = dyn attr__2(l38, NULL, "e.factor", e_factor3);
    check L184() else D73();
  D38():
    deopt 161 [i14, r86];
  D73():
    deopt 275 [e_factor3, r171];
  L23(i13, prj4, r72):
    r74 = `/`(prj4, r72);
    st prj = r74;
    goto L24(i13);
  L116():
    wt = ld wt;
    check L118() else D36();
  L117():
    r71 = dyn base13(<sym wt>);
    goto L23(i4, prj1, r71);
  L121():
    st `result.i` = r86;
    ____1 = ldf `%||%`;
    check L122() else D39();
  L184():
    st result = r171;
    t_factor2 = ld `t.factor`;
    check L185() else D74();
  D36():
    deopt 147 [i4, prj1, wt];
  D39():
    deopt 164 [i14];
  D74():
    deopt 277 [t_factor2];
  L118():
    wt1 = force? wt;
    checkMissing(wt1);
    r73 = sqrt(wt1);
    goto L23(i4, prj1, r73);
  L122():
    p15 = prom<V +>{
      rownames = ldf rownames;
      p14 = prom<V +>{
        object19 = ld object;
        object20 = force? object19;
        checkMissing(object20);
        c24 = `is.object`(object20);
        if c24 then L1() else L2(object20);
      L0(dx19):
        c25 = `is.object`(dx19);
        if c25 then L5() else L6(dx19);
      L1():
        dr14 = tryDispatchBuiltin.1("[[", object20);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(object22):
        i15 = ld i;
        i16 = force? i15;
        __3 = ldf `[[` in base;
        r87 = dyn __3(object22, i16);
        goto L0(r87);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx18);
      L4(dx23):
        c26 = `is.object`(dx23);
        if c26 then L9() else L10(dx23);
      L5():
        dr16 = tryDispatchBuiltin.1("$", dx19);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L7() else L6(dr16);
      L6(dx21):
        r88 = `$`(dx21, <sym qr>);
        goto L4(r88);
      L7():
        dx22 = getTryDispatchBuiltinValue(dr16);
        goto L4(dx22);
      L8(dx27):
        return dx27;
      L9():
        dr18 = tryDispatchBuiltin.1("$", dx23);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L11() else L10(dr18);
      L10(dx25):
        r89 = `$`(dx25, <sym qr>);
        goto L8(r89);
      L11():
        dx26 = getTryDispatchBuiltinValue(dr18);
        goto L8(dx26);
      };
      r91 = dyn rownames(p14);
      return r91;
    };
    p17 = prom<V +>{
      rownames1 = ldf rownames;
      p16 = prom<V +>{
        object23 = ld object;
        object24 = force? object23;
        checkMissing(object24);
        c27 = `is.object`(object24);
        if c27 then L1() else L2(object24);
      L0(dx29):
        c28 = `is.object`(dx29);
        if c28 then L5() else L6(dx29);
      L1():
        dr20 = tryDispatchBuiltin.1("[[", object24);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(object26):
        i17 = ld i;
        i18 = force? i17;
        __4 = ldf `[[` in base;
        r93 = dyn __4(object26, i18);
        goto L0(r93);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx28);
      L4(dx33):
        return dx33;
      L5():
        dr22 = tryDispatchBuiltin.1("$", dx29);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L7() else L6(dr22);
      L6(dx31):
        r94 = `$`(dx31, <sym residuals>);
        goto L4(r94);
      L7():
        dx32 = getTryDispatchBuiltinValue(dr22);
        goto L4(dx32);
      };
      r96 = dyn rownames1(p16);
      return r96;
    };
    r98 = dyn ____1(p15, p17);
    check L123() else D40();
  L185():
    t_factor3 = force? t_factor2;
    checkMissing(t_factor3);
    l39 = ld result;
    attr__3 = ldf `attr<-`;
    check L186() else D75();
  D40():
    deopt 167 [i14, r98];
  D75():
    deopt 280 [t_factor3, l39, t_factor3];
  L123():
    st select = r98;
    prj9 = ld prj;
    check L124() else D41();
  L186():
    r172 = dyn attr__3(l39, NULL, "t.factor", t_factor3);
    check L187() else D76();
  D41():
    deopt 169 [i14, prj9];
  D76():
    deopt 283 [t_factor3, r172];
  L124():
    prj10 = force? prj9;
    checkMissing(prj10);
    l4 = ld `result.i`;
    c29 = `is.object`(l4);
    if c29 then L125() else L126(i14, prj10, l4);
  L187():
    st result = r172;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L188() else L189();
  L25(i22, dx35):
    st `result.i` = dx35;
    as_matrix = ldf `as.matrix`;
    check L129() else D43();
  L36(r174):
    l40 = ld result;
    class__ = ldf `class<-`;
    check L191() else D78();
  L125():
    dr24 = tryDispatchBuiltin.0("[<-", l4, prj10);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L127() else L126(i14, prj10, dr24);
  L126(i20, prj12, l6):
    select = ld select;
    check L128() else D42();
  L188():
    c37 = ldf c in base;
    r175 = dyn c37("aovprojlist", "listof");
    check L190() else D77();
  L189():
    r173 = dyn base17("aovprojlist", "listof");
    goto L36(r173);
  D42():
    deopt 172 [i20, prj12, l6, prj10, select];
  D43():
    deopt 179 [i22];
  D77():
    deopt 290 [r175];
  D78():
    deopt 292 [r174, l40, r174];
  L127():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L25(i14, dx34);
  L128():
    select1 = force? select;
    ___ = ldf `[<-` in base;
    r99 = dyn ___(l4, select1, <missing>, prj10);
    goto L25(i20, r99);
  L129():
    p20 = prom<V +>{
      qr_qy = ldf `qr.qy`;
      p18 = prom<V +>{
        err_qr8 = ld `err.qr`;
        err_qr9 = force? err_qr8;
        checkMissing(err_qr9);
        return err_qr9;
      };
      p19 = prom<V +>{
        result_i = ld `result.i`;
        result_i1 = force? result_i;
        checkMissing(result_i1);
        return result_i1;
      };
      r102 = dyn qr_qy(p18, p19);
      return r102;
    };
    r104 = dyn as_matrix(p20);
    check L130() else D44();
  L190():
    goto L36(r175);
  L191():
    r176 = dyn class__(l40, NULL, r174);
    check L192() else D79();
  D44():
    deopt 181 [i22, r104];
  D79():
    deopt 294 [r174, r176];
  L130():
    l7 = ld result;
    c30 = `is.object`(l7);
    if c30 then L131() else L132(i22, r104, l7);
  L192():
    st result = r176;
    result = ld result;
    check L193() else D80();
  D80():
    deopt 296 [result];
  L26(i26, dx37):
    st result = dx37;
    attr_xdim = ldf `attr.xdim`;
    check L135() else D46();
  L131():
    dr26 = tryDispatchBuiltin.0("[[<-", l7, r104);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L133() else L132(i22, r104, dr26);
  L132(i24, r106, l9):
    i27 = ld i;
    check L134() else D45();
  L193():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  D45():
    deopt 183 [i24, r106, l9, r104, i27];
  D46():
    deopt 188 [i26];
  L133():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L26(i22, dx36);
  L134():
    i28 = force? i27;
    ____2 = ldf `[[<-` in base;
    r109 = dyn ____2(l9, r104, i28);
    goto L26(i24, r109);
  L135():
    p21 = prom<V +>{
      prj15 = ld prj;
      prj16 = force? prj15;
      checkMissing(prj16);
      return prj16;
    };
    r111 = dyn attr_xdim(p21);
    check L136() else D47();
  D47():
    deopt 190 [i26, r111];
  L136():
    l10 = ld result;
    c31 = `is.object`(l10);
    if c31 then L137() else L138(i26, r111, l10, r111, l10);
  L27(i32, r118, l16, r119, dx39):
    attr_assign__ = ldf `attr.assign<-`;
    check L141() else D49();
  L137():
    dr28 = tryDispatchBuiltin.1("[[", l10);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L139() else L138(i26, r111, l10, r111, dr28);
  L138(i30, r114, l13, r115, l14):
    i33 = ld i;
    check L140() else D48();
  D48():
    deopt 193 [i30, r114, l13, r115, l14, i33];
  D49():
    deopt 197 [i32, r118, l16, dx39, r119];
  L139():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L27(i26, r111, l10, r111, dx38);
  L140():
    i34 = force? i33;
    __5 = ldf `[[` in base;
    r120 = dyn __5(l14, i34);
    goto L27(i30, r114, l13, r115, r120);
  L141():
    r121 = dyn attr_assign__(dx39, NULL, r119);
    check L142() else D50();
  D50():
    deopt 199 [i32, r118, l16, r121];
  L142():
    c32 = `is.object`(l16);
    if c32 then L143() else L144(i32, r118, l16);
  L28(i38, dx41):
    st result = dx41;
    colnames1 = ldf colnames;
    check L147() else D52();
  L143():
    dr30 = tryDispatchBuiltin.0("[[<-", l16, r121);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L145() else L144(i32, r118, dr30);
  L144(i36, r123, l18):
    i39 = ld i;
    check L146() else D51();
  D51():
    deopt 200 [i36, r123, l18, r121, i39];
  D52():
    deopt 205 [i38];
  L145():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L28(i32, dx40);
  L146():
    i40 = force? i39;
    ____3 = ldf `[[<-` in base;
    r126 = dyn ____3(l18, r121, i40);
    goto L28(i36, r126);
  L147():
    p22 = prom<V +>{
      prj17 = ld prj;
      prj18 = force? prj17;
      checkMissing(prj18);
      return prj18;
    };
    r128 = dyn colnames1(p22);
    check L148() else D53();
  D53():
    deopt 207 [i38, r128];
  L148():
    st D2i = r128;
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L149() else L150();
  L29(i43, r130):
    l19 = ld result;
    c33 = `is.object`(l19);
    if c33 then L154() else L155(i43, r130, l19, r130, l19);
  L149():
    D3 = ld D1;
    check L151() else D54();
  L150():
    r129 = dyn base15(<sym D1>, <sym D2i>);
    goto L29(i38, r129);
  D54():
    deopt 211 [i38, D3];
  L30(i47, r138, l25, r139, dx43):
    dimnames__ = ldf `dimnames<-`;
    check L158() else D58();
  L151():
    D4 = force? D3;
    checkMissing(D4);
    D2i = ld D2i;
    check L152() else D55();
  L154():
    dr32 = tryDispatchBuiltin.1("[[", l19);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L156() else L155(i43, r130, l19, r130, dr32);
  L155(i45, r134, l22, r135, l23):
    i48 = ld i;
    check L157() else D57();
  D55():
    deopt 213 [i38, D2i];
  D57():
    deopt 219 [i45, r134, l22, r135, l23, i48];
  D58():
    deopt 223 [i47, r138, l25, dx43, r139];
  L152():
    D2i1 = force? D2i;
    checkMissing(D2i1);
    list1 = ldf list in base;
    r131 = dyn list1(D4, D2i1);
    check L153() else D56();
  L156():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L30(i43, r130, l19, r130, dx42);
  L157():
    i49 = force? i48;
    __6 = ldf `[[` in base;
    r140 = dyn __6(l23, i49);
    goto L30(i45, r134, l22, r135, r140);
  L158():
    r141 = dyn dimnames__(dx43, NULL, r139);
    check L159() else D59();
  D56():
    deopt 216 [i38, r131];
  D59():
    deopt 225 [i47, r138, l25, r141];
  L153():
    goto L29(i38, r131);
  L159():
    c34 = `is.object`(l25);
    if c34 then L160() else L161(i47, r138, l25);
  L31(i53, dx45):
    st result = dx45;
    factors_aovlist = ldf `factors.aovlist`;
    check L164() else D61();
  L160():
    dr34 = tryDispatchBuiltin.0("[[<-", l25, r141);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L162() else L161(i47, r138, dr34);
  L161(i51, r143, l27):
    i54 = ld i;
    check L163() else D60();
  D60():
    deopt 226 [i51, r143, l27, r141, i54];
  D61():
    deopt 231 [i53];
  L162():
    dx44 = getTryDispatchBuiltinValue(dr34);
    goto L31(i47, dx44);
  L163():
    i55 = force? i54;
    ____4 = ldf `[[<-` in base;
    r146 = dyn ____4(l27, r141, i55);
    goto L31(i51, r146);
  L164():
    p23 = prom<V +>{
      D2i2 = ld D2i;
      D2i3 = force? D2i2;
      checkMissing(D2i3);
      return D2i3;
    };
    p24 = prom<V +>{
      t_factor = ld `t.factor`;
      t_factor1 = force? t_factor;
      checkMissing(t_factor1);
      return t_factor1;
    };
    p25 = prom<V +>{
      i56 = ld i;
      i57 = force? i56;
      checkMissing(i57);
      return i57;
    };
    p26 = prom<V +>{
      e_factor = ld `e.factor`;
      e_factor1 = force? e_factor;
      checkMissing(e_factor1);
      return e_factor1;
    };
    r151 = dyn factors_aovlist[, , strata, efactor](p23, p24, p25, p26);
    check L165() else D62();
  D62():
    deopt 238 [i53, r151];
  L165():
    l28 = ld result;
    c35 = `is.object`(l28);
    if c35 then L166() else L167(i53, r151, l28, r151, l28);
  L32(i61, r158, l34, r159, dx47):
    attr__ = ldf `attr<-`;
    check L170() else D64();
  L166():
    dr36 = tryDispatchBuiltin.1("[[", l28);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L168() else L167(i53, r151, l28, r151, dr36);
  L167(i59, r154, l31, r155, l32):
    i62 = ld i;
    check L169() else D63();
  D63():
    deopt 241 [i59, r154, l31, r155, l32, i62];
  D64():
    deopt 245 [i61, r158, l34, dx47, r159];
  L168():
    dx46 = getTryDispatchBuiltinValue(dr36);
    goto L32(i53, r151, l28, r151, dx46);
  L169():
    i63 = force? i62;
    __7 = ldf `[[` in base;
    r160 = dyn __7(l32, i63);
    goto L32(i59, r154, l31, r155, r160);
  L170():
    r161 = dyn attr__(dx47, NULL, "factors", r159);
    check L171() else D65();
  D65():
    deopt 248 [i61, r158, l34, r161];
  L171():
    c36 = `is.object`(l34);
    if c36 then L172() else L173(i61, r158, l34);
  L33(i67, dx49):
    st result = dx49;
    goto L21(i67);
  L172():
    dr38 = tryDispatchBuiltin.0("[[<-", l34, r161);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L174() else L173(i61, r158, dr38);
  L173(i65, r163, l36):
    i68 = ld i;
    check L175() else D66();
  D66():
    deopt 249 [i65, r163, l36, r161, i68];
  L174():
    dx48 = getTryDispatchBuiltinValue(dr38);
    goto L33(i61, dx48);
  L175():
    i69 = force? i68;
    ____5 = ldf `[[<-` in base;
    r166 = dyn ____5(l36, r161, i69);
    goto L33(i65, r166);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attributes:cls, reg r2:V, reg atrf:*, reg atrf1:V, reg c:L, reg atrf3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg atrf6:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg atrf9:V, reg r6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg atrf12:V, reg r8:V, reg atrf13:*, reg atrf14:V, reg names:cls, reg r9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg atrf17:V, reg r11:V, reg c1:cls, reg r12:V, reg match:cls, reg r13:V, reg is_na:cls, reg r14:V, reg __:cls, reg r15:V |
    mkenv;
    st x = x;
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st atrf = r1;
    atrf = ld atrf;
    check L10() else D2();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [atrf];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    attributes = ldf attributes in base;
    r2 = dyn attributes(x2);
    check L9() else D1();
  L10():
    atrf1 = force? atrf;
    checkMissing(atrf1);
    c = `is.object`(atrf1);
    if c then L11() else L12(atrf1);
  D1():
    deopt 5 [r2];
  L1(dx1):
    popenv;
    return dx1;
  L9():
    goto L0(r2);
  L11():
    dr = tryDispatchBuiltin.1("[", atrf1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(atrf3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(atrf6, r4):
    __ = ldf `[` in base;
    r15 = dyn __(atrf6, r4);
    goto L1(r15);
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L14():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r3 = dyn base1(<lang match(names(atrf), c("names", "dim", "dimnames"))>);
    goto L2(atrf3, r3);
  L3(atrf9, r6):
    is_na = ldf `is.na` in base;
    r14 = dyn is_na(r6);
    check L26() else D7();
  L16():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  L17():
    r5 = dyn base2(<lang names(atrf)>, <lang c("names", "dim", "dimnames")>);
    goto L3(atrf3, r5);
  D7():
    deopt 31 [atrf9, r14];
  L4(atrf12, r8):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L22() else L23();
  L18():
    atrf13 = ld atrf;
    check L20() else D3();
  L19():
    r7 = dyn base3(<sym atrf>);
    goto L4(atrf3, r7);
  L26():
    goto L2(atrf9, r14);
  D3():
    deopt 15 [atrf3, atrf13];
  L5(atrf17, r11):
    match = ldf match in base;
    r13 = dyn match(r8, r11, NA_INT, NULL);
    check L25() else D6();
  L20():
    atrf14 = force? atrf13;
    checkMissing(atrf14);
    names = ldf names in base;
    r9 = dyn names(atrf14);
    check L21() else D4();
  L22():
    c1 = ldf c in base;
    r12 = dyn c1("names", "dim", "dimnames");
    check L24() else D5();
  L23():
    r10 = dyn base4("names", "dim", "dimnames");
    goto L5(atrf12, r10);
  D4():
    deopt 18 [atrf3, r9];
  D5():
    deopt 25 [atrf12, r12];
  D6():
    deopt 29 [atrf17, r13];
  L21():
    goto L4(atrf3, r9);
  L24():
    goto L5(atrf12, r12);
  L25():
    goto L3(atrf17, r13);
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg names:cls, reg r2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x1:V, reg value3:*, reg value4:V, reg c1:L, reg i6:I, reg value6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg nm:*, reg nm1:V, reg __:cls, reg r3:V, reg l1:*, reg attr__:cls, reg nm2:*, reg nm3:V, reg p:p(V +), reg r5:V, reg x2:*, reg x3:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L4():
    value1 = ld value;
    check L6() else D0();
  L5():
    r = dyn base(<sym value>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L8() else L3();
  L6():
    value2 = force? value1;
    checkMissing(value2);
    names = ldf names in base;
    r2 = dyn names(value2);
    check L7() else D1();
  D1():
    deopt 5 [r2];
  L3():
    x1 = `[[`(s, i2, NULL, TRUE);
    st nm = x1;
    value3 = ld value;
    check L9() else D2();
  L7():
    goto L0(r2);
  L8():
    x2 = ld x;
    check L16() else D6();
  D2():
    deopt 6 [i2, value3];
  D6():
    deopt 20 [x2];
  L9():
    value4 = force? value3;
    checkMissing(value4);
    c1 = `is.object`(value4);
    if c1 then L10() else L11(i2, value4);
  L16():
    x3 = force? x2;
    checkMissing(x3);
    popenv;
    return x3;
  L2(i8, dx1):
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L14() else D4();
  L10():
    dr = tryDispatchBuiltin.1("[", value4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(i2, dr);
  L11(i6, value6):
    nm = ld nm;
    check L13() else D3();
  D3():
    deopt 8 [i6, value6, nm];
  D4():
    deopt 12 [i8, dx1, l1, dx1];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L13():
    nm1 = force? nm;
    __ = ldf `[` in base;
    r3 = dyn __(value6, nm1);
    goto L2(i6, r3);
  L14():
    p = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r5 = dyn attr__(l1, NULL, p, dx1);
    check L15() else D5();
  D5():
    deopt 15 [i8, dx1, r5];
  L15():
    st x = r5;
    goto L1(i8);
  }
}
fun inner1652703032(pnames, tfactor, strata, efactor) {
  (reg pnames:*, reg tfactor:*, reg strata:*, reg efactor:*) -+> V { var pnames:*, var tfactor:*, var strata:*, reg strata_isMissing:L, reg strata_orDefault:*, var efactor:*, reg efactor_isMissing:L, reg efactor_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg pnames1:*, reg pnames2:V, reg match:cls, reg r4:V, reg is_na:cls, reg r5:V, reg r6:V, reg c:L, reg pnames3:*, reg pnames4:V, reg c1:L, reg pnames6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg int:*, reg int1:V, reg r7:V, reg __:cls, reg r8:V, reg apply:cls, reg tfactor1:*, reg tfactor2:V, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg rownames:cls, reg tfactor3:*, reg tfactor4:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg r19:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg strata1:*, reg strata2:V, reg colnames:cls, reg efactor1:*, reg efactor2:V, reg p4:p(V +), reg r25:V, reg match1:cls, reg r26:V, reg is_na1:cls, reg r27:V, reg r28:V, reg c3:L, reg rownames1:cls, reg efactor3:*, reg efactor4:V, reg p5:p(V +), reg r30:V, reg c4:L, reg r32:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg r37:V, reg efactor5:*, reg efactor6:V, reg c5:L, reg r39:V, reg efactor8:V, reg dr4:V, reg dc2:L, reg dx5:V, reg r41:V, reg dx6:V, reg err:*, reg err1:V, reg __1:cls, reg r42:V, reg as_logical:cls, reg r43:V, reg __2:cls, reg r44:V, reg dx7:V, reg strata3:*, reg strata4:V, reg r45:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg rownames2:cls, reg efactor9:*, reg efactor10:V, reg p6:p(V +), reg r49:V, reg c7:L, reg r51:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg r56:V, reg efactor11:*, reg efactor12:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg r61:V, reg ncol:cls, reg efactor13:*, reg efactor14:V, reg p7:p(V +), reg r63:V, reg rep_int:cls, reg r64:V, reg ___:cls, reg r65:V, reg as_logical1:cls, reg r66:V, reg __3:cls, reg r67:V, reg c8:cls, reg r68:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg enames:*, reg enames1:V, reg c9:V, reg r71:V, reg c10:L, reg append:cls, reg tnames:*, reg tnames1:V, reg p8:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r73:V, reg r74:V, reg enames2:*, reg enames3:V, reg list:cls, reg r75:V, reg p9:p(V +), reg r77:V, reg r78:V, reg tnames2:*, reg tnames3:V, reg c11:L, reg tnames5:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r80:V, reg tnames8:V, reg r81:V, reg pnames7:*, reg pnames8:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r82:V, reg tnames11:V, reg r83:V, reg tnames12:*, reg tnames13:V, reg names:cls, reg r84:V, reg match2:cls, reg r85:V, reg __4:cls, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg r88:V, reg int2:*, reg int3:V, reg is_na2:cls, reg r89:V, reg r90:V, reg c12:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r91:V, reg r92:V, reg result:*, reg result1:V, reg c13:cls, reg r93:V, reg result2:*, reg result3:V |
    mkenv;
    st pnames = pnames;
    st tfactor = tfactor;
    strata_isMissing = missing.0(strata);
    if strata_isMissing then L0(FALSE) else L0(strata);
  L0(strata_orDefault):
    st strata = strata_orDefault;
    efactor_isMissing = missing.0(efactor);
    if efactor_isMissing then L1(FALSE) else L1(efactor);
  L1(efactor_orDefault):
    st efactor = efactor_orDefault;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L2(r1):
    r6 = `!`(r1);
    c = `as.logical`(r6);
    if c then L39() else L4();
  L32():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L33():
    r = dyn base(<lang `<-`(int, match("(Intercept)", pnames))>);
    goto L2(r);
  L3(r3):
    st int = r3;
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(r3);
    check L38() else D2();
  L4():
    goto L6();
  L6():
    apply = ldf apply;
    check L46() else D5();
  L34():
    pnames1 = ld pnames;
    check L36() else D0();
  L35():
    r2 = dyn base1("(Intercept)", <sym pnames>);
    goto L3(r2);
  L39():
    pnames3 = ld pnames;
    check L40() else D3();
  D0():
    deopt 5 [pnames1];
  D2():
    deopt 13 [r5];
  D3():
    deopt 15 [pnames3];
  D5():
    deopt 25 [];
  L36():
    pnames2 = force? pnames1;
    checkMissing(pnames2);
    match = ldf match in base;
    r4 = dyn match("(Intercept)", pnames2, NA_INT, NULL);
    check L37() else D1();
  L38():
    goto L2(r5);
  L40():
    pnames4 = force? pnames3;
    checkMissing(pnames4);
    c1 = `is.object`(pnames4);
    if c1 then L41() else L42(pnames4);
  L46():
    p = prom<V +>{
      tfactor1 = ld tfactor;
      tfactor2 = force? tfactor1;
      checkMissing(tfactor2);
      return tfactor2;
    };
    p1 = prom<V +>{
      r10 = clos inner1057758408;
      return r10;
    };
    p3 = prom<V +>{
      rownames = ldf rownames;
      p2 = prom<V +>{
        tfactor3 = ld tfactor;
        tfactor4 = force? tfactor3;
        checkMissing(tfactor4);
        return tfactor4;
      };
      r13 = dyn rownames(p2);
      return r13;
    };
    r15 = dyn apply(p, 2, p1, p3);
    check L47() else D6();
  D1():
    deopt 10 [r4];
  D6():
    deopt 30 [r15];
  L5(dx1):
    st pnames = dx1;
    goto L6();
  L37():
    goto L3(r4);
  L41():
    dr = tryDispatchBuiltin.1("[", pnames4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(pnames6):
    int = ld int;
    check L44() else D4();
  L47():
    st tnames = r15;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  D4():
    deopt 17 [pnames6, int];
  L7(r17):
    r19 = `!`(r17);
    c2 = `as.logical`(r19);
    if c2 then L50() else L8();
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L44():
    int1 = force? int;
    checkMissing(int1);
    r7 = `-`(<missing>, int1);
    __ = ldf `[` in base;
    r8 = dyn __(pnames6, r7);
    goto L5(r8);
  L48():
    missing = ldf missing in base;
    r18 = dyn missing(<sym efactor>);
    goto L7(r18);
  L49():
    r16 = dyn base2(<sym efactor>);
    goto L7(r16);
  L8():
    goto L24();
  L24():
    tnames2 = ld tnames;
    check L104() else D30();
  L50():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  D30():
    deopt 120 [tnames2];
  L9(r21):
    r28 = `!`(r21);
    c3 = `as.logical`(r28);
    if c3 then L60() else L11();
  L51():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L52():
    r20 = dyn base3(<lang `<-`(err, match(strata, colnames(efactor)))>);
    goto L9(r20);
  L104():
    tnames3 = force? tnames2;
    checkMissing(tnames3);
    c11 = `is.object`(tnames3);
    if c11 then L105() else L106(tnames3);
  L10(r23):
    st err = r23;
    is_na1 = ldf `is.na` in base;
    r27 = dyn is_na1(r23);
    check L59() else D11();
  L11():
    strata3 = ld strata;
    check L75() else D17();
  L15(dx7):
    st enames = dx7;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L25(dx11):
    st result = dx11;
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L116() else L117();
  L53():
    strata1 = ld strata;
    check L55() else D7();
  L54():
    r22 = dyn base4(<sym strata>, <lang colnames(efactor)>);
    goto L10(r22);
  L60():
    rownames1 = ldf rownames;
    check L61() else D12();
  L105():
    dr8 = tryDispatchBuiltin.1("[", tnames3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L107() else L106(dr8);
  L106(tnames5):
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  D7():
    deopt 40 [strata1];
  D11():
    deopt 52 [r27];
  D12():
    deopt 55 [];
  D17():
    deopt 70 [strata3];
  L21(r70):
    r71 = `!`(r70);
    c10 = `as.logical`(r71);
    if c10 then L99() else L22();
  L26(tnames8, r81):
    __4 = ldf `[` in base;
    r86 = dyn __4(tnames8, r81);
    goto L25(r86);
  L28(r88):
    r90 = `!`(r88);
    c12 = `as.logical`(r90);
    if c12 then L120() else L29();
  L55():
    strata2 = force? strata1;
    checkMissing(strata2);
    colnames = ldf colnames;
    check L56() else D8();
  L59():
    goto L9(r27);
  L61():
    p5 = prom<V +>{
      efactor3 = ld efactor;
      efactor4 = force? efactor3;
      checkMissing(efactor4);
      return efactor4;
    };
    r30 = dyn rownames1(p5);
    check L62() else D13();
  L75():
    strata4 = force? strata3;
    checkMissing(strata4);
    r45 = `==`(strata4, "Within");
    c6 = `as.logical`(r45);
    if c6 then L76() else L16();
  L96():
    enames = ld enames;
    check L98() else D27();
  L97():
    r69 = dyn base9(<sym enames>);
    goto L21(r69);
  L107():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L25(dx10);
  L108():
    pnames7 = ld pnames;
    check L110() else D31();
  L109():
    r80 = dyn base11(<sym pnames>, <lang names(tnames)>);
    goto L26(tnames5, r80);
  L116():
    int2 = ld int;
    check L118() else D35();
  L117():
    r87 = dyn base13(<sym int>);
    goto L28(r87);
  D8():
    deopt 43 [];
  D13():
    deopt 57 [r30];
  D27():
    deopt 106 [enames];
  D31():
    deopt 124 [tnames5, pnames7];
  D35():
    deopt 140 [int2];
  L16():
    goto L15(NULL);
  L22():
    goto L23(NULL);
  L23(r78):
    goto L24();
  L29():
    goto L31();
  L31():
    result2 = ld result;
    check L126() else D39();
  L56():
    p4 = prom<V +>{
      efactor1 = ld efactor;
      efactor2 = force? efactor1;
      checkMissing(efactor2);
      return efactor2;
    };
    r25 = dyn colnames(p4);
    check L57() else D9();
  L62():
    c4 = `is.object`(r30);
    if c4 then L63() else L64(r30);
  L76():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L98():
    enames1 = force? enames;
    checkMissing(enames1);
    c9 = `==`(enames1, NULL);
    goto L21(c9);
  L99():
    append = ldf append;
    check L100() else D28();
  L110():
    pnames8 = force? pnames7;
    checkMissing(pnames8);
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L111() else L112();
  L118():
    int3 = force? int2;
    checkMissing(int3);
    is_na2 = ldf `is.na` in base;
    r89 = dyn is_na2(int3);
    check L119() else D36();
  L120():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L121() else L122();
  D9():
    deopt 45 [r25];
  D28():
    deopt 111 [];
  D36():
    deopt 143 [r89];
  D39():
    deopt 156 [result2];
  L12(dx4):
    goto L15(dx4);
  L17(r47):
    goto L15(r47);
  L27(tnames11, r83):
    match2 = ldf match in base;
    r85 = dyn match2(pnames8, r83, NA_INT, NULL);
    check L115() else D34();
  L30(r92):
    st result = r92;
    goto L31();
  L57():
    match1 = ldf match in base;
    r26 = dyn match1(strata2, r25, NA_INT, NULL);
    check L58() else D10();
  L63():
    dr2 = tryDispatchBuiltin.1("[", r30);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(dr2);
  L64(r32):
    sym5 = ldf `as.logical`;
    base5 = ldf `as.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L77():
    rownames2 = ldf rownames;
    check L79() else D18();
  L78():
    r46 = dyn base6(<lang `[`(rownames(efactor), as.logical(`%*%`(efactor, rep.int(1.0, ncol(efactor)))))>, "Within");
    goto L17(r46);
  L100():
    p8 = prom<V +>{
      tnames = ld tnames;
      tnames1 = force? tnames;
      checkMissing(tnames1);
      return tnames1;
    };
    p9 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      enames2 = ld enames;
      enames3 = force? enames2;
      checkMissing(enames3);
      list = ldf list in base;
      r75 = dyn list(enames3);
      goto L0(r75);
    L2():
      r73 = dyn base10[Residuals](<sym enames>);
      goto L0(r73);
    };
    r77 = dyn append(p8, p9);
    check L101() else D29();
  L111():
    tnames12 = ld tnames;
    check L113() else D32();
  L112():
    r82 = dyn base12(<sym tnames>);
    goto L27(tnames5, r82);
  L119():
    goto L28(r89);
  L121():
    result = ld result;
    check L123() else D37();
  L122():
    r91 = dyn base14[`(Intercept)`, ]("(Intercept)", <sym result>);
    goto L30(r91);
  L126():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D10():
    deopt 49 [r26];
  D18():
    deopt 77 [];
  D29():
    deopt 114 [r77];
  D32():
    deopt 128 [tnames5, tnames12];
  D34():
    deopt 135 [tnames11, r85];
  D37():
    deopt 149 [result];
  L13(r36, r37):
    __2 = ldf `[` in base;
    r44 = dyn __2(r36, r37);
    goto L12(r44);
  L58():
    goto L10(r26);
  L65():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx3);
  L66():
    efactor5 = ld efactor;
    check L68() else D14();
  L67():
    r35 = dyn base5(<lang `[`(efactor, , err)>);
    goto L13(r32, r35);
  L79():
    p6 = prom<V +>{
      efactor9 = ld efactor;
      efactor10 = force? efactor9;
      checkMissing(efactor10);
      return efactor10;
    };
    r49 = dyn rownames2(p6);
    check L80() else D19();
  L101():
    st tnames = r77;
    goto L23(r77);
  L113():
    tnames13 = force? tnames12;
    checkMissing(tnames13);
    names = ldf names in base;
    r84 = dyn names(tnames13);
    check L114() else D33();
  L115():
    goto L26(tnames11, r85);
  L123():
    result1 = force? result;
    checkMissing(result1);
    c13 = ldf c in base;
    r93 = dyn c13("(Intercept)", result1);
    check L124() else D38();
  D14():
    deopt 60 [r32, efactor5];
  D19():
    deopt 79 [r49];
  D33():
    deopt 131 [tnames5, r84];
  D38():
    deopt 152 [r93];
  L68():
    efactor6 = force? efactor5;
    checkMissing(efactor6);
    c5 = `is.object`(efactor6);
    if c5 then L69() else L70(r32, efactor6);
  L80():
    c7 = `is.object`(r49);
    if c7 then L81() else L82(r49);
  L114():
    goto L27(tnames5, r84);
  L124():
    goto L30(r93);
  L14(r41, dx6):
    as_logical = ldf `as.logical` in base;
    r43 = dyn as_logical(dx6);
    check L73() else D16();
  L18(dx9):
    c8 = ldf c in base;
    r68 = dyn c8(dx9, "Within");
    check L94() else D26();
  L69():
    dr4 = tryDispatchBuiltin.1("[", efactor6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(r32, dr4);
  L70(r39, efactor8):
    err = ld err;
    check L72() else D15();
  L81():
    dr6 = tryDispatchBuiltin.1("[", r49);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(dr6);
  L82(r51):
    sym7 = ldf `as.logical`;
    base7 = ldf `as.logical` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  D15():
    deopt 63 [r39, efactor8, err];
  D16():
    deopt 68 [r41, r43];
  D26():
    deopt 101 [r68];
  L19(r55, r56):
    __3 = ldf `[` in base;
    r67 = dyn __3(r55, r56);
    goto L18(r67);
  L71():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L14(r32, dx5);
  L72():
    err1 = force? err;
    __1 = ldf `[` in base;
    r42 = dyn __1(efactor6, <missing>, err1);
    goto L14(r39, r42);
  L73():
    goto L13(r41, r43);
  L83():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx8);
  L84():
    efactor11 = ld efactor;
    check L86() else D20();
  L85():
    r54 = dyn base7(<lang `%*%`(efactor, rep.int(1.0, ncol(efactor)))>);
    goto L19(r51, r54);
  L94():
    goto L17(r68);
  D20():
    deopt 83 [r51, efactor11];
  L86():
    efactor12 = force? efactor11;
    checkMissing(efactor12);
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L87() else L88();
  L20(r60, r61):
    ___ = ldf `%*%` in base;
    r65 = dyn ___(efactor12, r61);
    check L92() else D24();
  L87():
    ncol = ldf ncol;
    check L89() else D21();
  L88():
    r59 = dyn base8(1.0, <lang ncol(efactor)>);
    goto L20(r51, r59);
  D21():
    deopt 89 [r51];
  D24():
    deopt 95 [r60, r65];
  L89():
    p7 = prom<V +>{
      efactor13 = ld efactor;
      efactor14 = force? efactor13;
      checkMissing(efactor14);
      return efactor14;
    };
    r63 = dyn ncol(p7);
    check L90() else D22();
  L92():
    as_logical1 = ldf `as.logical` in base;
    r66 = dyn as_logical1(r65);
    check L93() else D25();
  D22():
    deopt 91 [r51, r63];
  D25():
    deopt 97 [r60, r66];
  L90():
    rep_int = ldf `rep.int` in base;
    r64 = dyn rep_int(1.0, r63);
    check L91() else D23();
  L93():
    goto L19(r60, r66);
  D23():
    deopt 93 [r51, r64];
  L91():
    goto L20(r51, r64);
  }
}
fun inner1057758408(x, nms) {
  (reg x:*, reg nms:*) -+> V { var x:*, var nms:*, reg nms1:*, reg nms2:V, reg c:L, reg nms4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg nms7:V, reg r1:V, reg x1:*, reg x2:V, reg as_logical:cls, reg r2:V, reg __:cls, reg r3:V |
    mkenv;
    st x = x;
    st nms = nms;
    nms1 = ld nms;
    check L2() else D0();
  D0():
    deopt 0 [nms1];
  L2():
    nms2 = force? nms1;
    checkMissing(nms2);
    c = `is.object`(nms2);
    if c then L3() else L4(nms2);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", nms2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(nms4):
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(nms7, r1):
    __ = ldf `[` in base;
    r3 = dyn __(nms7, r1);
    goto L0(r3);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    x1 = ld x;
    check L8() else D1();
  L7():
    r = dyn base(<sym x>);
    goto L1(nms4, r);
  D1():
    deopt 4 [nms4, x1];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    as_logical = ldf `as.logical` in base;
    r2 = dyn as_logical(x2);
    check L9() else D2();
  D2():
    deopt 7 [nms4, r2];
  L9():
    goto L1(nms4, r2);
  }
}