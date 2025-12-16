fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1116762545;
    st `boxplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1116762545(x, `...`, range, width, varwidth, notch, outline, names, plot, border, col, log, pars, ann, horizontal, add, at) {
  (reg x:*, reg ddd:dots, reg range:*, reg width:*, reg varwidth:*, reg notch:*, reg outline:*, reg names:*, reg plot:*, reg border:*, reg col:*, reg log:*, reg pars:*, reg ann:*, reg horizontal:*, reg add:*, reg at:*) -+> V { var x:*, var `...`:dots?, var range:*, reg range_isMissing:L, reg range_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var varwidth:*, reg varwidth_isMissing:L, reg varwidth_orDefault:*, var notch:*, reg notch_isMissing:L, reg notch_orDefault:*, var outline:*, reg outline_isMissing:L, reg outline_orDefault:*, var names:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var pars:*, reg pars_isMissing:L, reg pars_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p1:p(V +), var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, reg add1:*, reg add2:V, reg r6:V, reg p2:p(V +), var horizontal:*, reg horizontal_isMissing:L, reg horizontal_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg list1:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg ddd1:dots?, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg args:*, reg args1:V, reg attributes:cls, reg r16:V, reg c:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r19:V, reg c1:V, reg r20:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg args2:*, reg args3:V, reg attributes1:cls, reg r23:V, reg c3:L, reg r25:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r26:V, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg args4:*, reg args5:V, reg length:cls, reg r32:V, reg rep_len:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg x3:*, reg x4:V, reg is_list:cls, reg r36:V, reg c4:L, reg x5:*, reg x6:V, reg x7:V, reg args6:*, reg args7:V, reg c5:L, reg args9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg namedargs:*, reg namedargs1:V, reg r37:V, reg __:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:I, reg r43:V, reg groups:*, reg groups1:V, reg length1:cls, reg r44:V, reg r45:V, reg c6:L, reg stop:cls, reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg groups2:*, reg groups3:V, reg class:cls, reg r52:V, reg length2:cls, reg r53:V, reg c7:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg r55:V, reg groups4:*, reg groups5:V, reg unclass:cls, reg r56:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg r59:V, reg missing:cls, reg r60:V, reg r61:V, reg c8:L, reg names1:*, reg names2:V, reg l:*, reg attr__:cls, reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r63:V, reg r64:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r65:V, reg r66:V, reg groups6:*, reg groups7:V, reg attr:cls, reg r67:V, reg c9:V, reg c10:L, reg n:*, reg n1:V, reg r68:V, reg l1:*, reg attr__1:cls, reg r69:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r71:V, reg r72:V, reg groups8:*, reg groups9:V, reg attr1:cls, reg r73:V, reg lapply:cls, reg groups10:*, reg groups11:V, reg p4:p(V +), reg class1:*, reg class2:V, reg p5:p(V +), reg r76:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r77:V, reg r78:V, reg vapply:cls, reg groups12:*, reg groups13:V, reg p6:p(V +), reg r80:cls, reg p7:p(V +), reg r82:V, reg all:cls, reg r83:V, reg c11:L, reg c13:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r84:V, reg c16:L, reg r85:V, reg unique:cls, reg cls:*, reg cls1:V, reg p8:p(V +), reg r87:V, reg length3:cls, reg r88:V, reg r89:V, reg c17:L, reg c18:V, reg c20:L, reg cls2:*, reg cls3:V, reg c21:L, reg cls5:V, reg dr6:V, reg dc3:L, reg dx5:V, reg dx6:V, reg __1:cls, reg r90:V, reg n2:*, reg n3:V, reg r91:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c22:L, reg x8:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r92:V, reg i7:I, reg r93:V, reg boxplot_stats:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r94:V, reg r95:V, reg groups14:*, reg groups15:V, reg c23:L, reg groups17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i8:*, reg i9:V, reg __2:cls, reg r96:V, reg unclass1:cls, reg r97:V, reg p9:p(V +), reg range1:*, reg range2:V, reg p10:p(V +), reg r100:V, reg list2:cls, reg r101:V, reg l3:*, reg c24:L, reg i11:I, reg r103:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i13:I, reg dx11:V, reg i14:*, reg i15:V, reg ___:cls, reg r106:V, reg matrix:cls, reg n4:*, reg n5:V, reg p11:p(V +), reg r108:V, reg matrix1:cls, reg n6:*, reg n7:V, reg p12:p(V +), reg r110:V, reg numeric:cls, reg r111:V, reg groups18:*, reg groups19:V, reg s1:V, reg l6:I, reg i16:I, reg i17:I, reg i18:I, reg c25:L, reg x9:V, reg i21:*, reg i22:V, reg c26:L, reg i25:I, reg i26:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i28:I, reg dx13:V, reg r112:V, reg l7:*, reg c27:L, reg i30:I, reg dx15:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx17:V, reg i32:I, reg dx19:V, reg ct:*, reg ct1:V, reg ___1:cls, reg r113:V, reg i33:*, reg i34:V, reg c28:L, reg i37:I, reg i38:V, reg dr16:V, reg dc8:L, reg dx20:V, reg i40:I, reg dx21:V, reg r114:V, reg l10:*, reg c29:L, reg i42:I, reg dx23:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx25:V, reg i44:I, reg dx27:V, reg ct2:*, reg ct3:V, reg ___2:cls, reg r115:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r116:V, reg i47:I, reg r117:V, reg ng:*, reg ng1:V, reg i48:*, reg i49:V, reg c30:L, reg i52:I, reg i53:V, reg dr20:V, reg dc10:L, reg dx28:V, reg i55:I, reg dx29:V, reg r118:V, reg c31:cls, reg r119:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r120:V, reg i58:I, reg r121:V, reg i59:*, reg i60:V, reg c32:L, reg i63:I, reg i64:V, reg dr22:V, reg dc11:L, reg dx30:V, reg i66:I, reg dx31:V, reg r122:V, reg length4:cls, reg r123:V, reg c33:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r124:V, reg i71:I, reg r125:V, reg out:*, reg out1:V, reg i72:*, reg i73:V, reg c34:L, reg i76:I, reg i77:V, reg dr24:V, reg dc12:L, reg dx32:V, reg i79:I, reg dx33:V, reg r126:V, reg c35:cls, reg r127:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r128:V, reg i82:I, reg r129:V, reg group:*, reg group1:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r130:V, reg i85:I, reg r131:V, reg ct4:*, reg ct5:V, reg lo:*, reg lo1:V, reg rep_int:cls, reg r132:V, reg c36:cls, reg r133:V, reg i86:I, reg ct6:*, reg ct7:V, reg r135:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r136:V, reg r137:V, reg cl:*, reg cl1:V, reg length5:cls, reg r138:V, reg r139:V, reg c37:L, reg c39:V, reg cl2:*, reg cl3:V, reg r140:V, reg c40:L, reg c41:V, reg c43:L, reg cl4:*, reg cl5:V, reg l13:*, reg oldClass__:cls, reg r141:V, reg l14:*, reg oldClass__1:cls, reg r142:V, reg l15:*, reg oldClass__2:cls, reg r143:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r144:V, reg r145:V, reg stats:*, reg stats1:V, reg ng2:*, reg ng3:V, reg conf:*, reg conf1:V, reg out2:*, reg out3:V, reg group2:*, reg group3:V, reg names4:*, reg names5:V, reg list3:cls, reg r146:V, reg plot1:*, reg plot2:V, reg c44:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r147:V, reg r148:V, reg pars1:*, reg pars2:V, reg c45:L, reg pars4:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r149:V, reg c46:V, reg c47:L, reg c49:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r150:V, reg c52:L, reg r151:V, reg args10:*, reg args11:V, reg c53:L, reg c55:L, reg args13:V, reg dr28:V, reg dc14:L, reg dx36:V, reg c57:L, reg dx37:V, reg r152:V, reg c58:V, reg c59:L, reg c60:V, reg c62:L, reg col1:*, reg col2:V, reg l16:*, reg c63:L, reg col4:V, reg l18:*, reg dr30:V, reg dc15:L, reg dx38:V, reg col6:V, reg dx39:V, reg r153:V, reg do_call:cls, reg bxp:*, reg bxp1:V, reg p13:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r155:V, reg r156:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r157:V, reg r158:V, reg z:*, reg z1:V, reg notch1:*, reg notch2:V, reg width1:*, reg width2:V, reg varwidth1:*, reg varwidth2:V, reg log1:*, reg log2:V, reg border1:*, reg border2:V, reg pars5:*, reg pars6:V, reg outline1:*, reg outline2:V, reg horizontal1:*, reg horizontal2:V, reg add3:*, reg add4:V, reg ann1:*, reg ann2:V, reg at1:*, reg at2:V, reg list4:cls, reg r159:V, reg args14:*, reg args15:V, reg c64:L, reg args17:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg namedargs2:*, reg namedargs3:V, reg __3:cls, reg r160:V, reg c65:cls, reg r161:V, reg p14:p(V +), reg r163:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r164:V, reg r165:V, reg z2:*, reg z3:V, reg invisible:cls, reg r166:V, reg z4:*, reg z5:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    range_isMissing = missing.0(range);
    if range_isMissing then L0(1.5) else L0(range);
  L0(range_orDefault):
    st range = range_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L1(NULL) else L1(width);
  L1(width_orDefault):
    st width = width_orDefault;
    varwidth_isMissing = missing.0(varwidth);
    if varwidth_isMissing then L2(FALSE) else L2(varwidth);
  L2(varwidth_orDefault):
    st varwidth = varwidth_orDefault;
    notch_isMissing = missing.0(notch);
    if notch_isMissing then L3(FALSE) else L3(notch);
  L3(notch_orDefault):
    st notch = notch_orDefault;
    outline_isMissing = missing.0(outline);
    if outline_isMissing then L4(TRUE) else L4(outline);
  L4(outline_orDefault):
    st outline = outline_orDefault;
    st names = names;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L5(TRUE) else L5(plot);
  L5(plot_orDefault):
    st plot = plot_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L6() else L7(border);
  L6():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("fg");
      return r;
    };
    goto L7(p);
  L7(border_orDefault):
    st border = border_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L8("lightgray") else L8(col);
  L8(col_orDefault):
    st col = col_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L9("") else L9(log);
  L9(log_orDefault):
    st log = log_orDefault;
    pars_isMissing = missing.0(pars);
    if pars_isMissing then L10() else L11(pars);
  L10():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list(0.8, 0.5, 0.5);
      goto L0(r4);
    L2():
      r2 = dyn base[boxwex, staplewex, outwex](0.8, 0.5, 0.5);
      goto L0(r2);
    };
    goto L11(p1);
  L11(pars_orDefault):
    st pars = pars_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L12() else L13(ann);
  L12():
    p2 = prom<V +>{
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      r6 = `!`(add2);
      return r6;
    };
    goto L13(p2);
  L13(ann_orDefault):
    st ann = ann_orDefault;
    horizontal_isMissing = missing.0(horizontal);
    if horizontal_isMissing then L14(FALSE) else L14(horizontal);
  L14(horizontal_orDefault):
    st horizontal = horizontal_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L15(FALSE) else L15(add);
  L15(add_orDefault):
    st add = add_orDefault;
    at_isMissing = missing.0(at);
    if at_isMissing then L16(NULL) else L16(at);
  L16(at_orDefault):
    st at = at_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L76() else L77();
  L17(r9):
    st args = r9;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L80() else L81();
  L76():
    list1 = ldf list;
    check L78() else D0();
  L77():
    r8 = dyn base1(<sym x>, <sym ...>);
    goto L17(r8);
  D0():
    deopt 2 [];
  L18(r13):
    r20 = `!`(r13);
    c2 = `as.logical`(r20);
    if c2 then L90() else L20();
  L78():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r11 = dyn list1[, `...`](p3, ddd1);
    check L79() else D1();
  L80():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L82() else L83();
  L81():
    r12 = dyn base2(<lang `$`(attributes(args), names)>);
    goto L18(r12);
  D1():
    deopt 5 [r11];
  L19(r15):
    c = `is.object`(r15);
    if c then L87() else L88(r15);
  L20():
    sym5 = ldf rep_len;
    base5 = ldf rep_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L22(r28):
    st namedargs = r28;
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L107() else L108();
  L79():
    goto L17(r11);
  L82():
    args = ld args;
    check L84() else D2();
  L83():
    r14 = dyn base3(<sym args>);
    goto L19(r14);
  L90():
    sym4 = ldf attributes;
    base4 = ldf attributes in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  D2():
    deopt 10 [args];
  L21(r22):
    c3 = `is.object`(r22);
    if c3 then L96() else L97(r22);
  L24(r35):
    c4 = `as.logical`(r35);
    if c4 then L111() else L25();
  L84():
    args1 = force? args;
    checkMissing(args1);
    attributes = ldf attributes in base;
    r16 = dyn attributes(args1);
    check L85() else D3();
  L86(dx1):
    c1 = `==`(dx1, NULL);
    goto L18(c1);
  L87():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(dr);
  L88(r18):
    r19 = `$`(r18, <sym names>);
    goto L86(r19);
  L91():
    args2 = ld args;
    check L93() else D4();
  L92():
    r21 = dyn base4(<sym args>);
    goto L21(r21);
  L100():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L102() else L103();
  L101():
    r29 = dyn base5(FALSE, <lang length(args)>);
    goto L22(r29);
  L107():
    x3 = ld x;
    check L109() else D9();
  L108():
    r34 = dyn base7(<sym x>);
    goto L24(r34);
  D3():
    deopt 13 [r16];
  D4():
    deopt 19 [args2];
  D9():
    deopt 40 [x3];
  L23(r31):
    rep_len = ldf rep_len in base;
    r33 = dyn rep_len(FALSE, r31);
    check L106() else D8();
  L25():
    args6 = ld args;
    check L114() else D12();
  L26(x7):
    st groups = x7;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L119() else L120();
  L85():
    goto L19(r16);
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L86(dx);
  L93():
    args3 = force? args2;
    checkMissing(args3);
    attributes1 = ldf attributes in base;
    r23 = dyn attributes1(args3);
    check L94() else D5();
  L95(dx3):
    r27 = `!=`(dx3, "");
    goto L22(r27);
  L96():
    dr2 = tryDispatchBuiltin.1("$", r22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(dr2);
  L97(r25):
    r26 = `$`(r25, <sym names>);
    goto L95(r26);
  L102():
    args4 = ld args;
    check L104() else D6();
  L103():
    r30 = dyn base6(<sym args>);
    goto L23(r30);
  L109():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r36 = dyn is_list(x4);
    check L110() else D10();
  L111():
    x5 = ld x;
    check L112() else D11();
  D5():
    deopt 22 [r23];
  D6():
    deopt 31 [args4];
  D8():
    deopt 36 [r33];
  D10():
    deopt 43 [r36];
  D11():
    deopt 44 [x5];
  D12():
    deopt 46 [args6];
  L27(r42, r43):
    st n = r43;
    r45 = `==`(r42, r43);
    c6 = `as.logical`(r45);
    if c6 then L123() else L28();
  L94():
    goto L21(r23);
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L95(dx2);
  L104():
    args5 = force? args4;
    checkMissing(args5);
    length = ldf length in base;
    r32 = dyn length(args5);
    check L105() else D7();
  L106():
    goto L22(r33);
  L110():
    goto L24(r36);
  L112():
    x6 = force? x5;
    checkMissing(x6);
    goto L26(x6);
  L114():
    args7 = force? args6;
    checkMissing(args7);
    c5 = `is.object`(args7);
    if c5 then L115() else L116(args7);
  L119():
    groups = ld groups;
    check L121() else D14();
  L120():
    r41 = dyn base8(<sym groups>);
    goto L27(0, r41);
  D7():
    deopt 34 [r32];
  D14():
    deopt 56 [0, groups];
  L28():
    goto L29();
  L29():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L127() else L128();
  L105():
    goto L23(r32);
  L115():
    dr4 = tryDispatchBuiltin.1("[", args7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L117() else L116(dr4);
  L116(args9):
    namedargs = ld namedargs;
    check L118() else D13();
  L121():
    groups1 = force? groups;
    checkMissing(groups1);
    length1 = ldf length in base;
    r44 = dyn length1(groups1);
    check L122() else D15();
  L123():
    stop = ldf stop;
    check L124() else D16();
  D13():
    deopt 48 [args9, namedargs];
  D15():
    deopt 59 [0, r44];
  D16():
    deopt 63 [];
  L30(r49):
    c7 = `as.logical`(r49);
    if c7 then L134() else L32();
  L117():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx4);
  L118():
    namedargs1 = force? namedargs;
    checkMissing(namedargs1);
    r37 = `!`(namedargs1);
    __ = ldf `[` in base;
    r38 = dyn __(args9, r37);
    goto L26(r38);
  L122():
    goto L27(0, r44);
  L124():
    r46 = dyn stop("invalid first argument");
    check L125() else D17();
  L127():
    sym10 = ldf class;
    base10 = ldf class in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L129() else L130();
  L128():
    r48 = dyn base9(<lang class(groups)>);
    goto L30(r48);
  D17():
    deopt 65 [r46];
  L31(r51):
    length2 = ldf length in base;
    r53 = dyn length2(r51);
    check L133() else D20();
  L32():
    goto L34();
  L34():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L140() else L141();
  L125():
    goto L29();
  L129():
    groups2 = ld groups;
    check L131() else D18();
  L130():
    r50 = dyn base10(<sym groups>);
    goto L31(r50);
  L134():
    sym11 = ldf unclass;
    base11 = ldf unclass in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L135() else L136();
  D18():
    deopt 72 [groups2];
  D20():
    deopt 77 [r53];
  L33(r55):
    st groups = r55;
    goto L34();
  L35(r59):
    r61 = `!`(r59);
    c8 = `as.logical`(r61);
    if c8 then L142() else L36();
  L131():
    groups3 = force? groups2;
    checkMissing(groups3);
    class = ldf class in base;
    r52 = dyn class(groups3);
    check L132() else D19();
  L133():
    goto L30(r53);
  L135():
    groups4 = ld groups;
    check L137() else D21();
  L136():
    r54 = dyn base11(<sym groups>);
    goto L33(r54);
  L140():
    missing = ldf missing in base;
    r60 = dyn missing(<sym names>);
    goto L35(r60);
  L141():
    r58 = dyn base12(<sym names>);
    goto L35(r58);
  D19():
    deopt 75 [r52];
  D21():
    deopt 80 [groups4];
  L36():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  L37():
    lapply = ldf lapply;
    check L162() else D33();
  L132():
    goto L31(r52);
  L137():
    groups5 = force? groups4;
    checkMissing(groups5);
    unclass = ldf unclass in base;
    r56 = dyn unclass(groups5);
    check L138() else D22();
  L142():
    names1 = ld names;
    check L143() else D23();
  D22():
    deopt 83 [r56];
  D23():
    deopt 91 [names1];
  D33():
    deopt 129 [];
  L38(r64):
    c10 = `as.logical`(r64);
    if c10 then L153() else L40();
  L138():
    goto L33(r56);
  L143():
    names2 = force? names1;
    checkMissing(names2);
    l = ld groups;
    attr__ = ldf `attr<-`;
    check L144() else D24();
  L147():
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L149() else L150();
  L148():
    r63 = dyn base13(<lang attr(groups, "names")>);
    goto L38(r63);
  L162():
    p4 = prom<V +>{
      groups10 = ld groups;
      groups11 = force? groups10;
      checkMissing(groups11);
      return groups11;
    };
    p5 = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r76 = dyn lapply(p4, p5);
    check L163() else D34();
  D24():
    deopt 94 [names2, l, names2];
  D34():
    deopt 132 [r76];
  L39(r66):
    c9 = `==`(r66, NULL);
    goto L38(c9);
  L40():
    goto L41();
  L41():
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L158() else L159();
  L144():
    r62 = dyn attr__(l, NULL, "names", names2);
    check L145() else D25();
  L149():
    groups6 = ld groups;
    check L151() else D26();
  L150():
    r65 = dyn base14(<sym groups>, "names");
    goto L39(r65);
  L153():
    n = ld n;
    check L154() else D28();
  L163():
    st cls = r76;
    st cl = NULL;
    sym16 = ldf all;
    base16 = ldf all in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L164() else L165();
  D25():
    deopt 97 [names2, r62];
  D26():
    deopt 102 [groups6];
  D28():
    deopt 109 [1, n];
  L42(r72):
    st names = r72;
    goto L37();
  L43(r78):
    c11 = `as.logical`(r78);
    if c11 then L169() else L44(c11);
  L145():
    st groups = r62;
    goto L37();
  L151():
    groups7 = force? groups6;
    checkMissing(groups7);
    attr = ldf attr in base;
    r67 = dyn attr(groups7, "names");
    check L152() else D27();
  L154():
    n1 = force? n;
    checkMissing(n1);
    r68 = `:`(1, n1);
    l1 = ld groups;
    attr__1 = ldf `attr<-`;
    check L155() else D29();
  L158():
    groups8 = ld groups;
    check L160() else D31();
  L159():
    r71 = dyn base15(<sym groups>, "names");
    goto L42(r71);
  L164():
    vapply = ldf vapply;
    check L166() else D35();
  L165():
    r77 = dyn base16(<lang vapply(groups, function((e=), {
          `&&`(is.numeric(unclass(e)), identical(names(attributes(e)), "class"))
        }, NULL), NA_LGL)>);
    goto L43(r77);
  D27():
    deopt 106 [r67];
  D29():
    deopt 113 [r68, l1, r68];
  D31():
    deopt 122 [groups8];
  D35():
    deopt 140 [];
  L44(c13):
    c20 = `as.logical`(c13);
    if c20 then L176() else L46();
  L152():
    goto L39(r67);
  L155():
    r69 = dyn attr__1(l1, NULL, "names", r68);
    check L156() else D30();
  L160():
    groups9 = force? groups8;
    checkMissing(groups9);
    attr1 = ldf attr in base;
    r73 = dyn attr1(groups9, "names");
    check L161() else D32();
  L166():
    p6 = prom<V +>{
      groups12 = ld groups;
      groups13 = force? groups12;
      checkMissing(groups13);
      return groups13;
    };
    p7 = prom<V +>{
      r80 = clos inner1560918050;
      return r80;
    };
    r82 = dyn vapply(p6, p7, NA_LGL);
    check L167() else D36();
  L169():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L170() else L171();
  D30():
    deopt 116 [r68, r69];
  D32():
    deopt 126 [r73];
  D36():
    deopt 144 [r82];
  L45(c16, r85):
    r89 = `==`(r85, 1);
    c17 = `as.logical`(r89);
    c18 = `&&`(c16, c17);
    goto L44(c18);
  L46():
    goto L48();
  L48():
    n2 = ld n;
    check L182() else D42();
  L156():
    st groups = r69;
    goto L41();
  L161():
    goto L42(r73);
  L167():
    all = ldf all in base;
    r83 = dyn all(r82);
    check L168() else D37();
  L170():
    unique = ldf unique;
    check L172() else D38();
  L171():
    r84 = dyn base17(<lang unique(cls)>);
    goto L45(c11, r84);
  L176():
    cls2 = ld cls;
    check L177() else D41();
  D37():
    deopt 146 [r83];
  D38():
    deopt 150 [c11];
  D41():
    deopt 158 [cls2];
  D42():
    deopt 167 [1, n2];
  L168():
    goto L43(r83);
  L172():
    p8 = prom<V +>{
      cls = ld cls;
      cls1 = force? cls;
      checkMissing(cls1);
      return cls1;
    };
    r87 = dyn unique(p8);
    check L173() else D39();
  L177():
    cls3 = force? cls2;
    checkMissing(cls3);
    c21 = `is.object`(cls3);
    if c21 then L178() else L179(cls3);
  L182():
    n3 = force? n2;
    checkMissing(n3);
    r91 = `:`(1, n3);
    s = toForSeq(r91);
    l2 = length(s);
    i = 0;
    goto L49(i);
  D39():
    deopt 152 [c11, r87];
  L47(dx6):
    st cl = dx6;
    goto L48();
  L49(i1):
    i2 = `+`.1(i1, 1);
    c22 = `<`.1(l2, i2);
    if c22 then L183() else L52();
  L173():
    length3 = ldf length in base;
    r88 = dyn length3(r87);
    check L174() else D40();
  L178():
    dr6 = tryDispatchBuiltin.1("[[", cls3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L180() else L179(dr6);
  L179(cls5):
    __1 = ldf `[[` in base;
    r90 = dyn __1(cls5, 1);
    goto L47(r90);
  D40():
    deopt 154 [c11, r88];
  L52():
    x8 = `[[`(s, i2, NULL, TRUE);
    st i = x8;
    sym18 = ldf list;
    base18 = ldf list in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L184() else L185();
  L174():
    goto L45(c11, r88);
  L180():
    dx5 = getTryDispatchBuiltinValue(dr6);
    goto L47(dx5);
  L183():
    matrix = ldf matrix;
    check L193() else D47();
  D47():
    deopt 188 [];
  L50(i7, r93):
    l3 = ld groups;
    c24 = `is.object`(l3);
    if c24 then L189() else L190(i7, r93, l3);
  L184():
    boxplot_stats = ldf `boxplot.stats`;
    check L186() else D43();
  L185():
    r92 = dyn base18(<lang boxplot.stats(unclass(`[[`(groups, i)), range)>);
    goto L50(i2, r92);
  L193():
    p11 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r108 = dyn matrix[, nrow, ncol](0.0, 5, p11);
    check L194() else D48();
  D43():
    deopt 173 [i2];
  D48():
    deopt 194 [r108];
  L51(i13, dx11):
    st groups = dx11;
    goto L49(i13);
  L186():
    p9 = prom<V +>{
      sym19 = ldf unclass;
      base19 = ldf unclass in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L2() else L3();
    L0(r95):
      return r95;
    L2():
      groups14 = ld groups;
      groups15 = force? groups14;
      checkMissing(groups15);
      c23 = `is.object`(groups15);
      if c23 then L4() else L5(groups15);
    L3():
      r94 = dyn base19(<lang `[[`(groups, i)>);
      goto L0(r94);
    L1(dx9):
      unclass1 = ldf unclass in base;
      r97 = dyn unclass1(dx9);
      goto L0(r97);
    L4():
      dr8 = tryDispatchBuiltin.1("[[", groups15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(groups17):
      i8 = ld i;
      i9 = force? i8;
      __2 = ldf `[[` in base;
      r96 = dyn __2(groups17, i9);
      goto L1(r96);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    p10 = prom<V +>{
      range1 = ld range;
      range2 = force? range1;
      checkMissing(range2);
      return range2;
    };
    r100 = dyn boxplot_stats(p9, p10);
    check L187() else D44();
  L189():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r93);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L191() else L190(i7, r93, dr10);
  L190(i11, r103, l5):
    i14 = ld i;
    check L192() else D46();
  L194():
    st stats = r108;
    matrix1 = ldf matrix;
    check L195() else D49();
  D44():
    deopt 176 [i2, r100];
  D46():
    deopt 180 [i11, r103, l5, r93, i14];
  D49():
    deopt 197 [];
  L187():
    list2 = ldf list in base;
    r101 = dyn list2(r100);
    check L188() else D45();
  L191():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L51(i7, dx10);
  L192():
    i15 = force? i14;
    ___ = ldf `[<-` in base;
    r106 = dyn ___(l5, r93, i15);
    goto L51(i11, r106);
  L195():
    p12 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    r110 = dyn matrix1[, nrow, ncol](0.0, 2, p12);
    check L196() else D50();
  D45():
    deopt 178 [i2, r101];
  D50():
    deopt 203 [r110];
  L188():
    goto L50(i2, r101);
  L196():
    st conf = r110;
    numeric = ldf numeric;
    check L197() else D51();
  D51():
    deopt 206 [];
  L197():
    r111 = dyn numeric(0);
    check L198() else D52();
  D52():
    deopt 208 [r111];
  L198():
    st group = r111;
    st out = r111;
    st ng = r111;
    st ct = 1.0;
    groups18 = ld groups;
    check L199() else D53();
  D53():
    deopt 215 [groups18];
  L199():
    groups19 = force? groups18;
    checkMissing(groups19);
    s1 = toForSeq(groups19);
    l6 = length(s1);
    i16 = 0;
    goto L53(i16);
  L53(i17):
    i18 = `+`.1(i17, 1);
    c25 = `<`.1(l6, i18);
    if c25 then L200() else L63();
  L63():
    x9 = `[[`(s1, i18, NULL, TRUE);
    st i = x9;
    i21 = ld i;
    check L201() else D54();
  L200():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L257() else L258();
  D54():
    deopt 217 [i18, i21];
  L64(r137):
    r139 = `==`(r137, 1);
    c37 = `as.logical`(r139);
    if c37 then L261() else L65(c37);
  L201():
    i22 = force? i21;
    checkMissing(i22);
    c26 = `is.object`(i22);
    if c26 then L203() else L204(i18, i22);
  L257():
    cl = ld cl;
    check L259() else D72();
  L258():
    r136 = dyn base25(<sym cl>);
    goto L64(r136);
  D72():
    deopt 292 [cl];
  L65(c39):
    c43 = `as.logical`(c39);
    if c43 then L264() else L66();
  L202(i28, dx13):
    l7 = ld stats;
    c27 = `is.object`(l7);
    if c27 then L206() else L207(i28, dx13, l7);
  L203():
    dr12 = tryDispatchBuiltin.1("$", i22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L205() else L204(i18, dr12);
  L204(i25, i26):
    r112 = `$`(i26, <sym stats>);
    goto L202(i25, r112);
  L259():
    cl1 = force? cl;
    checkMissing(cl1);
    length5 = ldf length in base;
    r138 = dyn length5(cl1);
    check L260() else D73();
  L261():
    cl2 = ld cl;
    check L262() else D74();
  D73():
    deopt 295 [r138];
  D74():
    deopt 298 [c37, cl2];
  L54(i32, dx19):
    st stats = dx19;
    i33 = ld i;
    check L210() else D56();
  L66():
    goto L67();
  L67():
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L273() else L274();
  L205():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L202(i18, dx12);
  L206():
    dr14 = tryDispatchBuiltin.0("[<-", l7, dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L208() else L207(i28, dx13, dr14);
  L207(i30, dx15, l9):
    ct = ld ct;
    check L209() else D55();
  L260():
    goto L64(r138);
  L262():
    cl3 = force? cl2;
    checkMissing(cl3);
    r140 = `!=`(cl3, "numeric");
    c40 = `as.logical`(r140);
    c41 = `&&`(c37, c40);
    goto L65(c41);
  L264():
    cl4 = ld cl;
    check L265() else D75();
  D55():
    deopt 222 [i30, dx15, l9, dx13, ct];
  D56():
    deopt 227 [i32, i33];
  D75():
    deopt 303 [cl4];
  L68(r145):
    st z = r145;
    plot1 = ld plot;
    check L282() else D89();
  L208():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L54(i28, dx17);
  L209():
    ct1 = force? ct;
    ___1 = ldf `[<-` in base;
    r113 = dyn ___1(l7, <missing>, ct1, dx13);
    goto L54(i30, r113);
  L210():
    i34 = force? i33;
    checkMissing(i34);
    c28 = `is.object`(i34);
    if c28 then L212() else L213(i32, i34);
  L265():
    cl5 = force? cl4;
    checkMissing(cl5);
    l13 = ld out;
    oldClass__ = ldf `oldClass<-`;
    check L266() else D76();
  L273():
    stats = ld stats;
    check L275() else D82();
  L274():
    r144 = dyn base26[stats, n, conf, out, group, names](<sym stats>, <sym ng>, <sym conf>, <sym out>, <sym group>, <sym names>);
    goto L68(r144);
  D76():
    deopt 306 [cl5, l13, cl5];
  D82():
    deopt 324 [stats];
  D89():
    deopt 345 [plot1];
  L211(i40, dx21):
    l10 = ld conf;
    c29 = `is.object`(l10);
    if c29 then L215() else L216(i40, dx21, l10);
  L212():
    dr16 = tryDispatchBuiltin.1("$", i34);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L214() else L213(i32, dr16);
  L213(i37, i38):
    r114 = `$`(i38, <sym conf>);
    goto L211(i37, r114);
  L266():
    r141 = dyn oldClass__(l13, NULL, cl5);
    check L267() else D77();
  L275():
    stats1 = force? stats;
    checkMissing(stats1);
    ng2 = ld ng;
    check L276() else D83();
  L282():
    plot2 = force? plot1;
    checkMissing(plot2);
    c44 = `as.logical`(plot2);
    if c44 then L283() else L69();
  D77():
    deopt 308 [cl5, r141];
  D83():
    deopt 327 [ng2];
  L55(i44, dx27):
    st conf = dx27;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L219() else L220();
  L69():
    z4 = ld z;
    check L314() else D97();
  L214():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L211(i32, dx20);
  L215():
    dr18 = tryDispatchBuiltin.0("[<-", l10, dx21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L217() else L216(i40, dx21, dr18);
  L216(i42, dx23, l12):
    ct2 = ld ct;
    check L218() else D57();
  L267():
    st out = r141;
    l14 = ld conf;
    oldClass__1 = ldf `oldClass<-`;
    check L268() else D78();
  L276():
    ng3 = force? ng2;
    checkMissing(ng3);
    conf = ld conf;
    check L277() else D84();
  L283():
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L284() else L285();
  D57():
    deopt 232 [i42, dx23, l12, dx21, ct2];
  D78():
    deopt 311 [cl5, l14, cl5];
  D84():
    deopt 330 [conf];
  D97():
    deopt 378 [z4];
  L56(i47, r117):
    st ng = r117;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L228() else L229();
  L70(r148):
    c47 = `as.logical`(r148);
    if c47 then L291() else L71(c47);
  L217():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L55(i40, dx25);
  L218():
    ct3 = force? ct2;
    ___2 = ldf `[<-` in base;
    r115 = dyn ___2(l10, <missing>, ct3, dx21);
    goto L55(i42, r115);
  L219():
    ng = ld ng;
    check L221() else D58();
  L220():
    r116 = dyn base20(<sym ng>, <lang `$`(i, n)>);
    goto L56(i44, r116);
  L268():
    r142 = dyn oldClass__1(l14, NULL, cl5);
    check L269() else D79();
  L277():
    conf1 = force? conf;
    checkMissing(conf1);
    out2 = ld out;
    check L278() else D85();
  L284():
    pars1 = ld pars;
    check L286() else D90();
  L285():
    r147 = dyn base27(<lang `$`(pars, boxfill)>);
    goto L70(r147);
  L314():
    z5 = force? z4;
    checkMissing(z5);
    popenv;
    return z5;
  D58():
    deopt 239 [i44, ng];
  D79():
    deopt 313 [cl5, r142];
  D85():
    deopt 333 [out2];
  D90():
    deopt 348 [pars1];
  L57(i58, r121):
    st lo = r121;
    c33 = `as.logical`(r121);
    if c33 then L236() else L58();
  L71(c49):
    c62 = `as.logical`(c49);
    if c62 then L300() else L73();
  L221():
    ng1 = force? ng;
    checkMissing(ng1);
    i48 = ld i;
    check L222() else D59();
  L228():
    i59 = ld i;
    check L230() else D61();
  L229():
    r120 = dyn base21(<lang `$`(i, out)>);
    goto L57(i47, r120);
  L269():
    st conf = r142;
    l15 = ld stats;
    oldClass__2 = ldf `oldClass<-`;
    check L270() else D80();
  L278():
    out3 = force? out2;
    checkMissing(out3);
    group2 = ld group;
    check L279() else D86();
  L286():
    pars2 = force? pars1;
    checkMissing(pars2);
    c45 = `is.object`(pars2);
    if c45 then L288() else L289(pars2);
  L291():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L292() else L293();
  D59():
    deopt 241 [i44, i48];
  D61():
    deopt 249 [i47, i59];
  D80():
    deopt 316 [cl5, l15, cl5];
  D86():
    deopt 336 [group2];
  L58():
    goto L62(i58);
  L62(i86):
    ct6 = ld ct;
    check L256() else D71();
  L72(c52, r151):
    c59 = `as.logical`(r151);
    c60 = `&&`(c52, c59);
    goto L71(c60);
  L73():
    goto L74();
  L74():
    do_call = ldf `do.call`;
    check L307() else D93();
  L222():
    i49 = force? i48;
    checkMissing(i49);
    c30 = `is.object`(i49);
    if c30 then L224() else L225(i44, i49);
  L230():
    i60 = force? i59;
    checkMissing(i60);
    c32 = `is.object`(i60);
    if c32 then L232() else L233(i47, i60);
  L236():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L237() else L238();
  L270():
    r143 = dyn oldClass__2(l15, NULL, cl5);
    check L271() else D81();
  L279():
    group3 = force? group2;
    checkMissing(group3);
    names4 = ld names;
    check L280() else D87();
  L287(dx35):
    c46 = `==`(dx35, NULL);
    goto L70(c46);
  L288():
    dr26 = tryDispatchBuiltin.1("$", pars2);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L290() else L289(dr26);
  L289(pars4):
    r149 = `$`(pars4, <sym boxfill>);
    goto L287(r149);
  L292():
    args10 = ld args;
    check L294() else D91();
  L293():
    r150 = dyn base28(<lang `$`(args, boxfill)>);
    goto L72(c47, r150);
  L300():
    col1 = ld col;
    check L301() else D92();
  D71():
    deopt 282 [i86, ct6];
  D81():
    deopt 318 [cl5, r143];
  D87():
    deopt 339 [names4];
  D91():
    deopt 353 [c47, args10];
  D92():
    deopt 358 [col1];
  D93():
    deopt 366 [];
  L59(i71, r125):
    st out = r125;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L246() else L247();
  L223(i55, dx29):
    c31 = ldf c in base;
    r119 = dyn c31(ng1, dx29);
    check L227() else D60();
  L224():
    dr20 = tryDispatchBuiltin.1("$", i49);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L226() else L225(i44, dr20);
  L225(i52, i53):
    r118 = `$`(i53, <sym n>);
    goto L223(i52, r118);
  L231(i66, dx31):
    length4 = ldf length in base;
    r123 = dyn length4(dx31);
    check L235() else D62();
  L232():
    dr22 = tryDispatchBuiltin.1("$", i60);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L234() else L233(i47, dr22);
  L233(i63, i64):
    r122 = `$`(i64, <sym out>);
    goto L231(i63, r122);
  L237():
    out = ld out;
    check L239() else D63();
  L238():
    r124 = dyn base22(<sym out>, <lang `$`(i, out)>);
    goto L59(i58, r124);
  L256():
    ct7 = force? ct6;
    checkMissing(ct7);
    r135 = `+`(ct7, 1.0);
    st ct = r135;
    goto L53(i86);
  L271():
    st stats = r143;
    goto L67();
  L280():
    names5 = force? names4;
    checkMissing(names5);
    list3 = ldf list in base;
    r146 = dyn list3(stats1, ng3, conf1, out3, group3, names5);
    check L281() else D88();
  L290():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L287(dx34);
  L294():
    args11 = force? args10;
    checkMissing(args11);
    c53 = `is.object`(args11);
    if c53 then L296() else L297(c47, args11);
  L301():
    col2 = force? col1;
    checkMissing(col2);
    l16 = ld pars;
    c63 = `is.object`(l16);
    if c63 then L303() else L304(col2, l16);
  L307():
    p13 = prom<V +>{
      bxp = ld bxp;
      bxp1 = force? bxp;
      checkMissing(bxp1);
      return bxp1;
    };
    p14 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L3() else L4();
    L0(r156):
      return r156;
    L3():
      sym30 = ldf list;
      base30 = ldf list in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L5() else L6();
    L4():
      r155 = dyn base29(<lang list(z, notch=notch, width=width, varwidth=varwidth, log=log, border=border, pars=pars, outline=outline, horizontal=horizontal, add=add, ann=ann, at=at)>, <lang `[`(args, namedargs)>);
      goto L0(r155);
    L1(r158):
      args14 = ld args;
      args15 = force? args14;
      checkMissing(args15);
      c64 = `is.object`(args15);
      if c64 then L7() else L8(args15);
    L5():
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      notch1 = ld notch;
      notch2 = force? notch1;
      checkMissing(notch2);
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      varwidth1 = ld varwidth;
      varwidth2 = force? varwidth1;
      checkMissing(varwidth2);
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      pars5 = ld pars;
      pars6 = force? pars5;
      checkMissing(pars6);
      outline1 = ld outline;
      outline2 = force? outline1;
      checkMissing(outline2);
      horizontal1 = ld horizontal;
      horizontal2 = force? horizontal1;
      checkMissing(horizontal2);
      add3 = ld add;
      add4 = force? add3;
      checkMissing(add4);
      ann1 = ld ann;
      ann2 = force? ann1;
      checkMissing(ann2);
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      list4 = ldf list in base;
      r159 = dyn list4(z1, notch2, width2, varwidth2, log2, border2, pars6, outline2, horizontal2, add4, ann2, at2);
      goto L1(r159);
    L6():
      r157 = dyn base30[, notch, width, varwidth, log, border, pars, outline, horizontal, add, ann, at](<sym z>, <sym notch>, <sym width>, <sym varwidth>, <sym log>, <sym border>, <sym pars>, <sym outline>, <sym horizontal>, <sym add>, <sym ann>, <sym at>);
      goto L1(r157);
    L2(dx41):
      c65 = ldf c in base;
      r161 = dyn c65(r158, dx41);
      goto L0(r161);
    L7():
      dr32 = tryDispatchBuiltin.1("[", args15);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L9() else L8(dr32);
    L8(args17):
      namedargs2 = ld namedargs;
      namedargs3 = force? namedargs2;
      __3 = ldf `[` in base;
      r160 = dyn __3(args17, namedargs3);
      goto L2(r160);
    L9():
      dx40 = getTryDispatchBuiltinValue(dr32);
      goto L2(dx40);
    };
    r163 = dyn do_call[, , quote](p13, p14, TRUE);
    check L308() else D94();
  D60():
    deopt 245 [i55, r119];
  D62():
    deopt 253 [i66, r123];
  D63():
    deopt 257 [i58, out];
  D88():
    deopt 343 [r146];
  D94():
    deopt 371 [r163];
  L60(i82, r129):
    st group = r129;
    goto L62(i82);
  L226():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L223(i44, dx28);
  L227():
    goto L56(i55, r119);
  L234():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L231(i47, dx30);
  L235():
    goto L57(i66, r123);
  L239():
    out1 = force? out;
    checkMissing(out1);
    i72 = ld i;
    check L240() else D64();
  L246():
    group = ld group;
    check L248() else D66();
  L247():
    r128 = dyn base23(<sym group>, <lang rep.int(ct, lo)>);
    goto L60(i71, r128);
  L281():
    goto L68(r146);
  L295(c57, dx37):
    c58 = `==`(dx37, NULL);
    goto L72(c57, c58);
  L296():
    dr28 = tryDispatchBuiltin.1("$", args11);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L298() else L297(c47, dr28);
  L297(c55, args13):
    r152 = `$`(args13, <sym boxfill>);
    goto L295(c55, r152);
  L302(col6, dx39):
    st pars = dx39;
    goto L74();
  L303():
    dr30 = tryDispatchBuiltin.0("$<-", l16, col2);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L305() else L304(col2, dr30);
  L304(col4, l18):
    r153 = `$<-`(l18, <sym boxfill>, col2);
    goto L302(col4, r153);
  L308():
    sym31 = ldf invisible;
    base31 = ldf invisible in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L309() else L310();
  D64():
    deopt 259 [i58, i72];
  D66():
    deopt 267 [i71, group];
  L75(r165):
    popenv;
    return r165;
  L240():
    i73 = force? i72;
    checkMissing(i73);
    c34 = `is.object`(i73);
    if c34 then L242() else L243(i58, i73);
  L248():
    group1 = force? group;
    checkMissing(group1);
    sym24 = ldf `rep.int`;
    base24 = ldf `rep.int` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L249() else L250();
  L298():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L295(c47, dx36);
  L305():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L302(col2, dx38);
  L309():
    z2 = ld z;
    check L311() else D95();
  L310():
    r164 = dyn base31(<sym z>);
    goto L75(r164);
  D95():
    deopt 374 [z2];
  L61(i85, r131):
    c36 = ldf c in base;
    r133 = dyn c36(group1, r131);
    check L254() else D70();
  L241(i79, dx33):
    c35 = ldf c in base;
    r127 = dyn c35(out1, dx33);
    check L245() else D65();
  L242():
    dr24 = tryDispatchBuiltin.1("$", i73);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L244() else L243(i58, dr24);
  L243(i76, i77):
    r126 = `$`(i77, <sym out>);
    goto L241(i76, r126);
  L249():
    ct4 = ld ct;
    check L251() else D67();
  L250():
    r130 = dyn base24(<sym ct>, <sym lo>);
    goto L61(i71, r130);
  L311():
    z3 = force? z2;
    checkMissing(z3);
    invisible = ldf invisible in base;
    r166 = dyn invisible(z3);
    check L312() else D96();
  D65():
    deopt 263 [i79, r127];
  D67():
    deopt 271 [i71, ct4];
  D70():
    deopt 278 [i85, r133];
  D96():
    deopt 377 [r166];
  L244():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L241(i58, dx32);
  L245():
    goto L59(i79, r127);
  L251():
    ct5 = force? ct4;
    checkMissing(ct5);
    lo = ld lo;
    check L252() else D68();
  L254():
    goto L60(i85, r133);
  L312():
    goto L75(r166);
  D68():
    deopt 273 [i71, lo];
  L252():
    lo1 = force? lo;
    checkMissing(lo1);
    rep_int = ldf `rep.int` in base;
    r132 = dyn rep_int(ct5, lo1);
    check L253() else D69();
  D69():
    deopt 276 [i71, r132];
  L253():
    goto L61(i71, r132);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg unclass:cls, reg r4:V, reg is_numeric:cls, reg r5:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c5:L, reg r7:V, reg names:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg e3:*, reg e4:V, reg attributes:cls, reg r10:V, reg p:p(V +), reg r12:V, reg identical:cls, reg r13:V, reg c6:L, reg c7:V |
    mkenv;
    st e = e;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L2(c);
  L4():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang unclass(e)>);
    goto L0(r);
  L1(r3):
    is_numeric = ldf `is.numeric` in base;
    r5 = dyn is_numeric(r3);
    check L10() else D2();
  L2(c2):
    popenv;
    return c2;
  L6():
    e1 = ld e;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym e>);
    goto L1(r2);
  L11():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  D0():
    deopt 4 [e1];
  D2():
    deopt 9 [r5];
  L3(c5, r7):
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L2(c7);
  L8():
    e2 = force? e1;
    checkMissing(e2);
    unclass = ldf unclass in base;
    r4 = dyn unclass(e2);
    check L9() else D1();
  L10():
    goto L0(r5);
  L12():
    names = ldf names;
    check L14() else D3();
  L13():
    r6 = dyn base2(<lang names(attributes(e))>, "class");
    goto L3(c, r6);
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [c];
  L9():
    goto L1(r4);
  L14():
    p = prom<V +>{
      sym3 = ldf attributes;
      base3 = ldf attributes in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      attributes = ldf attributes in base;
      r10 = dyn attributes(e4);
      goto L0(r10);
    L2():
      r8 = dyn base3(<sym e>);
      goto L0(r8);
    };
    r12 = dyn names(p);
    check L15() else D4();
  D4():
    deopt 15 [c, r12];
  L15():
    identical = ldf identical in base;
    r13 = dyn identical(r12, "class", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L16() else D5();
  D5():
    deopt 25 [c, r13];
  L16():
    goto L3(c, r13);
  }
}