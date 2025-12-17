fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2349166821;
    st `select.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2349166821(choices, preselect, multiple, title, graphics) {
  (reg choices:*, reg preselect:*, reg multiple:*, reg title:*, reg graphics:*) -+> V { var choices:*, var preselect:*, reg preselect_isMissing:L, reg preselect_orDefault:*, var multiple:*, reg multiple_isMissing:L, reg multiple_orDefault:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, var graphics:*, reg graphics_isMissing:L, reg graphics_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg interactive:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg title1:*, reg title2:V, reg c1:V, reg r10:V, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c7:L, reg r12:V, reg title3:*, reg title4:V, reg c8:L, reg r13:V, reg c9:L, reg c10:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c18:L, reg c19:L, reg r15:V, reg title5:*, reg title6:V, reg length:cls, reg r16:V, reg r17:V, reg c20:L, reg c21:V, reg c24:L, reg c25:V, reg c27:L, reg stop1:cls, reg r18:V, reg isTRUE:cls, reg graphics1:*, reg graphics2:V, reg p1:p(V +), reg r21:V, reg c28:L, reg _Platform:*, reg _Platform1:V, reg c29:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg r23:V, reg c30:L, reg c31:V, reg _Platform4:*, reg _Platform5:V, reg c33:L, reg c35:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c37:L, reg dx3:V, reg r24:V, reg r25:V, reg c38:L, reg c39:V, reg c41:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg C_selectlist:*, reg C_selectlist1:V, reg choices1:*, reg choices2:V, reg preselect1:*, reg preselect2:V, reg multiple1:*, reg multiple2:V, reg title7:*, reg title8:V, reg _External2:cls, reg r28:V, reg graphics3:*, reg graphics4:V, reg c42:L, reg c44:V, reg capabilities:cls, reg r31:V, reg c45:L, reg c46:V, reg c48:L, reg c50:V, reg capabilities1:cls, reg r32:V, reg c51:L, reg c52:V, reg c54:L, reg c56:V, reg suppressWarnings:cls, reg __:cls, reg r33:V, reg p2:p(V +), reg r35:V, reg c57:L, reg c58:V, reg c60:L, reg __1:cls, reg r36:V, reg r37:cls, reg choices3:*, reg choices4:V, reg p3:p(V +), reg preselect3:*, reg preselect4:V, reg p4:p(V +), reg multiple3:*, reg multiple4:V, reg p5:p(V +), reg title9:*, reg title10:V, reg p6:p(V +), reg r42:V, reg multiple5:*, reg multiple6:V, reg r45:V, reg c61:L, reg menu:cls, reg choices5:*, reg choices6:V, reg p7:p(V +), reg title11:*, reg title12:V, reg p8:p(V +), reg r48:V, reg res:*, reg res1:V, reg r49:V, reg c62:L, reg c63:V, reg res2:*, reg res3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg c67:L, reg res6:V, reg r51:V, reg choices7:*, reg choices8:V, reg length1:cls, reg r52:V, reg r53:V, reg c68:L, reg c69:V, reg c71:L, reg choices9:*, reg choices10:V, reg c72:L, reg choices12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg res7:*, reg res8:V, reg __2:cls, reg r54:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg choices13:*, reg choices14:V, reg length2:cls, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg title13:*, reg title14:V, reg length3:cls, reg r60:V, reg c73:L, reg c75:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg c78:L, reg r62:V, reg title15:*, reg title16:V, reg c79:L, reg c81:L, reg title18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c83:L, reg dx7:V, reg __3:cls, reg r63:V, reg nzchar:cls, reg r64:V, reg c84:L, reg c85:V, reg c87:L, reg cat:cls, reg title19:*, reg title20:V, reg p9:p(V +), reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg preselect5:*, reg preselect6:V, reg c88:V, reg c89:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg nc:*, reg nc1:V, reg rep_int:cls, reg r72:V, reg r73:V, reg _in_:cls, reg choices15:*, reg choices16:V, reg p10:p(V +), reg preselect7:*, reg preselect8:V, reg p11:p(V +), reg r76:V, reg paste0:cls, reg format:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r77:V, reg r78:V, reg nc2:*, reg nc3:V, reg r79:I, reg p12:p(V +), reg r81:V, reg p13:p(V +), reg ifelse:cls, reg def:*, reg def1:V, reg p14:p(V +), reg r84:V, reg p15:p(V +), reg choices17:*, reg choices18:V, reg p16:p(V +), reg r87:V, reg nc4:*, reg nc5:V, reg r88:V, reg c90:L, reg format1:cls, reg op:*, reg op1:V, reg p17:p(V +), reg r90:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r91:V, reg r92:V, reg fop:*, reg fop1:V, reg c91:L, reg fop3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r93:V, reg nchar:cls, reg r94:V, reg r95:V, reg getOption1:cls, reg r96:V, reg nw:*, reg nw1:V, reg ___:cls, reg r97:V, reg ncol:*, reg ncol1:V, reg r98:V, reg c92:L, reg paste1:cls, reg fop4:*, reg fop5:V, reg p18:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r100:V, reg r101:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r102:V, reg r103:V, reg ncol2:*, reg ncol3:V, reg r104:V, reg rep_int1:cls, reg r105:V, reg c93:cls, reg r106:V, reg p19:p(V +), reg r108:V, reg cat1:cls, reg op2:*, reg op3:V, reg p20:p(V +), reg r111:V, reg cat2:cls, reg op4:*, reg op5:V, reg p21:p(V +), reg r114:V, reg cat3:cls, reg gettext:cls, reg r115:V, reg p22:p(V +), reg r117:V, reg tryCatch:cls, reg scan:cls, reg r118:V, reg p23:p(V +), reg identity:*, reg identity1:V, reg p24:p(V +), reg r121:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r122:V, reg r123:V, reg res9:*, reg res10:V, reg inherits:cls, reg r124:V, reg r125:V, reg c94:L, reg cat4:cls, reg gettext1:cls, reg r127:V, reg p25:p(V +), reg r129:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r130:V, reg r131:V, reg res11:*, reg res12:V, reg r132:V, reg any:cls, reg r133:V, reg c95:L, reg character:cls, reg r134:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r137:V, reg r138:V, reg preselect9:*, reg preselect10:V, reg c96:V, reg r139:V, reg c97:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r140:V, reg r141:V, reg which:cls, reg def2:*, reg def3:V, reg p26:p(V +), reg r143:V, reg res13:*, reg res14:V, reg c98:cls, reg r144:V, reg unique:cls, reg res15:*, reg res16:V, reg p27:p(V +), reg r147:V, reg sort:cls, reg res17:*, reg res18:V, reg c99:L, reg res20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg res21:*, reg res22:V, reg r148:V, reg res23:*, reg res24:V, reg nc6:*, reg nc7:V, reg r149:V, reg r150:V, reg __5:cls, reg r151:V, reg p28:p(V +), reg r153:V, reg choices19:*, reg choices20:V, reg c100:L, reg choices22:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg res25:*, reg res26:V, reg __6:cls, reg r154:V |
    mkenv;
    st choices = choices;
    preselect_isMissing = missing.0(preselect);
    if preselect_isMissing then L0(NULL) else L0(preselect);
  L0(preselect_orDefault):
    st preselect = preselect_orDefault;
    multiple_isMissing = missing.0(multiple);
    if multiple_isMissing then L1(FALSE) else L1(multiple);
  L1(multiple_orDefault):
    st multiple = multiple_orDefault;
    title_isMissing = missing.0(title);
    if title_isMissing then L2(NULL) else L2(title);
  L2(title_orDefault):
    st title = title_orDefault;
    graphics_isMissing = missing.0(graphics);
    if graphics_isMissing then L3() else L4(graphics);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("menu.graphics");
      return r;
    };
    goto L4(p);
  L4(graphics_orDefault):
    st graphics = graphics_orDefault;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L60() else L61();
  L5(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L63() else L6();
  L60():
    interactive = ldf interactive in base;
    r4 = dyn interactive();
    check L62() else D0();
  L61():
    r2 = dyn base();
    goto L5(r2);
  D0():
    deopt 3 [r4];
  L6():
    goto L7();
  L7():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L67() else L68();
  L62():
    goto L5(r4);
  L63():
    stop = ldf stop;
    check L64() else D1();
  D1():
    deopt 6 [];
  L8(r9):
    r10 = `!`(r9);
    c2 = `as.logical`(r10);
    if c2 then L70() else L9(c2);
  L64():
    r6 = dyn stop("select.list() cannot be used non-interactively");
    check L65() else D2();
  L67():
    title1 = ld title;
    check L69() else D3();
  L68():
    r8 = dyn base1(<sym title>);
    goto L8(r8);
  D2():
    deopt 8 [r6];
  D3():
    deopt 12 [title1];
  L9(c4):
    c27 = `as.logical`(c4);
    if c27 then L81() else L13();
  L65():
    goto L7();
  L69():
    title2 = force? title1;
    checkMissing(title2);
    c1 = `==`(title2, NULL);
    goto L8(c1);
  L70():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L71() else L72();
  L10(c7, r12):
    r13 = `!`(r12);
    c9 = `as.logical`(r13);
    if c9 then L11(c7, c9) else L74();
  L13():
    goto L14();
  L14():
    isTRUE = ldf isTRUE;
    check L85() else D9();
  L71():
    title3 = ld title;
    check L73() else D4();
  L72():
    r11 = dyn base2(<sym title>);
    goto L10(c2, r11);
  L81():
    stop1 = ldf stop;
    check L82() else D7();
  D4():
    deopt 17 [c2, title3];
  D7():
    deopt 32 [];
  D9():
    deopt 38 [];
  L11(c10, c11):
    c24 = `as.logical`(c11);
    c25 = `&&`(c10, c24);
    goto L9(c25);
  L73():
    title4 = force? title3;
    checkMissing(title4);
    c8 = `is.character`(title4);
    goto L10(c2, c8);
  L74():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L82():
    r18 = dyn stop1("'title' must be NULL or a length-1 character vector");
    check L83() else D8();
  L85():
    p1 = prom<V +>{
      graphics1 = ld graphics;
      graphics2 = force? graphics1;
      checkMissing(graphics2);
      return graphics2;
    };
    r21 = dyn isTRUE(p1);
    check L86() else D10();
  D8():
    deopt 34 [r18];
  D10():
    deopt 40 [r21];
  L12(c18, c19, r15):
    r17 = `!=`(r15, 1.0);
    c20 = `as.logical`(r17);
    c21 = `||`(c19, c20);
    goto L11(c18, c21);
  L75():
    title5 = ld title;
    check L77() else D5();
  L76():
    r14 = dyn base3(<sym title>);
    goto L12(c7, c9, r14);
  L83():
    goto L14();
  L86():
    c28 = `as.logical`(r21);
    if c28 then L87() else L15();
  D5():
    deopt 23 [c7, c9, title5];
  L15():
    goto L24();
  L24():
    multiple5 = ld multiple;
    check L131() else D29();
  L77():
    title6 = force? title5;
    checkMissing(title6);
    length = ldf length in base;
    r16 = dyn length(title6);
    check L78() else D6();
  L87():
    _Platform = ld `.Platform`;
    check L88() else D11();
  D6():
    deopt 26 [c7, c9, r16];
  D11():
    deopt 41 [_Platform];
  D29():
    deopt 100 [multiple5];
  L78():
    goto L12(c7, c9, r16);
  L88():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c29 = `is.object`(_Platform1);
    if c29 then L90() else L91(_Platform1);
  L131():
    multiple6 = force? multiple5;
    checkMissing(multiple6);
    r45 = `!`(multiple6);
    c61 = `as.logical`(r45);
    if c61 then L132() else L25();
  L25():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L151() else L152();
  L89(dx1):
    r23 = `==`(dx1, "windows");
    c30 = `as.logical`(r23);
    if c30 then L16(c30) else L93();
  L90():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L92() else L91(dr);
  L91(_Platform3):
    r22 = `$`(_Platform3, <sym OS.type>);
    goto L89(r22);
  L132():
    menu = ldf menu;
    check L133() else D30();
  D30():
    deopt 104 [];
  L16(c31):
    c41 = `as.logical`(c31);
    if c41 then L100() else L17();
  L30(r56):
    st nc = r56;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L155() else L156();
  L92():
    dx = getTryDispatchBuiltinValue(dr);
    goto L89(dx);
  L93():
    _Platform4 = ld `.Platform`;
    check L94() else D12();
  L133():
    p7 = prom<V +>{
      choices5 = ld choices;
      choices6 = force? choices5;
      checkMissing(choices6);
      return choices6;
    };
    p8 = prom<V +>{
      title11 = ld title;
      title12 = force? title11;
      checkMissing(title12);
      return title12;
    };
    r48 = dyn menu(p7, FALSE, p8);
    check L134() else D31();
  L151():
    choices13 = ld choices;
    check L153() else D38();
  L152():
    r55 = dyn base6(<sym choices>);
    goto L30(r55);
  D12():
    deopt 46 [c30, _Platform4];
  D31():
    deopt 108 [r48];
  D38():
    deopt 132 [choices13];
  L17():
    graphics3 = ld graphics;
    check L111() else D19();
  L31(r59):
    c73 = `as.logical`(r59);
    if c73 then L159() else L32(c73);
  L94():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c33 = `is.object`(_Platform5);
    if c33 then L96() else L97(c30, _Platform5);
  L100():
    sym4 = ldf `.External2`;
    base4 = ldf `.External2` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L101() else L102();
  L134():
    st res = r48;
    res = ld res;
    check L135() else D32();
  L153():
    choices14 = force? choices13;
    checkMissing(choices14);
    length2 = ldf length in base;
    r57 = dyn length2(choices14);
    check L154() else D39();
  L155():
    title13 = ld title;
    check L157() else D40();
  L156():
    r58 = dyn base7(<sym title>);
    goto L31(r58);
  D19():
    deopt 67 [graphics3];
  D32():
    deopt 110 [res];
  D39():
    deopt 135 [r57];
  D40():
    deopt 139 [title13];
  L18(r27):
    popenv;
    return r27;
  L32(c75):
    c87 = `as.logical`(c75);
    if c87 then L168() else L35();
  L95(c37, dx3):
    r25 = `==`(dx3, "AQUA");
    c38 = `as.logical`(r25);
    c39 = `||`(c37, c38);
    goto L16(c39);
  L96():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(c30, dr2);
  L97(c35, _Platform7):
    r24 = `$`(_Platform7, <sym GUI>);
    goto L95(c35, r24);
  L101():
    C_selectlist = ld C_selectlist;
    check L103() else D13();
  L102():
    r26 = dyn base4(<sym C_selectlist>, <sym choices>, <sym preselect>, <sym multiple>, <sym title>);
    goto L18(r26);
  L111():
    graphics4 = force? graphics3;
    checkMissing(graphics4);
    c42 = `as.logical`(graphics4);
    if c42 then L112() else L20(c42);
  L135():
    res1 = force? res;
    checkMissing(res1);
    r49 = `<`(res1, 1);
    c62 = `as.logical`(r49);
    if c62 then L26(c62) else L136();
  L154():
    goto L30(r57);
  L157():
    title14 = force? title13;
    checkMissing(title14);
    length3 = ldf length in base;
    r60 = dyn length3(title14);
    check L158() else D41();
  L159():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L160() else L161();
  D13():
    deopt 54 [C_selectlist];
  D41():
    deopt 142 [r60];
  L20(c44):
    c48 = `as.logical`(c44);
    if c48 then L116() else L21(c48);
  L26(c63):
    c71 = `as.logical`(c63);
    if c71 then L143() else L28();
  L33(c78, r62):
    c84 = `as.logical`(r62);
    c85 = `&&`(c78, c84);
    goto L32(c85);
  L35():
    goto L36();
  L36():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L172() else L173();
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L95(c30, dx2);
  L103():
    C_selectlist1 = force? C_selectlist;
    checkMissing(C_selectlist1);
    choices1 = ld choices;
    check L104() else D14();
  L112():
    capabilities = ldf capabilities;
    check L113() else D20();
  L136():
    res2 = ld res;
    check L137() else D33();
  L158():
    goto L31(r60);
  L160():
    title15 = ld title;
    check L162() else D42();
  L161():
    r61 = dyn base8(<lang `[`(title, 1)>);
    goto L33(c73, r61);
  L168():
    cat = ldf cat;
    check L169() else D44();
  D14():
    deopt 56 [choices1];
  D20():
    deopt 70 [c42];
  D33():
    deopt 114 [c62, res2];
  D42():
    deopt 145 [c73, title15];
  D44():
    deopt 154 [];
  L21(c50):
    c54 = `as.logical`(c50);
    if c54 then L120() else L22(c54);
  L28():
    choices9 = ld choices;
    check L145() else D36();
  L37(r69):
    c89 = `as.logical`(r69);
    if c89 then L175() else L38();
  L104():
    choices2 = force? choices1;
    checkMissing(choices2);
    preselect1 = ld preselect;
    check L105() else D15();
  L113():
    r31 = dyn capabilities("tcltk");
    check L114() else D21();
  L116():
    capabilities1 = ldf capabilities;
    check L117() else D22();
  L137():
    res3 = force? res2;
    checkMissing(res3);
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L138() else L139();
  L143():
    popenv;
    return "";
  L162():
    title16 = force? title15;
    checkMissing(title16);
    c79 = `is.object`(title16);
    if c79 then L163() else L164(c73, title16);
  L169():
    p9 = prom<V +>{
      title19 = ld title;
      title20 = force? title19;
      checkMissing(title20);
      return title20;
    };
    r66 = dyn cat[, , sep](p9, "\n", "");
    check L170() else D45();
  L172():
    preselect5 = ld preselect;
    check L174() else D46();
  L173():
    r68 = dyn base9(<sym preselect>);
    goto L37(r68);
  D15():
    deopt 58 [preselect1];
  D21():
    deopt 72 [c42, r31];
  D22():
    deopt 75 [c48];
  D36():
    deopt 125 [choices9];
  D45():
    deopt 159 [r66];
  D46():
    deopt 163 [preselect5];
  L22(c56):
    c60 = `as.logical`(c56);
    if c60 then L124() else L23();
  L27(c67, res6, r51):
    r53 = `>`(res6, r51);
    c68 = `as.logical`(r53);
    c69 = `||`(c67, c68);
    goto L26(c69);
  L34(c83, dx7):
    nzchar = ldf nzchar in base;
    r64 = dyn nzchar(dx7);
    check L166() else D43();
  L38():
    _in_ = ldf `%in%`;
    check L181() else D49();
  L40(r73):
    st def = r73;
    paste0 = ldf paste0;
    check L183() else D51();
  L105():
    preselect2 = force? preselect1;
    checkMissing(preselect2);
    multiple1 = ld multiple;
    check L106() else D16();
  L114():
    c45 = `as.logical`(r31);
    c46 = `&&`(c42, c45);
    goto L20(c46);
  L117():
    r32 = dyn capabilities1("X11");
    check L118() else D23();
  L120():
    suppressWarnings = ldf suppressWarnings;
    check L121() else D24();
  L138():
    choices7 = ld choices;
    check L140() else D34();
  L139():
    r50 = dyn base5(<sym choices>);
    goto L27(c62, res3, r50);
  L145():
    choices10 = force? choices9;
    checkMissing(choices10);
    c72 = `is.object`(choices10);
    if c72 then L146() else L147(choices10);
  L163():
    dr6 = tryDispatchBuiltin.1("[", title16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L165() else L164(c73, dr6);
  L164(c81, title18):
    __3 = ldf `[` in base;
    r63 = dyn __3(title18, 1);
    goto L34(c81, r63);
  L170():
    goto L36();
  L174():
    preselect6 = force? preselect5;
    checkMissing(preselect6);
    c88 = `==`(preselect6, NULL);
    goto L37(c88);
  L175():
    sym10 = ldf `rep.int`;
    base10 = ldf `rep.int` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L176() else L177();
  D16():
    deopt 60 [multiple1];
  D23():
    deopt 77 [c48, r32];
  D24():
    deopt 80 [c54];
  D34():
    deopt 117 [c62, res3, choices7];
  D43():
    deopt 151 [c83, r64];
  D49():
    deopt 174 [];
  D51():
    deopt 180 [];
  L23():
    goto L24();
  L29(dx5):
    popenv;
    return dx5;
  L39(r71):
    goto L40(r71);
  L106():
    multiple2 = force? multiple1;
    checkMissing(multiple2);
    title7 = ld title;
    check L107() else D17();
  L118():
    c51 = `as.logical`(r32);
    c52 = `&&`(c48, c51);
    goto L21(c52);
  L121():
    p2 = prom<V +>{
      __ = ldf `::`;
      r33 = dyn __("tcltk", ".TkUp");
      return r33;
    };
    r35 = dyn suppressWarnings(p2);
    check L122() else D25();
  L124():
    __1 = ldf `::`;
    check L125() else D26();
  L140():
    choices8 = force? choices7;
    checkMissing(choices8);
    length1 = ldf length in base;
    r52 = dyn length1(choices8);
    check L141() else D35();
  L146():
    dr4 = tryDispatchBuiltin.1("[", choices10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L148() else L147(dr4);
  L147(choices12):
    res7 = ld res;
    check L149() else D37();
  L165():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L34(c73, dx6);
  L166():
    goto L33(c83, r64);
  L176():
    nc = ld nc;
    check L178() else D47();
  L177():
    r70 = dyn base10(FALSE, <sym nc>);
    goto L39(r70);
  L181():
    p10 = prom<V +>{
      choices15 = ld choices;
      choices16 = force? choices15;
      checkMissing(choices16);
      return choices16;
    };
    p11 = prom<V +>{
      preselect7 = ld preselect;
      preselect8 = force? preselect7;
      checkMissing(preselect8);
      return preselect8;
    };
    r76 = dyn _in_(p10, p11);
    check L182() else D50();
  L183():
    p13 = prom<V +>{
      format = ldf format;
      p12 = prom<V +>{
        sym11 = ldf seq_len;
        base11 = ldf seq_len in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r78):
        return r78;
      L1():
        nc2 = ld nc;
        nc3 = force? nc2;
        checkMissing(nc3);
        r79 = seq_len(nc3);
        goto L0(r79);
      L2():
        r77 = dyn base11(<sym nc>);
        goto L0(r77);
      };
      r81 = dyn format(p12);
      return r81;
    };
    p15 = prom<V +>{
      ifelse = ldf ifelse;
      p14 = prom<V +>{
        def = ld def;
        def1 = force? def;
        checkMissing(def1);
        return def1;
      };
      r84 = dyn ifelse(p14, "+", " ");
      return r84;
    };
    p16 = prom<V +>{
      choices17 = ld choices;
      choices18 = force? choices17;
      checkMissing(choices18);
      return choices18;
    };
    r87 = dyn paste0(p13, ": ", p15, " ", p16);
    check L184() else D52();
  D17():
    deopt 62 [title7];
  D25():
    deopt 82 [c54, r35];
  D26():
    deopt 85 [];
  D35():
    deopt 120 [c62, res3, r52];
  D37():
    deopt 127 [choices12, res7];
  D47():
    deopt 169 [nc];
  D50():
    deopt 177 [r76];
  D52():
    deopt 186 [r87];
  L107():
    title8 = force? title7;
    checkMissing(title8);
    _External2 = ldf `.External2` in base;
    r28 = dyn _External2(C_selectlist1, choices2, preselect2, multiple2, title8);
    check L108() else D18();
  L122():
    c57 = `as.logical`(r35);
    c58 = `&&`(c54, c57);
    goto L22(c58);
  L125():
    r36 = dyn __1("tcltk", "tk_select.list");
    check L126() else D27();
  L141():
    goto L27(c62, res3, r52);
  L148():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(dx4);
  L149():
    res8 = force? res7;
    __2 = ldf `[` in base;
    r54 = dyn __2(choices12, res8);
    goto L29(r54);
  L178():
    nc1 = force? nc;
    checkMissing(nc1);
    rep_int = ldf `rep.int` in base;
    r72 = dyn rep_int(FALSE, nc1);
    check L179() else D48();
  L182():
    goto L40(r76);
  L184():
    st op = r87;
    nc4 = ld nc;
    check L185() else D53();
  D18():
    deopt 65 [r28];
  D27():
    deopt 88 [r36];
  D48():
    deopt 172 [r72];
  D53():
    deopt 188 [nc4];
  L108():
    goto L18(r28);
  L126():
    checkFun.0(r36);
    r37 = r36 as cls;
    p3 = prom<V +>{
      choices3 = ld choices;
      choices4 = force? choices3;
      checkMissing(choices4);
      return choices4;
    };
    p4 = prom<V +>{
      preselect3 = ld preselect;
      preselect4 = force? preselect3;
      checkMissing(preselect4);
      return preselect4;
    };
    p5 = prom<V +>{
      multiple3 = ld multiple;
      multiple4 = force? multiple3;
      checkMissing(multiple4);
      return multiple4;
    };
    p6 = prom<V +>{
      title9 = ld title;
      title10 = force? title9;
      checkMissing(title10);
      return title10;
    };
    r42 = dyn r37(p3, p4, p5, p6);
    check L127() else D28();
  L179():
    goto L39(r72);
  L185():
    nc5 = force? nc4;
    checkMissing(nc5);
    r88 = `>`(nc5, 10);
    c90 = `as.logical`(r88);
    if c90 then L186() else L41();
  D28():
    deopt 94 [r42];
  L41():
    cat2 = ldf cat;
    check L208() else D67();
  L46():
    cat3 = ldf cat;
    check L210() else D69();
  L127():
    popenv;
    return r42;
  L186():
    format1 = ldf format;
    check L187() else D54();
  D54():
    deopt 193 [];
  D67():
    deopt 244 [];
  D69():
    deopt 252 [];
  L187():
    p17 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r90 = dyn format1(p17);
    check L188() else D55();
  L208():
    p21 = prom<V +>{
      op4 = ld op;
      op5 = force? op4;
      checkMissing(op5);
      return op5;
    };
    r114 = dyn cat2[, , , sep]("", p21, "", "\n");
    check L209() else D68();
  L210():
    p22 = prom<V +>{
      gettext = ldf gettext;
      r115 = dyn gettext("Enter one or more numbers separated by spaces and then ENTER, or 0 to cancel\n");
      return r115;
    };
    r117 = dyn cat3(p22);
    check L211() else D70();
  D55():
    deopt 195 [r90];
  D68():
    deopt 250 [r114];
  D70():
    deopt 254 [r117];
  L188():
    st fop = r90;
    sym12 = ldf nchar;
    base12 = ldf nchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L189() else L190();
  L209():
    goto L46();
  L211():
    goto L51();
  L42(r92):
    r95 = `+`(r92, 2);
    st nw = r95;
    getOption1 = ldf getOption;
    check L196() else D58();
  L51():
    tryCatch = ldf tryCatch;
    check L212() else D71();
  L189():
    fop = ld fop;
    check L191() else D56();
  L190():
    r91 = dyn base12(<lang `[`(fop, 1)>, "w");
    goto L42(r91);
  D56():
    deopt 199 [fop];
  D58():
    deopt 214 [];
  D71():
    deopt 256 [];
  L191():
    fop1 = force? fop;
    checkMissing(fop1);
    c91 = `is.object`(fop1);
    if c91 then L192() else L193(fop1);
  L196():
    r96 = dyn getOption1("width");
    check L197() else D59();
  L212():
    p23 = prom<V +>{
      scan = ldf scan;
      r118 = dyn scan[, what, quiet, nlines]("", 0.0, TRUE, 1.0);
      return r118;
    };
    p24 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r121 = dyn tryCatch[, error](p23, p24);
    check L213() else D72();
  D59():
    deopt 216 [r96];
  D72():
    deopt 260 [r121];
  L43(dx9):
    nchar = ldf nchar in base;
    r94 = dyn nchar(dx9, "w", FALSE, NA_LGL);
    check L195() else D57();
  L192():
    dr8 = tryDispatchBuiltin.1("[", fop1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L194() else L193(dr8);
  L193(fop3):
    __4 = ldf `[` in base;
    r93 = dyn __4(fop3, 1);
    goto L43(r93);
  L197():
    nw = ld nw;
    check L198() else D60();
  L213():
    st res = r121;
    sym15 = ldf inherits;
    base15 = ldf inherits in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L214() else L215();
  D57():
    deopt 208 [r94];
  D60():
    deopt 217 [nw];
  L47(r123):
    r125 = `!`(r123);
    c94 = `as.logical`(r125);
    if c94 then L218() else L48();
  L194():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L43(dx8);
  L195():
    goto L42(r94);
  L198():
    nw1 = force? nw;
    checkMissing(nw1);
    ___ = ldf `%/%` in base;
    r97 = dyn ___(r96, nw1);
    check L199() else D61();
  L214():
    res9 = ld res;
    check L216() else D73();
  L215():
    r122 = dyn base15(<sym res>, "error");
    goto L47(r122);
  D61():
    deopt 220 [r97];
  D73():
    deopt 264 [res9];
  L48():
    cat4 = ldf cat;
    check L221() else D75();
  L199():
    st ncol = r97;
    ncol = ld ncol;
    check L200() else D62();
  L216():
    res10 = force? res9;
    checkMissing(res10);
    inherits = ldf inherits in base;
    r124 = dyn inherits(res10, "error", FALSE);
    check L217() else D74();
  L218():
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L224() else L225();
  D62():
    deopt 222 [ncol];
  D74():
    deopt 269 [r124];
  D75():
    deopt 276 [];
  L52(r131):
    c95 = `as.logical`(r131);
    if c95 then L228() else L53();
  L200():
    ncol1 = force? ncol;
    checkMissing(ncol1);
    r98 = `>`(ncol1, 1);
    c92 = `as.logical`(r98);
    if c92 then L201() else L44();
  L217():
    goto L47(r124);
  L221():
    p25 = prom<V +>{
      gettext1 = ldf gettext;
      r127 = dyn gettext1("Invalid input, please try again\n");
      return r127;
    };
    r129 = dyn cat4(p25);
    check L222() else D76();
  L224():
    res11 = ld res;
    check L226() else D77();
  L225():
    r130 = dyn base16(<lang `==`(res, 0.0)>);
    goto L52(r130);
  D76():
    deopt 278 [r129];
  D77():
    deopt 284 [res11];
  L44():
    goto L45();
  L45():
    cat1 = ldf cat;
    check L205() else D65();
  L53():
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L233() else L234();
  L201():
    paste1 = ldf paste0;
    check L202() else D63();
  L222():
    goto L51();
  L226():
    res12 = force? res11;
    checkMissing(res12);
    r132 = `==`(res12, 0.0);
    any = ldf any in base;
    r133 = dyn any(r132);
    check L227() else D78();
  L228():
    character = ldf character;
    check L229() else D79();
  D63():
    deopt 227 [];
  D65():
    deopt 237 [];
  D78():
    deopt 289 [r133];
  D79():
    deopt 291 [];
  L55(r138):
    r139 = `!`(r138);
    c97 = `as.logical`(r139);
    if c97 then L236() else L56();
  L202():
    p18 = prom<V +>{
      fop4 = ld fop;
      fop5 = force? fop4;
      checkMissing(fop5);
      return fop5;
    };
    p19 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L2() else L3();
    L0(r101):
      return r101;
    L2():
      sym14 = ldf `rep.int`;
      base14 = ldf `rep.int` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L4() else L5();
    L3():
      r100 = dyn base13(<lang rep.int("  ", `-`(ncol, 1))>, "\n");
      goto L0(r100);
    L1(r103):
      c93 = ldf c in base;
      r106 = dyn c93(r103, "\n");
      goto L0(r106);
    L4():
      ncol2 = ld ncol;
      ncol3 = force? ncol2;
      checkMissing(ncol3);
      r104 = `-`(ncol3, 1);
      rep_int1 = ldf `rep.int` in base;
      r105 = dyn rep_int1("  ", r104);
      goto L1(r105);
    L5():
      r102 = dyn base14("  ", <lang `-`(ncol, 1)>);
      goto L1(r102);
    };
    r108 = dyn paste1[, , collapse](p18, p19, "");
    check L203() else D64();
  L205():
    p20 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r111 = dyn cat1[, , sep]("", p20, "\n");
    check L206() else D66();
  L227():
    goto L52(r133);
  L229():
    r134 = dyn character();
    check L230() else D80();
  L233():
    preselect9 = ld preselect;
    check L235() else D81();
  L234():
    r137 = dyn base17(<sym preselect>);
    goto L55(r137);
  D64():
    deopt 232 [r108];
  D66():
    deopt 242 [r111];
  D80():
    deopt 292 [r134];
  D81():
    deopt 297 [preselect9];
  L56():
    goto L58();
  L58():
    unique = ldf unique;
    check L244() else D86();
  L203():
    st op = r108;
    goto L45();
  L206():
    goto L46();
  L230():
    popenv;
    return r134;
  L235():
    preselect10 = force? preselect9;
    checkMissing(preselect10);
    c96 = `==`(preselect10, NULL);
    goto L55(c96);
  L236():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L237() else L238();
  D86():
    deopt 315 [];
  L57(r141):
    st res = r141;
    goto L58();
  L237():
    which = ldf which;
    check L239() else D82();
  L238():
    r140 = dyn base18(<lang which(def)>, <sym res>);
    goto L57(r140);
  L244():
    p27 = prom<V +>{
      res15 = ld res;
      res16 = force? res15;
      checkMissing(res16);
      return res16;
    };
    r147 = dyn unique(p27);
    check L245() else D87();
  D82():
    deopt 304 [];
  D87():
    deopt 317 [r147];
  L239():
    p26 = prom<V +>{
      def2 = ld def;
      def3 = force? def2;
      checkMissing(def3);
      return def3;
    };
    r143 = dyn which(p26);
    check L240() else D83();
  L245():
    st res = r147;
    sort = ldf sort;
    check L246() else D88();
  D83():
    deopt 306 [r143];
  D88():
    deopt 320 [];
  L240():
    res13 = ld res;
    check L241() else D84();
  L246():
    p28 = prom<V +>{
      res17 = ld res;
      res18 = force? res17;
      checkMissing(res18);
      c99 = `is.object`(res18);
      if c99 then L1() else L2(res18);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", res18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(res20):
      res21 = ld res;
      res22 = force? res21;
      checkMissing(res22);
      r148 = `<=`(1.0, res22);
      res23 = ld res;
      res24 = force? res23;
      checkMissing(res24);
      nc6 = ld nc;
      nc7 = force? nc6;
      checkMissing(nc7);
      r149 = `<=`(res24, nc7);
      r150 = `&&`(r148, r149);
      __5 = ldf `[` in base;
      r151 = dyn __5(res20, r150);
      goto L0(r151);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r153 = dyn sort(p28);
    check L247() else D89();
  D84():
    deopt 307 [res13];
  D89():
    deopt 322 [r153];
  L241():
    res14 = force? res13;
    checkMissing(res14);
    c98 = ldf c in base;
    r144 = dyn c98(r143, res14);
    check L242() else D85();
  L247():
    st res = r153;
    choices19 = ld choices;
    check L248() else D90();
  D85():
    deopt 310 [r144];
  D90():
    deopt 324 [choices19];
  L242():
    goto L57(r144);
  L248():
    choices20 = force? choices19;
    checkMissing(choices20);
    c100 = `is.object`(choices20);
    if c100 then L249() else L250(choices20);
  L59(dx13):
    popenv;
    return dx13;
  L249():
    dr12 = tryDispatchBuiltin.1("[", choices20);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L251() else L250(dr12);
  L250(choices22):
    res25 = ld res;
    check L252() else D91();
  D91():
    deopt 326 [choices22, res25];
  L251():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L59(dx12);
  L252():
    res26 = force? res25;
    __6 = ldf `[` in base;
    r154 = dyn __6(choices22, res26);
    goto L59(r154);
  }
}