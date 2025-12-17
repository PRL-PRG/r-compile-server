fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1860185726;
    st `summary.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1860185726(object, ny, names, `...`) {
  (reg object:*, reg ny:*, reg names:*, reg ddd:dots) -+> V { var object:*, var ny:*, reg ny_isMissing:L, reg ny_orDefault:*, reg ncol:cls, reg coef:*, reg coef1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var names:*, reg names_isMissing:L, reg names_orDefault:*, var `...`:dots?, reg coef2:cls, reg object1:*, reg object2:V, reg p2:p(V +), reg r4:V, reg object3:*, reg object4:V, reg c:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg object7:*, reg object8:V, reg c1:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg object11:*, reg object12:V, reg c2:L, reg object14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r7:V, reg names1:*, reg names2:V, reg c3:L, reg colnames:cls, reg coef3:*, reg coef4:V, reg p3:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg ynames:*, reg ynames1:V, reg c4:V, reg c5:L, reg object15:*, reg object16:V, reg c6:L, reg object18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg c7:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __:cls, reg r13:V, reg mode:cls, reg lhs:*, reg lhs1:V, reg p4:p(V +), reg r15:V, reg r16:V, reg c8:L, reg c10:V, reg lhs2:*, reg lhs3:V, reg c11:L, reg c13:L, reg lhs5:V, reg dr10:V, reg dc5:L, reg dx12:V, reg c15:L, reg dx13:V, reg __1:cls, reg r17:V, reg r18:V, reg c16:L, reg c17:V, reg c19:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg lhs6:*, reg lhs7:V, reg as_character:cls, reg r21:V, reg c20:L, reg r23:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __2:cls, reg r24:V, reg dx16:V, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg ny1:*, reg ny2:V, reg r27:I, reg p5:p(V +), reg r29:V, reg ynames2:*, reg ynames3:V, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg ind:*, reg ind1:V, reg any:cls, reg r33:V, reg c21:L, reg paste1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg ny3:*, reg ny4:V, reg r36:I, reg p6:p(V +), reg r38:V, reg c22:L, reg r40:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r41:V, reg l:*, reg c23:L, reg dx21:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg dx25:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r42:V, reg setNames:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg ny5:*, reg ny6:V, reg vector:cls, reg r45:V, reg p7:p(V +), reg paste2:cls, reg ynames4:*, reg ynames5:V, reg p8:p(V +), reg r48:V, reg p9:p(V +), reg r50:V, reg r51:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg ny7:*, reg ny8:V, reg vector1:cls, reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg object19:*, reg object20:V, reg oldClass:cls, reg r56:V, reg cl:*, reg cl1:V, reg c24:L, reg cl3:V, reg dr18:V, reg dc9:L, reg dx27:V, reg dx28:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg cl6:V, reg r58:V, reg cl7:*, reg cl8:V, reg match:cls, reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg cl11:V, reg r63:V, reg r64:V, reg cl12:*, reg cl13:V, reg length:cls, reg r65:V, reg r66:V, reg __4:cls, reg r67:V, reg c25:L, reg dx30:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg __5:cls, reg r68:V, reg l3:*, reg class__:cls, reg r69:V, reg formula:cls, reg object21:*, reg object22:V, reg p10:p(V +), reg r71:V, reg l4:*, reg c26:L, reg r74:V, reg l7:*, reg r75:V, reg l8:*, reg dr22:V, reg dc11:L, reg dx33:V, reg r78:V, reg l10:*, reg r79:V, reg dx34:V, reg r80:V, reg c27:L, reg r82:V, reg l12:*, reg dx36:V, reg dr24:V, reg dc12:L, reg dx37:V, reg r84:V, reg l14:*, reg dx38:V, reg r85:V, reg c28:L, reg r87:V, reg l16:*, reg dr26:V, reg dc13:L, reg dx39:V, reg dx40:V, reg r90:V, reg seq:cls, reg ny9:*, reg ny10:V, reg p11:p(V +), reg r92:V, reg s:V, reg l17:I, reg i:I, reg i1:I, reg i2:I, reg c29:L, reg x:V, reg setNames1:cls, reg coef5:*, reg coef6:V, reg c30:L, reg dr28:V, reg dc14:L, reg dx41:V, reg dx42:V, reg i5:*, reg i6:V, reg __6:cls, reg r93:V, reg p12:p(V +), reg rownames:cls, reg coef9:*, reg coef10:V, reg p13:p(V +), reg r96:V, reg p14:p(V +), reg r98:V, reg l18:*, reg c31:L, reg i8:I, reg r100:V, reg l20:*, reg dr30:V, reg dc15:L, reg dx43:V, reg i10:I, reg dx44:V, reg r103:V, reg resid:*, reg resid1:V, reg c32:L, reg i12:I, reg resid3:V, reg dr32:V, reg dc16:L, reg dx45:V, reg i14:I, reg dx46:V, reg i15:*, reg i16:V, reg __7:cls, reg r104:V, reg l21:*, reg c33:L, reg i18:I, reg dx48:V, reg l23:*, reg dr34:V, reg dc17:L, reg dx50:V, reg i20:I, reg dx52:V, reg r105:V, reg fitted:*, reg fitted1:V, reg c34:L, reg i22:I, reg fitted3:V, reg dr36:V, reg dc18:L, reg dx53:V, reg i24:I, reg dx54:V, reg i25:*, reg i26:V, reg __8:cls, reg r106:V, reg l24:*, reg c35:L, reg i28:I, reg dx56:V, reg l26:*, reg dr38:V, reg dc19:L, reg dx58:V, reg i30:I, reg dx60:V, reg r107:V, reg effects:*, reg effects1:V, reg c36:L, reg i32:I, reg effects3:V, reg dr40:V, reg dc20:L, reg dx61:V, reg i34:I, reg dx62:V, reg i35:*, reg i36:V, reg __9:cls, reg r108:V, reg l27:*, reg c37:L, reg i38:I, reg dx64:V, reg l29:*, reg dr42:V, reg dc21:L, reg dx66:V, reg i40:I, reg dx68:V, reg r109:V, reg as_name:cls, reg names3:*, reg names4:V, reg c38:L, reg ynames6:*, reg ynames7:V, reg c39:L, reg ynames9:V, reg dr44:V, reg dc22:L, reg dx69:V, reg dx70:V, reg i41:*, reg i42:V, reg __10:cls, reg r110:V, reg paste3:cls, reg i43:*, reg i44:V, reg p15:p(V +), reg r112:V, reg p16:p(V +), reg r114:V, reg l30:*, reg c40:L, reg i46:I, reg r117:V, reg l33:*, reg r118:V, reg l34:*, reg dr46:V, reg dc23:L, reg dx71:V, reg i48:I, reg r121:V, reg l36:*, reg r122:V, reg dx72:V, reg r123:V, reg c41:L, reg i50:I, reg r125:V, reg l38:*, reg dx74:V, reg dr48:V, reg dc24:L, reg dx75:V, reg i52:I, reg r127:V, reg l40:*, reg dx76:V, reg ____:cls, reg r128:V, reg c42:L, reg i54:I, reg r130:V, reg l42:*, reg dr50:V, reg dc25:L, reg dx77:V, reg i56:I, reg r132:V, reg dx78:V, reg r133:V, reg l43:*, reg c43:L, reg i58:I, reg r136:V, reg l46:*, reg r137:V, reg l47:*, reg dr52:V, reg dc26:L, reg dx79:V, reg i60:I, reg r140:V, reg l49:*, reg r141:V, reg dx80:V, reg r142:V, reg c44:L, reg i62:I, reg r145:V, reg l51:*, reg dx83:V, reg r146:V, reg dx84:V, reg dr54:V, reg dc27:L, reg dx86:V, reg i64:I, reg r149:V, reg l53:*, reg dx87:V, reg r150:V, reg dx88:V, reg r151:V, reg c45:L, reg i66:I, reg r153:V, reg l55:*, reg dx91:V, reg dx92:V, reg dr56:V, reg dc28:L, reg dx94:V, reg i68:I, reg r155:V, reg l57:*, reg dx95:V, reg dx96:V, reg ____1:cls, reg r156:V, reg c46:L, reg i70:I, reg r158:V, reg l59:*, reg dx98:V, reg dr58:V, reg dc29:L, reg dx99:V, reg i72:I, reg r160:V, reg l61:*, reg dx100:V, reg r161:V, reg c47:L, reg i74:I, reg r163:V, reg l63:*, reg dr60:V, reg dc30:L, reg dx101:V, reg i76:I, reg dx102:V, reg r166:V, reg summary:cls, reg object23:*, reg object24:V, reg p17:p(V +), reg ddd1:dots?, reg r168:V, reg l64:*, reg c48:L, reg i78:I, reg r170:V, reg l66:*, reg dr62:V, reg dc31:L, reg dx103:V, reg i80:I, reg dx104:V, reg i81:*, reg i82:V, reg ____2:cls, reg r173:V, reg l67:*, reg class__1:cls, reg r174:V, reg value:*, reg value1:V |
    mkenv;
    st object = object;
    ny_isMissing = missing.0(ny);
    if ny_isMissing then L0() else L1(ny);
  L0():
    p1 = prom<V +>{
      ncol = ldf ncol;
      p = prom<V +>{
        coef = ld coef;
        coef1 = force? coef;
        checkMissing(coef1);
        return coef1;
      };
      r1 = dyn ncol(p);
      return r1;
    };
    goto L1(p1);
  L1(ny_orDefault):
    st ny = ny_orDefault;
    names_isMissing = missing.0(names);
    if names_isMissing then L2(TRUE) else L2(names);
  L2(names_orDefault):
    st names = names_orDefault;
    st `...` = ddd;
    coef2 = ldf coef;
    check L33() else D0();
  D0():
    deopt 1 [];
  L33():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r4 = dyn coef2(p2);
    check L34() else D1();
  D1():
    deopt 3 [r4];
  L34():
    st coef = r4;
    object3 = ld object;
    check L35() else D2();
  D2():
    deopt 5 [object3];
  L35():
    object4 = force? object3;
    checkMissing(object4);
    c = `is.object`(object4);
    if c then L37() else L38(object4);
  L36(dx1):
    st effects = dx1;
    object7 = ld object;
    check L40() else D3();
  L37():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(object6):
    r5 = `$`(object6, <sym effects>);
    goto L36(r5);
  D3():
    deopt 9 [object7];
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(dx);
  L40():
    object8 = force? object7;
    checkMissing(object8);
    c1 = `is.object`(object8);
    if c1 then L42() else L43(object8);
  L41(dx3):
    st resid = dx3;
    object11 = ld object;
    check L45() else D4();
  L42():
    dr2 = tryDispatchBuiltin.1("$", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(object10):
    r6 = `$`(object10, <sym residuals>);
    goto L41(r6);
  D4():
    deopt 13 [object11];
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L41(dx2);
  L45():
    object12 = force? object11;
    checkMissing(object12);
    c2 = `is.object`(object12);
    if c2 then L47() else L48(object12);
  L46(dx5):
    st fitted = dx5;
    names1 = ld names;
    check L50() else D5();
  L47():
    dr4 = tryDispatchBuiltin.1("$", object12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dr4);
  L48(object14):
    r7 = `$`(object14, <sym fitted.values>);
    goto L46(r7);
  D5():
    deopt 17 [names1];
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L46(dx4);
  L50():
    names2 = force? names1;
    checkMissing(names2);
    c3 = `as.logical`(names2);
    if c3 then L51() else L3();
  L3():
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L106() else L107();
  L19(r51):
    st value = r51;
    sym7 = ldf oldClass;
    base7 = ldf oldClass in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L51():
    colnames = ldf colnames;
    check L52() else D6();
  D6():
    deopt 20 [];
  L20(r55):
    st cl = r55;
    cl = ld cl;
    check L114() else D30();
  L52():
    p3 = prom<V +>{
      coef3 = ld coef;
      coef4 = force? coef3;
      checkMissing(coef4);
      return coef4;
    };
    r9 = dyn colnames(p3);
    check L53() else D7();
  L106():
    ny7 = ld ny;
    check L108() else D26();
  L107():
    r52 = dyn base6("list", <sym ny>);
    goto L19(r52);
  L110():
    object19 = ld object;
    check L112() else D28();
  L111():
    r54 = dyn base7(<sym object>);
    goto L20(r54);
  D7():
    deopt 22 [r9];
  D26():
    deopt 100 [ny7];
  D28():
    deopt 107 [object19];
  D30():
    deopt 112 [cl];
  L53():
    st ynames = r9;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L54() else L55();
  L108():
    ny8 = force? ny7;
    checkMissing(ny8);
    vector1 = ldf vector in base;
    r53 = dyn vector1("list", ny8);
    check L109() else D27();
  L112():
    object20 = force? object19;
    checkMissing(object20);
    oldClass = ldf oldClass in base;
    r56 = dyn oldClass(object20);
    check L113() else D29();
  L114():
    cl1 = force? cl;
    checkMissing(cl1);
    c24 = `is.object`(cl1);
    if c24 then L115() else L116(cl1);
  D27():
    deopt 103 [r53];
  D29():
    deopt 110 [r56];
  L4(r11):
    c5 = `as.logical`(r11);
    if c5 then L57() else L5();
  L21(dx28):
    c25 = `is.object`(dx28);
    if c25 then L126() else L127(dx28);
  L54():
    ynames = ld ynames;
    check L56() else D8();
  L55():
    r10 = dyn base(<sym ynames>);
    goto L4(r10);
  L109():
    goto L19(r53);
  L113():
    goto L20(r56);
  L115():
    dr18 = tryDispatchBuiltin.1("[", cl1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L117() else L116(dr18);
  L116(cl3):
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  D8():
    deopt 25 [ynames];
  L5():
    goto L13();
  L13():
    ynames2 = ld ynames;
    check L86() else D17();
  L22(cl6, r58):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  L24(dx32):
    l3 = ld object;
    class__ = ldf `class<-`;
    check L129() else D35();
  L56():
    ynames1 = force? ynames;
    checkMissing(ynames1);
    c4 = `==`(ynames1, NULL);
    goto L4(c4);
  L57():
    object15 = ld object;
    check L58() else D9();
  L117():
    dx27 = getTryDispatchBuiltinValue(dr18);
    goto L21(dx27);
  L118():
    cl7 = ld cl;
    check L120() else D31();
  L119():
    r57 = dyn base8("mlm", <sym cl>);
    goto L22(cl3, r57);
  L126():
    dr20 = tryDispatchBuiltin.1("[", dx28);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L128() else L127(dr20);
  L127(dx30):
    __5 = ldf `[` in base;
    r68 = dyn __5(dx30, -1);
    goto L24(r68);
  D9():
    deopt 28 [object15];
  D17():
    deopt 66 [ynames2];
  D31():
    deopt 117 [cl3, cl7];
  D35():
    deopt 134 [dx32, l3, dx32];
  L23(cl11, r63, r64):
    r66 = `:`(r63, r64);
    __4 = ldf `[` in base;
    r67 = dyn __4(cl11, r66);
    goto L21(r67);
  L58():
    object16 = force? object15;
    checkMissing(object16);
    c6 = `is.object`(object16);
    if c6 then L60() else L61(object16);
  L86():
    ynames3 = force? ynames2;
    checkMissing(ynames3);
    r30 = `==`(ynames3, "");
    st ind = r30;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L87() else L88();
  L120():
    cl8 = force? cl7;
    checkMissing(cl8);
    match = ldf match in base;
    r59 = dyn match("mlm", cl8, NA_INT, NULL);
    check L121() else D32();
  L122():
    cl12 = ld cl;
    check L124() else D33();
  L123():
    r62 = dyn base9(<sym cl>);
    goto L23(cl6, r58, r62);
  L128():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L24(dx31);
  L129():
    r69 = dyn class__(l3, NULL, dx32);
    check L130() else D36();
  D32():
    deopt 122 [cl3, r59];
  D33():
    deopt 124 [cl6, r58, cl12];
  D36():
    deopt 136 [dx32, r69];
  L14(r32):
    c21 = `as.logical`(r32);
    if c21 then L91() else L15();
  L59(dx7):
    c7 = `is.object`(dx7);
    if c7 then L63() else L64(dx7);
  L60():
    dr6 = tryDispatchBuiltin.1("$", object16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(dr6);
  L61(object18):
    r12 = `$`(object18, <sym terms>);
    goto L59(r12);
  L87():
    ind = ld ind;
    check L89() else D18();
  L88():
    r31 = dyn base3(<sym ind>);
    goto L14(r31);
  L121():
    goto L22(cl3, r59);
  L124():
    cl13 = force? cl12;
    checkMissing(cl13);
    length = ldf length in base;
    r65 = dyn length(cl13);
    check L125() else D34();
  L130():
    st object = r69;
    formula = ldf formula;
    check L131() else D37();
  D18():
    deopt 73 [ind];
  D34():
    deopt 127 [cl6, r58, r65];
  D37():
    deopt 139 [];
  L6(dx11):
    st lhs = dx11;
    mode = ldf mode;
    check L66() else D10();
  L15():
    goto L18();
  L18():
    setNames = ldf setNames;
    check L103() else D24();
  L62():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L59(dx6);
  L63():
    dr8 = tryDispatchBuiltin.1("[[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(dr8);
  L64(dx9):
    __ = ldf `[[` in base;
    r13 = dyn __(dx9, 2);
    goto L6(r13);
  L89():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r33 = dyn any(ind1);
    check L90() else D19();
  L91():
    paste1 = ldf paste0;
    check L92() else D20();
  L125():
    goto L23(cl6, r58, r65);
  L131():
    p10 = prom<V +>{
      object21 = ld object;
      object22 = force? object21;
      checkMissing(object22);
      return object22;
    };
    r71 = dyn formula(p10);
    check L132() else D38();
  D10():
    deopt 36 [];
  D19():
    deopt 76 [r33];
  D20():
    deopt 78 [];
  D24():
    deopt 93 [];
  D38():
    deopt 141 [r71];
  L65():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L6(dx10);
  L66():
    p4 = prom<V +>{
      lhs = ld lhs;
      lhs1 = force? lhs;
      checkMissing(lhs1);
      return lhs1;
    };
    r15 = dyn mode(p4);
    check L67() else D11();
  L90():
    goto L14(r33);
  L92():
    p6 = prom<V +>{
      sym4 = ldf seq_len;
      base4 = ldf seq_len in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      ny3 = ld ny;
      ny4 = force? ny3;
      checkMissing(ny4);
      r36 = seq_len(ny4);
      goto L0(r36);
    L2():
      r34 = dyn base4(<sym ny>);
      goto L0(r34);
    };
    r38 = dyn paste1("Y", p6);
    check L93() else D21();
  L103():
    p7 = prom<V +>{
      sym5 = ldf vector;
      base5 = ldf vector in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      ny5 = ld ny;
      ny6 = force? ny5;
      checkMissing(ny6);
      vector = ldf vector in base;
      r45 = dyn vector("list", ny6);
      goto L0(r45);
    L2():
      r43 = dyn base5("list", <sym ny>);
      goto L0(r43);
    };
    p9 = prom<V +>{
      paste2 = ldf paste;
      p8 = prom<V +>{
        ynames4 = ld ynames;
        ynames5 = force? ynames4;
        checkMissing(ynames5);
        return ynames5;
      };
      r48 = dyn paste2("Response", p8);
      return r48;
    };
    r50 = dyn setNames(p7, p9);
    check L104() else D25();
  L132():
    l4 = ld object;
    c26 = `is.object`(l4);
    if c26 then L134() else L135(r71, l4, r71, l4);
  D11():
    deopt 38 [r15];
  D21():
    deopt 81 [r38];
  D25():
    deopt 96 [r50];
  L67():
    r16 = `==`(r15, "call");
    c8 = `as.logical`(r16);
    if c8 then L68() else L7(c8);
  L93():
    c22 = `is.object`(r38);
    if c22 then L94() else L95(r38);
  L104():
    goto L19(r50);
  L133(r78, l10, r79, dx34):
    c27 = `is.object`(dx34);
    if c27 then L138() else L139(r78, l10, dx34);
  L134():
    dr22 = tryDispatchBuiltin.1("$", l4);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L136() else L135(r71, l4, r71, dr22);
  L135(r74, l7, r75, l8):
    r80 = `$`(l8, <sym call>);
    goto L133(r74, l7, r75, r80);
  L7(c10):
    c19 = `as.logical`(c10);
    if c19 then L74() else L9();
  L16(dx19):
    l = ld ynames;
    c23 = `is.object`(l);
    if c23 then L98() else L99(dx19, l);
  L68():
    lhs2 = ld lhs;
    check L69() else D12();
  L94():
    dr14 = tryDispatchBuiltin.1("[", r38);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L96() else L95(dr14);
  L95(r40):
    ind2 = ld ind;
    check L97() else D22();
  L136():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L133(r71, l4, r71, dx33);
  L137(r84, l14, dx38):
    c28 = `is.object`(l14);
    if c28 then L142() else L143(r84, l14);
  L138():
    dr24 = tryDispatchBuiltin.0("$<-", dx34, r79);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L140() else L139(r78, l10, dr24);
  L139(r82, l12, dx36):
    r85 = `$<-`(dx36, <sym formula>, r79);
    goto L137(r82, l12, r85);
  D12():
    deopt 41 [c8, lhs2];
  D22():
    deopt 82 [r40, ind2];
  L9():
    paste0 = ldf paste0;
    check L83() else D15();
  L12(dx16):
    st ynames = dx16;
    goto L13();
  L17(dx24, dx25):
    st ynames = dx25;
    goto L18();
  L69():
    lhs3 = force? lhs2;
    checkMissing(lhs3);
    c11 = `is.object`(lhs3);
    if c11 then L70() else L71(c8, lhs3);
  L74():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L75() else L76();
  L96():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx18);
  L97():
    ind3 = force? ind2;
    __3 = ldf `[` in base;
    r41 = dyn __3(r40, ind3);
    goto L16(r41);
  L98():
    dr16 = tryDispatchBuiltin.0("[<-", l, dx19);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L100() else L99(dx19, dr16);
  L99(dx21, l2):
    ind4 = ld ind;
    check L101() else D23();
  L140():
    dx37 = getTryDispatchBuiltinValue(dr24);
    goto L137(r78, l10, dx37);
  L141(dx40):
    st object = dx40;
    seq = ldf seq;
    check L145() else D39();
  L142():
    dr26 = tryDispatchBuiltin.0("$<-", l14, dx38);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L144() else L143(r84, dr26);
  L143(r87, l16):
    r90 = `$<-`(l16, <sym call>, dx38);
    goto L141(r90);
  D15():
    deopt 59 [];
  D23():
    deopt 86 [dx21, l2, dx19, ind4];
  D39():
    deopt 150 [];
  L8(c15, dx13):
    r18 = `==`(dx13, "cbind");
    c16 = `as.logical`(r18);
    c17 = `&&`(c15, c16);
    goto L7(c17);
  L10(r20):
    c20 = `is.object`(r20);
    if c20 then L79() else L80(r20);
  L70():
    dr10 = tryDispatchBuiltin.1("[[", lhs3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L72() else L71(c8, dr10);
  L71(c13, lhs5):
    __1 = ldf `[[` in base;
    r17 = dyn __1(lhs5, 1);
    goto L8(c13, r17);
  L75():
    lhs6 = ld lhs;
    check L77() else D13();
  L76():
    r19 = dyn base1(<sym lhs>);
    goto L10(r19);
  L83():
    p5 = prom<V +>{
      sym2 = ldf seq_len;
      base2 = ldf seq_len in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      ny1 = ld ny;
      ny2 = force? ny1;
      checkMissing(ny2);
      r27 = seq_len(ny2);
      goto L0(r27);
    L2():
      r25 = dyn base2(<sym ny>);
      goto L0(r25);
    };
    r29 = dyn paste0("Y", p5);
    check L84() else D16();
  L100():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L17(dx19, dx23);
  L101():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l2, dx19, ind5);
    goto L17(dx21, r42);
  L144():
    dx39 = getTryDispatchBuiltinValue(dr26);
    goto L141(dx39);
  L145():
    p11 = prom<V +>{
      ny9 = ld ny;
      ny10 = force? ny9;
      checkMissing(ny10);
      return ny10;
    };
    r92 = dyn seq(p11);
    check L146() else D40();
  D13():
    deopt 51 [lhs6];
  D16():
    deopt 62 [r29];
  D40():
    deopt 152 [r92];
  L11(dx15):
    goto L12(dx15);
  L72():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L8(c8, dx12);
  L77():
    lhs7 = force? lhs6;
    checkMissing(lhs7);
    as_character = ldf `as.character` in base;
    r21 = dyn as_character(lhs7);
    check L78() else D14();
  L79():
    dr12 = tryDispatchBuiltin.1("[", r20);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L81() else L80(dr12);
  L80(r23):
    __2 = ldf `[` in base;
    r24 = dyn __2(r23, -1);
    goto L11(r24);
  L84():
    goto L12(r29);
  L146():
    s = toForSeq(r92);
    l17 = length(s);
    i = 0;
    goto L25(i);
  D14():
    deopt 54 [r21];
  L25(i1):
    i2 = `+`.1(i1, 1);
    c29 = `<`.1(l17, i2);
    if c29 then L147() else L32();
  L78():
    goto L10(r21);
  L81():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L11(dx14);
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    setNames1 = ldf setNames;
    check L148() else D41();
  L147():
    l67 = ld value;
    class__1 = ldf `class<-`;
    check L219() else D54();
  D41():
    deopt 154 [i2];
  D54():
    deopt 233 ["listof", l67, "listof"];
  L148():
    p12 = prom<V +>{
      coef5 = ld coef;
      coef6 = force? coef5;
      checkMissing(coef6);
      c30 = `is.object`(coef6);
      if c30 then L1() else L2();
    L0(dx42):
      return dx42;
    L1():
      dr28 = tryDispatchBuiltin.1("[", coef6);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __6 = ldf `[` in base;
      r93 = dyn __6(coef6, <missing>, i6);
      goto L0(r93);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx41);
    };
    p14 = prom<V +>{
      rownames = ldf rownames;
      p13 = prom<V +>{
        coef9 = ld coef;
        coef10 = force? coef9;
        checkMissing(coef10);
        return coef10;
      };
      r96 = dyn rownames(p13);
      return r96;
    };
    r98 = dyn setNames1(p12, p14);
    check L149() else D42();
  L219():
    r174 = dyn class__1(l67, NULL, "listof");
    check L220() else D55();
  D42():
    deopt 157 [i2, r98];
  D55():
    deopt 235 ["listof", r174];
  L149():
    l18 = ld object;
    c31 = `is.object`(l18);
    if c31 then L151() else L152(i2, r98, l18);
  L220():
    st value = r174;
    value = ld value;
    check L221() else D56();
  D56():
    deopt 237 [value];
  L150(i10, dx44):
    st object = dx44;
    resid = ld resid;
    check L154() else D43();
  L151():
    dr30 = tryDispatchBuiltin.0("$<-", l18, r98);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L153() else L152(i2, r98, dr30);
  L152(i8, r100, l20):
    r103 = `$<-`(l20, <sym coefficients>, r98);
    goto L150(i8, r103);
  L221():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D43():
    deopt 161 [i10, resid];
  L153():
    dx43 = getTryDispatchBuiltinValue(dr30);
    goto L150(i2, dx43);
  L154():
    resid1 = force? resid;
    checkMissing(resid1);
    c32 = `is.object`(resid1);
    if c32 then L155() else L156(i10, resid1);
  L26(i14, dx46):
    l21 = ld object;
    c33 = `is.object`(l21);
    if c33 then L160() else L161(i14, dx46, l21);
  L155():
    dr32 = tryDispatchBuiltin.1("[", resid1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L157() else L156(i10, dr32);
  L156(i12, resid3):
    i15 = ld i;
    check L158() else D44();
  D44():
    deopt 164 [i12, resid3, i15];
  L157():
    dx45 = getTryDispatchBuiltinValue(dr32);
    goto L26(i10, dx45);
  L158():
    i16 = force? i15;
    __7 = ldf `[` in base;
    r104 = dyn __7(resid1, <missing>, i16);
    goto L26(i12, r104);
  L159(i20, dx52):
    st object = dx52;
    fitted = ld fitted;
    check L163() else D45();
  L160():
    dr34 = tryDispatchBuiltin.0("$<-", l21, dx46);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L162() else L161(i14, dx46, dr34);
  L161(i18, dx48, l23):
    r105 = `$<-`(l23, <sym residuals>, dx46);
    goto L159(i18, r105);
  D45():
    deopt 171 [i20, fitted];
  L162():
    dx50 = getTryDispatchBuiltinValue(dr34);
    goto L159(i14, dx50);
  L163():
    fitted1 = force? fitted;
    checkMissing(fitted1);
    c34 = `is.object`(fitted1);
    if c34 then L164() else L165(i20, fitted1);
  L27(i24, dx54):
    l24 = ld object;
    c35 = `is.object`(l24);
    if c35 then L169() else L170(i24, dx54, l24);
  L164():
    dr36 = tryDispatchBuiltin.1("[", fitted1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L166() else L165(i20, dr36);
  L165(i22, fitted3):
    i25 = ld i;
    check L167() else D46();
  D46():
    deopt 174 [i22, fitted3, i25];
  L166():
    dx53 = getTryDispatchBuiltinValue(dr36);
    goto L27(i20, dx53);
  L167():
    i26 = force? i25;
    __8 = ldf `[` in base;
    r106 = dyn __8(fitted1, <missing>, i26);
    goto L27(i22, r106);
  L168(i30, dx60):
    st object = dx60;
    effects = ld effects;
    check L172() else D47();
  L169():
    dr38 = tryDispatchBuiltin.0("$<-", l24, dx54);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L171() else L170(i24, dx54, dr38);
  L170(i28, dx56, l26):
    r107 = `$<-`(l26, <sym fitted.values>, dx54);
    goto L168(i28, r107);
  D47():
    deopt 181 [i30, effects];
  L171():
    dx58 = getTryDispatchBuiltinValue(dr38);
    goto L168(i24, dx58);
  L172():
    effects1 = force? effects;
    checkMissing(effects1);
    c36 = `is.object`(effects1);
    if c36 then L173() else L174(i30, effects1);
  L28(i34, dx62):
    l27 = ld object;
    c37 = `is.object`(l27);
    if c37 then L178() else L179(i34, dx62, l27);
  L173():
    dr40 = tryDispatchBuiltin.1("[", effects1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L175() else L174(i30, dr40);
  L174(i32, effects3):
    i35 = ld i;
    check L176() else D48();
  D48():
    deopt 184 [i32, effects3, i35];
  L175():
    dx61 = getTryDispatchBuiltinValue(dr40);
    goto L28(i30, dx61);
  L176():
    i36 = force? i35;
    __9 = ldf `[` in base;
    r108 = dyn __9(effects1, <missing>, i36);
    goto L28(i32, r108);
  L177(i40, dx68):
    st object = dx68;
    as_name = ldf `as.name`;
    check L181() else D49();
  L178():
    dr42 = tryDispatchBuiltin.0("$<-", l27, dx62);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L180() else L179(i34, dx62, dr42);
  L179(i38, dx64, l29):
    r109 = `$<-`(l29, <sym effects>, dx62);
    goto L177(i38, r109);
  D49():
    deopt 192 [i40];
  L180():
    dx66 = getTryDispatchBuiltinValue(dr42);
    goto L177(i34, dx66);
  L181():
    p16 = prom<V +>{
      names3 = ld names;
      names4 = force? names3;
      checkMissing(names4);
      c38 = `as.logical`(names4);
      if c38 then L2() else L0();
    L0():
      paste3 = ldf paste0;
      p15 = prom<V +>{
        i43 = ld i;
        i44 = force? i43;
        checkMissing(i44);
        return i44;
      };
      r112 = dyn paste3("Y", p15);
      return r112;
    L2():
      ynames6 = ld ynames;
      ynames7 = force? ynames6;
      checkMissing(ynames7);
      c39 = `is.object`(ynames7);
      if c39 then L3() else L4(ynames7);
    L1(dx70):
      return dx70;
    L3():
      dr44 = tryDispatchBuiltin.1("[", ynames7);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L5() else L4(dr44);
    L4(ynames9):
      i41 = ld i;
      i42 = force? i41;
      __10 = ldf `[` in base;
      r110 = dyn __10(ynames9, i42);
      goto L1(r110);
    L5():
      dx69 = getTryDispatchBuiltinValue(dr44);
      goto L1(dx69);
    };
    r114 = dyn as_name(p16);
    check L182() else D50();
  D50():
    deopt 194 [i40, r114];
  L182():
    l30 = ld object;
    c40 = `is.object`(l30);
    if c40 then L184() else L185(i40, r114, l30, r114, l30);
  L183(i48, r121, l36, r122, dx72):
    c41 = `is.object`(dx72);
    if c41 then L187() else L188(i48, r121, l36, dx72);
  L184():
    dr46 = tryDispatchBuiltin.1("$", l30);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L186() else L185(i40, r114, l30, r114, dr46);
  L185(i46, r117, l33, r118, l34):
    r123 = `$`(l34, <sym terms>);
    goto L183(i46, r117, l33, r118, r123);
  L29(i52, r127, l40, dx76):
    c42 = `is.object`(l40);
    if c42 then L191() else L192(i52, r127, l40);
  L186():
    dx71 = getTryDispatchBuiltinValue(dr46);
    goto L183(i40, r114, l30, r114, dx71);
  L187():
    dr48 = tryDispatchBuiltin.0("[[<-", dx72, r122);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L189() else L188(i48, r121, l36, dr48);
  L188(i50, r125, l38, dx74):
    ____ = ldf `[[<-` in base;
    r128 = dyn ____(dx74, r122, 2);
    goto L29(i50, r125, l38, r128);
  L189():
    dx75 = getTryDispatchBuiltinValue(dr48);
    goto L29(i48, r121, l36, dx75);
  L190(i56, r132, dx78):
    st object = dx78;
    l43 = ld object;
    c43 = `is.object`(l43);
    if c43 then L195() else L196(i56, r132, l43, r132, l43);
  L191():
    dr50 = tryDispatchBuiltin.0("$<-", l40, dx76);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L193() else L192(i52, r127, dr50);
  L192(i54, r130, l42):
    r133 = `$<-`(l42, <sym terms>, dx76);
    goto L190(i54, r130, r133);
  L193():
    dx77 = getTryDispatchBuiltinValue(dr50);
    goto L190(i52, r127, dx77);
  L194(i60, r140, l49, r141, dx80):
    c44 = `is.object`(dx80);
    if c44 then L199() else L200(i60, r140, l49, dx80, r141, dx80);
  L195():
    dr52 = tryDispatchBuiltin.1("$", l43);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L197() else L196(i56, r132, l43, r132, dr52);
  L196(i58, r136, l46, r137, l47):
    r142 = `$`(l47, <sym call>);
    goto L194(i58, r136, l46, r137, r142);
  L197():
    dx79 = getTryDispatchBuiltinValue(dr52);
    goto L194(i56, r132, l43, r132, dx79);
  L198(i64, r149, l53, dx87, r150, dx88):
    c45 = `is.object`(dx88);
    if c45 then L202() else L203(i64, r149, l53, dx87, dx88);
  L199():
    dr54 = tryDispatchBuiltin.1("$", dx80);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L201() else L200(i60, r140, l49, dx80, r141, dr54);
  L200(i62, r145, l51, dx83, r146, dx84):
    r151 = `$`(dx84, <sym formula>);
    goto L198(i62, r145, l51, dx83, r146, r151);
  L30(i68, r155, l57, dx95, dx96):
    c46 = `is.object`(dx95);
    if c46 then L206() else L207(i68, r155, l57, dx95);
  L201():
    dx86 = getTryDispatchBuiltinValue(dr54);
    goto L198(i60, r140, l49, dx80, r141, dx86);
  L202():
    dr56 = tryDispatchBuiltin.0("[[<-", dx88, r150);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L204() else L203(i64, r149, l53, dx87, dr56);
  L203(i66, r153, l55, dx91, dx92):
    ____1 = ldf `[[<-` in base;
    r156 = dyn ____1(dx92, r150, 2);
    goto L30(i66, r153, l55, dx91, r156);
  L204():
    dx94 = getTryDispatchBuiltinValue(dr56);
    goto L30(i64, r149, l53, dx87, dx94);
  L205(i72, r160, l61, dx100):
    c47 = `is.object`(l61);
    if c47 then L210() else L211(i72, r160, l61);
  L206():
    dr58 = tryDispatchBuiltin.0("$<-", dx95, dx96);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L208() else L207(i68, r155, l57, dr58);
  L207(i70, r158, l59, dx98):
    r161 = `$<-`(dx98, <sym formula>, dx96);
    goto L205(i70, r158, l59, r161);
  L208():
    dx99 = getTryDispatchBuiltinValue(dr58);
    goto L205(i68, r155, l57, dx99);
  L209(i76, dx102):
    st object = dx102;
    summary = ldf summary;
    check L213() else D51();
  L210():
    dr60 = tryDispatchBuiltin.0("$<-", l61, dx100);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L212() else L211(i72, r160, dr60);
  L211(i74, r163, l63):
    r166 = `$<-`(l63, <sym call>, dx100);
    goto L209(i74, r166);
  D51():
    deopt 218 [i76];
  L212():
    dx101 = getTryDispatchBuiltinValue(dr60);
    goto L209(i72, dx101);
  L213():
    p17 = prom<V +>{
      object23 = ld object;
      object24 = force? object23;
      checkMissing(object24);
      return object24;
    };
    ddd1 = ld `...`;
    r168 = dyn summary[, `...`](p17, ddd1);
    check L214() else D52();
  D52():
    deopt 221 [i76, r168];
  L214():
    l64 = ld value;
    c48 = `is.object`(l64);
    if c48 then L215() else L216(i76, r168, l64);
  L31(i80, dx104):
    st value = dx104;
    goto L25(i80);
  L215():
    dr62 = tryDispatchBuiltin.0("[[<-", l64, r168);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L217() else L216(i76, r168, dr62);
  L216(i78, r170, l66):
    i81 = ld i;
    check L218() else D53();
  D53():
    deopt 223 [i78, r170, l66, r168, i81];
  L217():
    dx103 = getTryDispatchBuiltinValue(dr62);
    goto L31(i76, dx103);
  L218():
    i82 = force? i81;
    ____2 = ldf `[[<-` in base;
    r173 = dyn ____2(l66, r168, i82);
    goto L31(i78, r173);
  }
}