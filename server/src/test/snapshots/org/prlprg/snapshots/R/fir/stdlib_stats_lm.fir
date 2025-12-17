fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1283181746;
    st lm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1283181746(formula, data, subset, weights, `na.action`, method, model, x, y, qr, `singular.ok`, contrasts, offset, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg weights:*, reg na_action:*, reg method:*, reg model:*, reg x:*, reg y:*, reg qr:*, reg singular_ok:*, reg contrasts:*, reg offset:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var weights:*, var `na.action`:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var model:*, reg model_isMissing:L, reg model_orDefault:*, var x:*, reg x_isMissing:L, reg x_orDefault:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var qr:*, reg qr_isMissing:L, reg qr_orDefault:*, var `singular.ok`:*, reg singular_ok_isMissing:L, reg singular_ok_orDefault:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var offset:*, var `...`:dots?, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg match_call:cls, reg r:V, reg match_call1:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg mf:*, reg mf1:V, reg names:cls, reg r9:V, reg match:cls, reg r10:V, reg mf2:*, reg mf3:V, reg c1:L, reg mf5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg mf8:V, reg r12:V, reg m:*, reg m1:V, reg c2:cls, reg r13:V, reg __:cls, reg r14:V, reg l:*, reg c3:L, reg r16:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg quote:cls, reg r22:V, reg l3:*, reg c4:L, reg r24:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____:cls, reg r27:V, reg eval:cls, reg mf9:*, reg mf10:V, reg p:p(V +), reg parent_frame:cls, reg r29:V, reg p1:p(V +), reg r31:V, reg method1:*, reg method2:V, reg r32:V, reg c5:L, reg mf11:*, reg mf12:V, reg method3:*, reg method4:V, reg r35:V, reg c6:L, reg warning:cls, reg gettextf:cls, reg method5:*, reg method6:V, reg p2:p(V +), reg r37:V, reg p3:p(V +), reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg mf13:*, reg mf14:V, reg attr:cls, reg r42:V, reg model_response:cls, reg mf15:*, reg mf16:V, reg p4:p(V +), reg r44:V, reg as_vector:cls, reg model_weights:cls, reg mf17:*, reg mf18:V, reg p5:p(V +), reg r46:V, reg p6:p(V +), reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg w:*, reg w1:V, reg c7:V, reg r51:V, reg c8:L, reg c10:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg c13:L, reg r53:V, reg w2:*, reg w3:V, reg is_numeric:cls, reg r54:V, reg r55:V, reg c14:L, reg c15:V, reg c17:L, reg stop:cls, reg r56:V, reg model_offset:cls, reg mf19:*, reg mf20:V, reg p7:p(V +), reg r59:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg y3:*, reg y4:V, reg is_matrix:cls, reg r62:V, reg mlm:*, reg mlm1:V, reg c18:L, reg nrow:cls, reg y5:*, reg y6:V, reg p8:p(V +), reg r64:V, reg r65:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg y7:*, reg y8:V, reg length:cls, reg r67:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg offset1:*, reg offset2:V, reg c19:V, reg r70:V, reg c20:L, reg mlm2:*, reg mlm3:V, reg r71:V, reg c21:L, reg as_vector1:cls, reg offset3:*, reg offset4:V, reg p9:p(V +), reg r73:V, reg NROW:cls, reg offset5:*, reg offset6:V, reg p10:p(V +), reg r76:V, reg ny:*, reg ny1:V, reg r77:V, reg c22:L, reg stop1:cls, reg gettextf1:cls, reg NROW1:cls, reg offset7:*, reg offset8:V, reg p11:p(V +), reg r79:V, reg p12:p(V +), reg ny2:*, reg ny3:V, reg p13:p(V +), reg r82:V, reg p14:p(V +), reg r84:V, reg r85:V, reg is_empty_model:cls, reg mt:*, reg mt1:V, reg p15:p(V +), reg r88:V, reg c23:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg r90:V, reg mlm4:*, reg mlm5:V, reg c24:L, reg matrix:cls, reg ncol:cls, reg y9:*, reg y10:V, reg p16:p(V +), reg r92:V, reg p17:p(V +), reg r94:V, reg r95:V, reg numeric:cls, reg r96:V, reg y11:*, reg y12:V, reg y13:*, reg y14:V, reg r97:V, reg w4:*, reg w5:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r98:V, reg r99:V, reg w6:*, reg w7:V, reg c25:V, reg r100:V, reg c26:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r101:V, reg r102:V, reg w8:*, reg w9:V, reg r103:V, reg sum:cls, reg r104:V, reg r105:V, reg ny4:*, reg ny5:V, reg list:cls, reg r106:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r107:V, reg r108:V, reg offset9:*, reg offset10:V, reg c27:V, reg r109:V, reg c28:L, reg offset11:*, reg offset12:V, reg l6:*, reg c29:L, reg offset14:V, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r110:V, reg y15:*, reg y16:V, reg offset17:*, reg offset18:V, reg r111:V, reg l9:*, reg c30:L, reg r113:V, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r115:V, reg dx9:V, reg r116:V, reg r117:V, reg model_matrix:cls, reg mt2:*, reg mt3:V, reg p18:p(V +), reg mf21:*, reg mf22:V, reg p19:p(V +), reg contrasts1:*, reg contrasts2:V, reg p20:p(V +), reg r122:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r123:V, reg r124:V, reg w10:*, reg w11:V, reg c31:V, reg c32:L, reg lm_fit:cls, reg x3:*, reg x4:V, reg p21:p(V +), reg y17:*, reg y18:V, reg p22:p(V +), reg offset19:*, reg offset20:V, reg p23:p(V +), reg singular_ok1:*, reg singular_ok2:V, reg p24:p(V +), reg ddd1:dots?, reg r129:V, reg r130:V, reg lm_wfit:cls, reg x5:*, reg x6:V, reg p25:p(V +), reg y19:*, reg y20:V, reg p26:p(V +), reg w12:*, reg w13:V, reg p27:p(V +), reg offset21:*, reg offset22:V, reg p28:p(V +), reg singular_ok3:*, reg singular_ok4:V, reg p29:p(V +), reg ddd2:dots?, reg r136:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r137:V, reg r138:V, reg mlm6:*, reg mlm7:V, reg c33:L, reg r139:V, reg c34:cls, reg r140:V, reg l12:*, reg class__:cls, reg r141:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r142:V, reg r143:V, reg mf23:*, reg mf24:V, reg attr1:cls, reg r144:V, reg l13:*, reg c35:L, reg r146:V, reg l15:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r149:V, reg offset23:*, reg offset24:V, reg l16:*, reg c36:L, reg offset26:V, reg l18:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r150:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r151:V, reg r152:V, reg x7:*, reg x8:V, reg attr2:cls, reg r153:V, reg l19:*, reg c37:L, reg r155:V, reg l21:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r158:V, reg _getXlevels:cls, reg mt4:*, reg mt5:V, reg p30:p(V +), reg mf25:*, reg mf26:V, reg p31:p(V +), reg r161:V, reg l22:*, reg c38:L, reg r163:V, reg l24:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r166:V, reg cl:*, reg cl1:V, reg l25:*, reg c39:L, reg cl3:V, reg l27:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r167:V, reg mt6:*, reg mt7:V, reg l28:*, reg c40:L, reg mt9:V, reg l30:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r168:V, reg model1:*, reg model2:V, reg c41:L, reg mf27:*, reg mf28:V, reg l31:*, reg c42:L, reg mf30:V, reg l33:*, reg dr22:V, reg dc11:L, reg dx22:V, reg mf32:V, reg dx23:V, reg r169:V, reg ret_x:*, reg ret_x1:V, reg c43:L, reg x9:*, reg x10:V, reg l34:*, reg c44:L, reg x12:V, reg l36:*, reg dr24:V, reg dc12:L, reg dx24:V, reg x14:V, reg dx25:V, reg r170:V, reg ret_y:*, reg ret_y1:V, reg c45:L, reg y21:*, reg y22:V, reg l37:*, reg c46:L, reg y24:V, reg l39:*, reg dr26:V, reg dc13:L, reg dx26:V, reg y26:V, reg dx27:V, reg r171:V, reg qr1:*, reg qr2:V, reg r172:V, reg c47:L, reg l40:*, reg c48:L, reg r174:dots, reg l42:*, reg dr28:V, reg dc14:L, reg dx28:V, reg r176:dots, reg dx29:V, reg r177:V, reg z:*, reg z1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st weights = weights;
    st `na.action` = na_action;
    method_isMissing = missing.0(method);
    if method_isMissing then L0("qr") else L0(method);
  L0(method_orDefault):
    st method = method_orDefault;
    model_isMissing = missing.0(model);
    if model_isMissing then L1(TRUE) else L1(model);
  L1(model_orDefault):
    st model = model_orDefault;
    x_isMissing = missing.0(x);
    if x_isMissing then L2(FALSE) else L2(x);
  L2(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L3(FALSE) else L3(y);
  L3(y_orDefault):
    st y = y_orDefault;
    qr_isMissing = missing.0(qr);
    if qr_isMissing then L4(TRUE) else L4(qr);
  L4(qr_orDefault):
    st qr = qr_orDefault;
    singular_ok_isMissing = missing.0(singular_ok);
    if singular_ok_isMissing then L5(TRUE) else L5(singular_ok);
  L5(singular_ok_orDefault):
    st `singular.ok` = singular_ok_orDefault;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L6(NULL) else L6(contrasts);
  L6(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    st offset = offset;
    st `...` = ddd;
    x1 = ld x;
    check L61() else D0();
  D0():
    deopt 0 [x1];
  L61():
    x2 = force? x1;
    checkMissing(x2);
    st `ret.x` = x2;
    y1 = ld y;
    check L62() else D1();
  D1():
    deopt 3 [y1];
  L62():
    y2 = force? y1;
    checkMissing(y2);
    st `ret.y` = y2;
    match_call = ldf `match.call`;
    check L63() else D2();
  D2():
    deopt 7 [];
  L63():
    r = dyn match_call();
    check L64() else D3();
  D3():
    deopt 8 [r];
  L64():
    st cl = r;
    match_call1 = ldf `match.call`;
    check L65() else D4();
  D4():
    deopt 11 [];
  L65():
    r1 = dyn match_call1[`expand.dots`](FALSE);
    check L66() else D5();
  D5():
    deopt 14 [r1];
  L66():
    st mf = r1;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L67() else L68();
  L7(r3):
    st m = r3;
    mf2 = ld mf;
    check L77() else D10();
  L67():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L69() else L70();
  L68():
    r2 = dyn base(<lang c("formula", "data", "subset", "weights", "na.action", "offset")>, <lang names(mf)>, 0);
    goto L7(r2);
  D10():
    deopt 39 [mf2];
  L8(r5):
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L69():
    c = ldf c in base;
    r6 = dyn c("formula", "data", "subset", "weights", "na.action", "offset");
    check L71() else D6();
  L70():
    r4 = dyn base1("formula", "data", "subset", "weights", "na.action", "offset");
    goto L8(r4);
  L77():
    mf3 = force? mf2;
    checkMissing(mf3);
    c1 = `is.object`(mf3);
    if c1 then L78() else L79(mf3);
  D6():
    deopt 27 [r6];
  L9(r8):
    match = ldf match in base;
    r10 = dyn match(r5, r8, 0, NULL);
    check L76() else D9();
  L10(dx1):
    st mf = dx1;
    l = ld mf;
    c3 = `is.object`(l);
    if c3 then L86() else L87(TRUE, l);
  L71():
    goto L8(r6);
  L72():
    mf = ld mf;
    check L74() else D7();
  L73():
    r7 = dyn base2(<sym mf>);
    goto L9(r7);
  L78():
    dr = tryDispatchBuiltin.1("[", mf3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(dr);
  L79(mf5):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L81() else L82();
  D7():
    deopt 30 [mf];
  D9():
    deopt 37 [r10];
  L11(mf8, r12):
    __ = ldf `[` in base;
    r14 = dyn __(mf8, r12);
    goto L10(r14);
  L74():
    mf1 = force? mf;
    checkMissing(mf1);
    names = ldf names in base;
    r9 = dyn names(mf1);
    check L75() else D8();
  L76():
    goto L7(r10);
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L81():
    m = ld m;
    check L83() else D11();
  L82():
    r11 = dyn base3(1, <sym m>);
    goto L11(mf5, r11);
  L85(dx3):
    st mf = dx3;
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L89() else L90();
  L86():
    dr2 = tryDispatchBuiltin.0("$<-", l, TRUE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(TRUE, dr2);
  L87(r16, l2):
    r19 = `$<-`(l2, <sym drop.unused.levels>, TRUE);
    goto L85(r19);
  D8():
    deopt 33 [r9];
  D11():
    deopt 44 [mf5, m];
  L12(r21):
    l3 = ld mf;
    c4 = `is.object`(l3);
    if c4 then L91() else L92(r21, l3);
  L75():
    goto L9(r9);
  L83():
    m1 = force? m;
    checkMissing(m1);
    c2 = ldf c in base;
    r13 = dyn c2(1, m1);
    check L84() else D12();
  L88():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L85(dx2);
  L89():
    quote = ldf quote in base;
    r22 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L12(r22);
  L90():
    r20 = dyn base4(<lang `::`(stats, model.frame)>);
    goto L12(r20);
  D12():
    deopt 47 [mf5, r13];
  L13(dx5):
    st mf = dx5;
    eval = ldf eval;
    check L94() else D13();
  L84():
    goto L11(mf5, r13);
  L91():
    dr4 = tryDispatchBuiltin.0("[[<-", l3, r21);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L93() else L92(r21, dr4);
  L92(r24, l5):
    ____ = ldf `[[<-` in base;
    r27 = dyn ____(l5, r21, 1);
    goto L13(r27);
  D13():
    deopt 64 [];
  L93():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L94():
    p = prom<V +>{
      mf9 = ld mf;
      mf10 = force? mf9;
      checkMissing(mf10);
      return mf10;
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r29 = dyn parent_frame();
      return r29;
    };
    r31 = dyn eval(p, p1);
    check L95() else D14();
  D14():
    deopt 67 [r31];
  L95():
    st mf = r31;
    method1 = ld method;
    check L96() else D15();
  D15():
    deopt 69 [method1];
  L96():
    method2 = force? method1;
    checkMissing(method2);
    r32 = `==`(method2, "model.frame");
    c5 = `as.logical`(r32);
    if c5 then L97() else L14();
  L14():
    method3 = ld method;
    check L101() else D17();
  L97():
    mf11 = ld mf;
    check L98() else D16();
  D16():
    deopt 73 [mf11];
  D17():
    deopt 76 [method3];
  L98():
    mf12 = force? mf11;
    checkMissing(mf12);
    popenv;
    return mf12;
  L101():
    method4 = force? method3;
    checkMissing(method4);
    r35 = `!=`(method4, "qr");
    c6 = `as.logical`(r35);
    if c6 then L102() else L16();
  L15():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L106() else L107();
  L16():
    goto L15();
  L102():
    warning = ldf warning;
    check L103() else D18();
  D18():
    deopt 81 [];
  L17(r41):
    st mt = r41;
    model_response = ldf `model.response`;
    check L110() else D22();
  L103():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        method5 = ld method;
        method6 = force? method5;
        checkMissing(method6);
        return method6;
      };
      r37 = dyn gettextf("method = '%s' is not supported. Using 'qr'", p2);
      return r37;
    };
    r39 = dyn warning[, domain](p3, NA_LGL);
    check L104() else D19();
  L106():
    mf13 = ld mf;
    check L108() else D20();
  L107():
    r40 = dyn base5(<sym mf>, "terms");
    goto L17(r40);
  D19():
    deopt 85 [r39];
  D20():
    deopt 90 [mf13];
  D22():
    deopt 97 [];
  L104():
    goto L15();
  L108():
    mf14 = force? mf13;
    checkMissing(mf14);
    attr = ldf attr in base;
    r42 = dyn attr(mf14, "terms");
    check L109() else D21();
  L110():
    p4 = prom<V +>{
      mf15 = ld mf;
      mf16 = force? mf15;
      checkMissing(mf16);
      return mf16;
    };
    r44 = dyn model_response(p4, "numeric");
    check L111() else D23();
  D21():
    deopt 94 [r42];
  D23():
    deopt 100 [r44];
  L109():
    goto L17(r42);
  L111():
    st y = r44;
    as_vector = ldf `as.vector`;
    check L112() else D24();
  D24():
    deopt 103 [];
  L112():
    p6 = prom<V +>{
      model_weights = ldf `model.weights`;
      p5 = prom<V +>{
        mf17 = ld mf;
        mf18 = force? mf17;
        checkMissing(mf18);
        return mf18;
      };
      r46 = dyn model_weights(p5);
      return r46;
    };
    r48 = dyn as_vector(p6);
    check L113() else D25();
  D25():
    deopt 105 [r48];
  L113():
    st w = r48;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L114() else L115();
  L18(r50):
    r51 = `!`(r50);
    c8 = `as.logical`(r51);
    if c8 then L117() else L19(c8);
  L114():
    w = ld w;
    check L116() else D26();
  L115():
    r49 = dyn base6(<sym w>);
    goto L18(r49);
  D26():
    deopt 108 [w];
  L19(c10):
    c17 = `as.logical`(c10);
    if c17 then L123() else L21();
  L116():
    w1 = force? w;
    checkMissing(w1);
    c7 = `==`(w1, NULL);
    goto L18(c7);
  L117():
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L118() else L119();
  L20(c13, r53):
    r55 = `!`(r53);
    c14 = `as.logical`(r55);
    c15 = `&&`(c13, c14);
    goto L19(c15);
  L21():
    goto L22();
  L22():
    model_offset = ldf `model.offset`;
    check L127() else D31();
  L118():
    w2 = ld w;
    check L120() else D27();
  L119():
    r52 = dyn base7(<sym w>);
    goto L20(c8, r52);
  L123():
    stop = ldf stop;
    check L124() else D29();
  D27():
    deopt 114 [c8, w2];
  D29():
    deopt 121 [];
  D31():
    deopt 127 [];
  L120():
    w3 = force? w2;
    checkMissing(w3);
    is_numeric = ldf `is.numeric` in base;
    r54 = dyn is_numeric(w3);
    check L121() else D28();
  L124():
    r56 = dyn stop("'weights' must be a numeric vector");
    check L125() else D30();
  L127():
    p7 = prom<V +>{
      mf19 = ld mf;
      mf20 = force? mf19;
      checkMissing(mf20);
      return mf20;
    };
    r59 = dyn model_offset(p7);
    check L128() else D32();
  D28():
    deopt 117 [c8, r54];
  D30():
    deopt 123 [r56];
  D32():
    deopt 129 [r59];
  L121():
    goto L20(c8, r54);
  L125():
    goto L22();
  L128():
    st offset = r59;
    sym8 = ldf `is.matrix`;
    base8 = ldf `is.matrix` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L129() else L130();
  L23(r61):
    st mlm = r61;
    mlm = ld mlm;
    check L133() else D35();
  L129():
    y3 = ld y;
    check L131() else D33();
  L130():
    r60 = dyn base8(<sym y>);
    goto L23(r60);
  D33():
    deopt 133 [y3];
  D35():
    deopt 138 [mlm];
  L131():
    y4 = force? y3;
    checkMissing(y4);
    is_matrix = ldf `is.matrix` in base;
    r62 = dyn is_matrix(y4);
    check L132() else D34();
  L133():
    mlm1 = force? mlm;
    checkMissing(mlm1);
    c18 = `as.logical`(mlm1);
    if c18 then L134() else L24();
  D34():
    deopt 136 [r62];
  L24():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L138() else L139();
  L25(r65):
    st ny = r65;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L142() else L143();
  L132():
    goto L23(r62);
  L134():
    nrow = ldf nrow;
    check L135() else D36();
  D36():
    deopt 141 [];
  L26(r69):
    r70 = `!`(r69);
    c20 = `as.logical`(r70);
    if c20 then L145() else L27();
  L135():
    p8 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r64 = dyn nrow(p8);
    check L136() else D37();
  L138():
    y7 = ld y;
    check L140() else D38();
  L139():
    r66 = dyn base9(<sym y>);
    goto L25(r66);
  L142():
    offset1 = ld offset;
    check L144() else D40();
  L143():
    r68 = dyn base10(<sym offset>);
    goto L26(r68);
  D37():
    deopt 143 [r64];
  D38():
    deopt 146 [y7];
  D40():
    deopt 152 [offset1];
  L27():
    goto L32();
  L32():
    is_empty_model = ldf `is.empty.model`;
    check L159() else D49();
  L136():
    goto L25(r64);
  L140():
    y8 = force? y7;
    checkMissing(y8);
    length = ldf length in base;
    r67 = dyn length(y8);
    check L141() else D39();
  L144():
    offset2 = force? offset1;
    checkMissing(offset2);
    c19 = `==`(offset2, NULL);
    goto L26(c19);
  L145():
    mlm2 = ld mlm;
    check L146() else D41();
  D39():
    deopt 149 [r67];
  D41():
    deopt 156 [mlm2];
  D49():
    deopt 183 [];
  L141():
    goto L25(r67);
  L146():
    mlm3 = force? mlm2;
    checkMissing(mlm3);
    r71 = `!`(mlm3);
    c21 = `as.logical`(r71);
    if c21 then L147() else L28();
  L159():
    p15 = prom<V +>{
      mt = ld mt;
      mt1 = force? mt;
      checkMissing(mt1);
      return mt1;
    };
    r88 = dyn is_empty_model(p15);
    check L160() else D50();
  D50():
    deopt 185 [r88];
  L28():
    goto L29();
  L29():
    NROW = ldf NROW;
    check L151() else D44();
  L147():
    as_vector1 = ldf `as.vector`;
    check L148() else D42();
  L160():
    c23 = `as.logical`(r88);
    if c23 then L161() else L33();
  D42():
    deopt 160 [];
  D44():
    deopt 167 [];
  L33():
    model_matrix = ldf `model.matrix`;
    check L202() else D68();
  L44():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L213() else L214();
  L148():
    p9 = prom<V +>{
      offset3 = ld offset;
      offset4 = force? offset3;
      checkMissing(offset4);
      return offset4;
    };
    r73 = dyn as_vector1(p9);
    check L149() else D43();
  L151():
    p10 = prom<V +>{
      offset5 = ld offset;
      offset6 = force? offset5;
      checkMissing(offset6);
      return offset6;
    };
    r76 = dyn NROW(p10);
    check L152() else D45();
  L161():
    st x = NULL;
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L162() else L163();
  D43():
    deopt 162 [r73];
  D45():
    deopt 169 [r76];
  D68():
    deopt 255 [];
  L34(r90):
    st z = r90;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L185() else L186();
  L48(r138):
    l12 = ld z;
    class__ = ldf `class<-`;
    check L219() else D77();
  L149():
    st offset = r73;
    goto L29();
  L152():
    ny = ld ny;
    check L153() else D46();
  L162():
    mlm4 = ld mlm;
    check L164() else D51();
  L163():
    r89 = dyn base11[coefficients, residuals, `fitted.values`, weights, rank, `df.residual`](<lang if(mlm, matrix(NA_REAL, 0.0, ncol(y)), numeric())>, <sym y>, <lang `*`(0.0, y)>, <sym w>, 0, <lang if(`!`(is.null(w)), sum(`!=`(w, 0.0)), ny)>);
    goto L34(r89);
  L202():
    p18 = prom<V +>{
      mt2 = ld mt;
      mt3 = force? mt2;
      checkMissing(mt3);
      return mt3;
    };
    p19 = prom<V +>{
      mf21 = ld mf;
      mf22 = force? mf21;
      checkMissing(mf22);
      return mf22;
    };
    p20 = prom<V +>{
      contrasts1 = ld contrasts;
      contrasts2 = force? contrasts1;
      checkMissing(contrasts2);
      return contrasts2;
    };
    r122 = dyn model_matrix(p18, p19, p20);
    check L203() else D69();
  L213():
    mlm6 = ld mlm;
    check L215() else D75();
  L214():
    r137 = dyn base16(<lang if(mlm, "mlm")>, "lm");
    goto L48(r137);
  D46():
    deopt 169 [r76, ny];
  D51():
    deopt 191 [mlm4];
  D69():
    deopt 259 [r122];
  D75():
    deopt 289 [mlm6];
  D77():
    deopt 299 [r138, l12, r138];
  L41(r108):
    r109 = `!`(r108);
    c28 = `as.logical`(r109);
    if c28 then L188() else L42();
  L153():
    ny1 = force? ny;
    checkMissing(ny1);
    r77 = `!=`(r76, ny1);
    c22 = `as.logical`(r77);
    if c22 then L154() else L30();
  L164():
    mlm5 = force? mlm4;
    checkMissing(mlm5);
    c24 = `as.logical`(mlm5);
    if c24 then L165() else L35();
  L185():
    offset9 = ld offset;
    check L187() else D64();
  L186():
    r107 = dyn base14(<sym offset>);
    goto L41(r107);
  L203():
    st x = r122;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L204() else L205();
  L215():
    mlm7 = force? mlm6;
    checkMissing(mlm7);
    c33 = `as.logical`(mlm7);
    if c33 then L216() else L49();
  L219():
    r141 = dyn class__(l12, NULL, r138);
    check L220() else D78();
  D64():
    deopt 236 [offset9];
  D78():
    deopt 301 [r138, r141];
  L30():
    goto L31(NULL);
  L31(r85):
    goto L32();
  L35():
    numeric = ldf numeric;
    check L169() else D54();
  L36(r95):
    y11 = ld y;
    check L171() else D56();
  L42():
    goto L43(NULL);
  L43(r117):
    goto L44();
  L45(r124):
    c32 = `as.logical`(r124);
    if c32 then L207() else L46();
  L49():
    goto L50(NULL);
  L50(r139):
    c34 = ldf c in base;
    r140 = dyn c34(r139, "lm");
    check L218() else D76();
  L154():
    stop1 = ldf stop;
    check L155() else D47();
  L165():
    matrix = ldf matrix;
    check L166() else D52();
  L187():
    offset10 = force? offset9;
    checkMissing(offset10);
    c27 = `==`(offset10, NULL);
    goto L41(c27);
  L188():
    offset11 = ld offset;
    check L189() else D65();
  L204():
    w10 = ld w;
    check L206() else D70();
  L205():
    r123 = dyn base15(<sym w>);
    goto L45(r123);
  L216():
    goto L50("mlm");
  L220():
    st z = r141;
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L221() else L222();
  D47():
    deopt 173 [];
  D52():
    deopt 194 [];
  D54():
    deopt 200 [];
  D56():
    deopt 203 [y11];
  D65():
    deopt 240 [offset11];
  D70():
    deopt 262 [w10];
  D76():
    deopt 297 [r140];
  L46():
    lm_wfit = ldf `lm.wfit`;
    check L211() else D73();
  L47(r130):
    st z = r130;
    goto L44();
  L51(r143):
    l13 = ld z;
    c35 = `is.object`(l13);
    if c35 then L226() else L227(r143, l13);
  L155():
    p14 = prom<V +>{
      gettextf1 = ldf gettextf;
      p12 = prom<V +>{
        NROW1 = ldf NROW;
        p11 = prom<V +>{
          offset7 = ld offset;
          offset8 = force? offset7;
          checkMissing(offset8);
          return offset8;
        };
        r79 = dyn NROW1(p11);
        return r79;
      };
      p13 = prom<V +>{
        ny2 = ld ny;
        ny3 = force? ny2;
        checkMissing(ny3);
        return ny3;
      };
      r82 = dyn gettextf1("number of offsets is %d, should equal %d (number of observations)", p12, p13);
      return r82;
    };
    r84 = dyn stop1[, domain](p14, NA_LGL);
    check L156() else D48();
  L166():
    p17 = prom<V +>{
      ncol = ldf ncol;
      p16 = prom<V +>{
        y9 = ld y;
        y10 = force? y9;
        checkMissing(y10);
        return y10;
      };
      r92 = dyn ncol(p16);
      return r92;
    };
    r94 = dyn matrix(NA_REAL, 0.0, p17);
    check L167() else D53();
  L169():
    r96 = dyn numeric();
    check L170() else D55();
  L171():
    y12 = force? y11;
    checkMissing(y12);
    y13 = ld y;
    check L172() else D57();
  L189():
    offset12 = force? offset11;
    checkMissing(offset12);
    l6 = ld z;
    c29 = `is.object`(l6);
    if c29 then L191() else L192(offset12, l6);
  L206():
    w11 = force? w10;
    checkMissing(w11);
    c31 = `==`(w11, NULL);
    goto L45(c31);
  L207():
    lm_fit = ldf `lm.fit`;
    check L208() else D71();
  L218():
    goto L48(r140);
  L221():
    mf23 = ld mf;
    check L223() else D79();
  L222():
    r142 = dyn base17(<sym mf>, "na.action");
    goto L51(r142);
  D48():
    deopt 177 [r84];
  D53():
    deopt 198 [r94];
  D55():
    deopt 201 [r96];
  D57():
    deopt 207 [0.0, y13];
  D71():
    deopt 266 [];
  D73():
    deopt 276 [];
  D79():
    deopt 305 [mf23];
  L156():
    goto L31(r84);
  L167():
    goto L36(r94);
  L170():
    goto L36(r96);
  L172():
    y14 = force? y13;
    checkMissing(y14);
    r97 = `*`(0.0, y14);
    w4 = ld w;
    check L173() else D58();
  L190(dx7):
    st z = dx7;
    y15 = ld y;
    check L194() else D66();
  L191():
    dr6 = tryDispatchBuiltin.0("$<-", l6, offset12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L193() else L192(offset12, dr6);
  L192(offset14, l8):
    r110 = `$<-`(l8, <sym fitted.values>, offset12);
    goto L190(r110);
  L208():
    p21 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p22 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    p23 = prom<V +>{
      offset19 = ld offset;
      offset20 = force? offset19;
      checkMissing(offset20);
      return offset20;
    };
    p24 = prom<V +>{
      singular_ok1 = ld `singular.ok`;
      singular_ok2 = force? singular_ok1;
      checkMissing(singular_ok2);
      return singular_ok2;
    };
    ddd1 = ld `...`;
    r129 = dyn lm_fit[, , offset, `singular.ok`, `...`](p21, p22, p23, p24, ddd1);
    check L209() else D72();
  L211():
    p25 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p26 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      return y20;
    };
    p27 = prom<V +>{
      w12 = ld w;
      w13 = force? w12;
      checkMissing(w13);
      return w13;
    };
    p28 = prom<V +>{
      offset21 = ld offset;
      offset22 = force? offset21;
      checkMissing(offset22);
      return offset22;
    };
    p29 = prom<V +>{
      singular_ok3 = ld `singular.ok`;
      singular_ok4 = force? singular_ok3;
      checkMissing(singular_ok4);
      return singular_ok4;
    };
    ddd2 = ld `...`;
    r136 = dyn lm_wfit[, , , offset, `singular.ok`, `...`](p25, p26, p27, p28, p29, ddd2);
    check L212() else D74();
  L223():
    mf24 = force? mf23;
    checkMissing(mf24);
    attr1 = ldf attr in base;
    r144 = dyn attr1(mf24, "na.action");
    check L224() else D80();
  L225(dx11):
    st z = dx11;
    offset23 = ld offset;
    check L229() else D81();
  L226():
    dr10 = tryDispatchBuiltin.0("$<-", l13, r143);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L228() else L227(r143, dr10);
  L227(r146, l15):
    r149 = `$<-`(l15, <sym na.action>, r143);
    goto L225(r149);
  D58():
    deopt 211 [w4];
  D66():
    deopt 245 [y15];
  D72():
    deopt 274 [r129];
  D74():
    deopt 285 [r136];
  D80():
    deopt 309 [r144];
  D81():
    deopt 313 [offset23];
  L173():
    w5 = force? w4;
    checkMissing(w5);
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L174() else L175();
  L193():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L190(dx6);
  L194():
    y16 = force? y15;
    checkMissing(y16);
    offset17 = ld offset;
    check L195() else D67();
  L209():
    goto L47(r129);
  L212():
    goto L47(r136);
  L224():
    goto L51(r144);
  L228():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L225(dx10);
  L229():
    offset24 = force? offset23;
    checkMissing(offset24);
    l16 = ld z;
    c36 = `is.object`(l16);
    if c36 then L231() else L232(offset24, l16);
  D67():
    deopt 246 [y16, offset17];
  L37(r99):
    r100 = `!`(r99);
    c26 = `as.logical`(r100);
    if c26 then L177() else L38();
  L174():
    w6 = ld w;
    check L176() else D59();
  L175():
    r98 = dyn base12(<sym w>);
    goto L37(r98);
  L195():
    offset18 = force? offset17;
    checkMissing(offset18);
    r111 = `-`(y16, offset18);
    l9 = ld z;
    c30 = `is.object`(l9);
    if c30 then L197() else L198(r111, l9);
  L230(dx13):
    st z = dx13;
    sym18 = ldf attr;
    base18 = ldf attr in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L234() else L235();
  L231():
    dr12 = tryDispatchBuiltin.0("$<-", l16, offset24);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L233() else L232(offset24, dr12);
  L232(offset26, l18):
    r150 = `$<-`(l18, <sym offset>, offset24);
    goto L230(r150);
  D59():
    deopt 217 [w6];
  L38():
    ny4 = ld ny;
    check L183() else D62();
  L40(r105):
    list = ldf list in base;
    r106 = dyn list(r95, y12, r97, w5, 0, r105);
    check L184() else D63();
  L52(r152):
    l19 = ld z;
    c37 = `is.object`(l19);
    if c37 then L239() else L240(r152, l19);
  L176():
    w7 = force? w6;
    checkMissing(w7);
    c25 = `==`(w7, NULL);
    goto L37(c25);
  L177():
    sym13 = ldf sum;
    base13 = ldf sum in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L178() else L179();
  L196(r115, dx9):
    st z = dx9;
    goto L43(r115);
  L197():
    dr8 = tryDispatchBuiltin.0("$<-", l9, r111);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L199() else L198(r111, dr8);
  L198(r113, l11):
    r116 = `$<-`(l11, <sym residuals>, r111);
    goto L196(r113, r116);
  L233():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L230(dx12);
  L234():
    x7 = ld x;
    check L236() else D82();
  L235():
    r151 = dyn base18(<sym x>, "contrasts");
    goto L52(r151);
  D62():
    deopt 229 [ny4];
  D63():
    deopt 233 [r106];
  D82():
    deopt 320 [x7];
  L39(r102):
    goto L40(r102);
  L178():
    w8 = ld w;
    check L180() else D60();
  L179():
    r101 = dyn base13(<lang `!=`(w, 0.0)>);
    goto L39(r101);
  L183():
    ny5 = force? ny4;
    checkMissing(ny5);
    goto L40(ny5);
  L184():
    goto L34(r106);
  L199():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L196(r111, dx8);
  L236():
    x8 = force? x7;
    checkMissing(x8);
    attr2 = ldf attr in base;
    r153 = dyn attr2(x8, "contrasts");
    check L237() else D83();
  L238(dx15):
    st z = dx15;
    _getXlevels = ldf `.getXlevels`;
    check L242() else D84();
  L239():
    dr14 = tryDispatchBuiltin.0("$<-", l19, r152);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L241() else L240(r152, dr14);
  L240(r155, l21):
    r158 = `$<-`(l21, <sym contrasts>, r152);
    goto L238(r158);
  D60():
    deopt 223 [w8];
  D83():
    deopt 324 [r153];
  D84():
    deopt 329 [];
  L180():
    w9 = force? w8;
    checkMissing(w9);
    r103 = `!=`(w9, 0.0);
    sum = ldf sum in base;
    r104 = dyn sum(r103);
    check L181() else D61();
  L237():
    goto L52(r153);
  L241():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L238(dx14);
  L242():
    p30 = prom<V +>{
      mt4 = ld mt;
      mt5 = force? mt4;
      checkMissing(mt5);
      return mt5;
    };
    p31 = prom<V +>{
      mf25 = ld mf;
      mf26 = force? mf25;
      checkMissing(mf26);
      return mf26;
    };
    r161 = dyn _getXlevels(p30, p31);
    check L243() else D85();
  D61():
    deopt 228 [r104];
  D85():
    deopt 332 [r161];
  L181():
    goto L39(r104);
  L243():
    l22 = ld z;
    c38 = `is.object`(l22);
    if c38 then L245() else L246(r161, l22);
  L244(dx17):
    st z = dx17;
    cl = ld cl;
    check L248() else D86();
  L245():
    dr16 = tryDispatchBuiltin.0("$<-", l22, r161);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L247() else L246(r161, dr16);
  L246(r163, l24):
    r166 = `$<-`(l24, <sym xlevels>, r161);
    goto L244(r166);
  D86():
    deopt 336 [cl];
  L247():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L244(dx16);
  L248():
    cl1 = force? cl;
    checkMissing(cl1);
    l25 = ld z;
    c39 = `is.object`(l25);
    if c39 then L250() else L251(cl1, l25);
  L249(dx19):
    st z = dx19;
    mt6 = ld mt;
    check L253() else D87();
  L250():
    dr18 = tryDispatchBuiltin.0("$<-", l25, cl1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L252() else L251(cl1, dr18);
  L251(cl3, l27):
    r167 = `$<-`(l27, <sym call>, cl1);
    goto L249(r167);
  D87():
    deopt 341 [mt6];
  L252():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L249(dx18);
  L253():
    mt7 = force? mt6;
    checkMissing(mt7);
    l28 = ld z;
    c40 = `is.object`(l28);
    if c40 then L255() else L256(mt7, l28);
  L254(dx21):
    st z = dx21;
    model1 = ld model;
    check L258() else D88();
  L255():
    dr20 = tryDispatchBuiltin.0("$<-", l28, mt7);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L257() else L256(mt7, dr20);
  L256(mt9, l30):
    r168 = `$<-`(l30, <sym terms>, mt7);
    goto L254(r168);
  D88():
    deopt 346 [model1];
  L257():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L254(dx20);
  L258():
    model2 = force? model1;
    checkMissing(model2);
    c41 = `as.logical`(model2);
    if c41 then L259() else L53();
  L53():
    goto L54();
  L54():
    ret_x = ld `ret.x`;
    check L266() else D90();
  L259():
    mf27 = ld mf;
    check L260() else D89();
  D89():
    deopt 348 [mf27];
  D90():
    deopt 355 [ret_x];
  L260():
    mf28 = force? mf27;
    checkMissing(mf28);
    l31 = ld z;
    c42 = `is.object`(l31);
    if c42 then L262() else L263(mf28, l31);
  L266():
    ret_x1 = force? ret_x;
    checkMissing(ret_x1);
    c43 = `as.logical`(ret_x1);
    if c43 then L267() else L55();
  L55():
    goto L56();
  L56():
    ret_y = ld `ret.y`;
    check L274() else D92();
  L261(mf32, dx23):
    st z = dx23;
    goto L54();
  L262():
    dr22 = tryDispatchBuiltin.0("$<-", l31, mf28);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L264() else L263(mf28, dr22);
  L263(mf30, l33):
    r169 = `$<-`(l33, <sym model>, mf28);
    goto L261(mf30, r169);
  L267():
    x9 = ld x;
    check L268() else D91();
  D91():
    deopt 357 [x9];
  D92():
    deopt 364 [ret_y];
  L264():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L261(mf28, dx22);
  L268():
    x10 = force? x9;
    checkMissing(x10);
    l34 = ld z;
    c44 = `is.object`(l34);
    if c44 then L270() else L271(x10, l34);
  L274():
    ret_y1 = force? ret_y;
    checkMissing(ret_y1);
    c45 = `as.logical`(ret_y1);
    if c45 then L275() else L57();
  L57():
    goto L58();
  L58():
    qr1 = ld qr;
    check L282() else D94();
  L269(x14, dx25):
    st z = dx25;
    goto L56();
  L270():
    dr24 = tryDispatchBuiltin.0("$<-", l34, x10);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L272() else L271(x10, dr24);
  L271(x12, l36):
    r170 = `$<-`(l36, <sym x>, x10);
    goto L269(x12, r170);
  L275():
    y21 = ld y;
    check L276() else D93();
  D93():
    deopt 366 [y21];
  D94():
    deopt 373 [qr1];
  L272():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L269(x10, dx24);
  L276():
    y22 = force? y21;
    checkMissing(y22);
    l37 = ld z;
    c46 = `is.object`(l37);
    if c46 then L278() else L279(y22, l37);
  L282():
    qr2 = force? qr1;
    checkMissing(qr2);
    r172 = `!`(qr2);
    c47 = `as.logical`(r172);
    if c47 then L283() else L59();
  L59():
    goto L60();
  L60():
    z = ld z;
    check L289() else D95();
  L277(y26, dx27):
    st z = dx27;
    goto L58();
  L278():
    dr26 = tryDispatchBuiltin.0("$<-", l37, y22);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L280() else L279(y22, dr26);
  L279(y24, l39):
    r171 = `$<-`(l39, <sym y>, y22);
    goto L277(y24, r171);
  L283():
    l40 = ld z;
    c48 = `is.object`(l40);
    if c48 then L285() else L286(NULL, l40);
  D95():
    deopt 383 [z];
  L280():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L277(y22, dx26);
  L284(r176, dx29):
    st z = dx29;
    goto L60();
  L285():
    dr28 = tryDispatchBuiltin.0("$<-", l40, NULL);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L287() else L286(NULL, dr28);
  L286(r174, l42):
    r177 = `$<-`(l42, <sym qr>, NULL);
    goto L284(r174, r177);
  L289():
    z1 = force? z;
    checkMissing(z1);
    popenv;
    return z1;
  L287():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L284(NULL, dx28);
  }
}