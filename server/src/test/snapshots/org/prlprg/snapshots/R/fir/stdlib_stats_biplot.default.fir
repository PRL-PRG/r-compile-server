fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3460796679;
    st `biplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3460796679(x, y, `var.axes`, col, cex, xlabs, ylabs, expand, xlim, ylim, `arrow.len`, main, sub, xlab, ylab, `...`) {
  (reg x:*, reg y:*, reg var_axes:*, reg col:*, reg cex:*, reg xlabs:*, reg ylabs:*, reg expand:*, reg xlim:*, reg ylim:*, reg arrow_len:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var y:*, var `var.axes`:*, reg var_axes_isMissing:L, reg var_axes_orDefault:*, var col:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), var xlabs:*, reg xlabs_isMissing:L, reg xlabs_orDefault:*, var ylabs:*, reg ylabs_isMissing:L, reg ylabs_orDefault:*, var expand:*, reg expand_isMissing:L, reg expand_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var `arrow.len`:*, reg arrow_len_isMissing:L, reg arrow_len_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, reg nrow:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg nrow1:cls, reg y1:*, reg y2:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing:cls, reg r10:V, reg c:L, reg ____:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r13:V, reg c1:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg p3:p(V +), reg n:*, reg n1:V, reg r18:V, reg p4:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg xlabs1:*, reg xlabs2:V, reg as_character:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg xlabs3:*, reg xlabs4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg x5:*, reg x6:V, reg dimnames1:cls, reg r29:V, reg c2:L, reg r31:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r32:V, reg list:cls, reg r33:V, reg l:*, reg dimnames__:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg missing1:cls, reg r37:V, reg c3:L, reg ____1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg y3:*, reg y4:V, reg dimnames2:cls, reg r40:V, reg c4:L, reg r42:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r43:V, reg p5:p(V +), reg paste:cls, reg p6:*, reg p7:V, reg r45:V, reg p8:p(V +), reg r47:V, reg p9:p(V +), reg r49:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg ylabs1:*, reg ylabs2:V, reg as_character1:cls, reg r53:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg ylabs3:*, reg ylabs4:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg y5:*, reg y6:V, reg dimnames3:cls, reg r58:V, reg c5:L, reg r60:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r61:V, reg list1:cls, reg r62:V, reg l1:*, reg dimnames__1:cls, reg r63:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg cex1:*, reg cex2:V, reg length:cls, reg r66:V, reg r67:V, reg c6:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg r69:V, reg cex3:*, reg cex4:V, reg cex5:*, reg cex6:V, reg c7:cls, reg r70:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg r73:V, reg missing2:cls, reg r74:V, reg c8:L, reg par:cls, reg r75:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r76:V, reg r77:V, reg col1:*, reg col2:V, reg is_numeric:cls, reg r78:V, reg r79:V, reg c9:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg col3:*, reg col4:V, reg palette:cls, reg r82:V, reg match:cls, reg r83:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r85:V, reg r86:V, reg col5:*, reg col6:V, reg col7:*, reg col8:V, reg r87:V, reg c10:cls, reg r88:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r90:V, reg r91:V, reg col9:*, reg col10:V, reg length1:cls, reg r92:V, reg r93:V, reg c11:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r94:V, reg r95:V, reg col11:*, reg col12:V, reg col13:*, reg col14:V, reg c12:cls, reg r96:V, reg r97:cls, reg unsigned_range:cls, reg x7:*, reg x8:V, reg c13:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r98:V, reg p10:p(V +), reg r100:V, reg unsigned_range1:cls, reg x11:*, reg x12:V, reg c14:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r101:V, reg p11:p(V +), reg r103:V, reg unsigned_range2:cls, reg y7:*, reg y8:V, reg c15:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r104:V, reg p12:p(V +), reg r106:V, reg unsigned_range3:cls, reg y11:*, reg y12:V, reg c16:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __7:cls, reg r107:V, reg p13:p(V +), reg r109:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r110:V, reg r111:V, reg missing3:cls, reg r112:V, reg c17:L, reg c19:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r113:V, reg c22:L, reg r114:V, reg missing4:cls, reg r115:V, reg c23:L, reg c24:V, reg c26:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r116:V, reg r117:V, reg rangx1:*, reg rangx2:V, reg rangx3:*, reg rangx4:V, reg range:cls, reg r118:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r120:V, reg r121:V, reg missing5:cls, reg r122:V, reg c27:L, reg rangx5:*, reg rangx6:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r123:V, reg r124:V, reg missing6:cls, reg r125:V, reg c28:L, reg rangx7:*, reg rangx8:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r126:V, reg r127:V, reg rangy1:*, reg rangy2:V, reg rangx9:*, reg rangx10:V, reg r128:V, reg rangy3:*, reg rangy4:V, reg rangx11:*, reg rangx12:V, reg r129:V, reg max:cls, reg r130:V, reg expand1:*, reg expand2:V, reg r131:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r132:V, reg on_exit:cls, reg r134:V, reg par1:cls, reg r135:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r136:V, reg r137:V, reg main1:*, reg main2:V, reg c29:V, reg r138:V, reg c30:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r139:V, reg r140:V, reg op:*, reg op1:V, reg par2:cls, reg par3:cls, reg r141:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r144:V, reg r145:V, reg r146:V, reg c31:cls, reg r147:V, reg r148:V, reg p14:p(V +), reg r150:V, reg c32:cls, reg r151:V, reg plot:cls, reg x15:*, reg x16:V, reg p15:p(V +), reg xlim1:*, reg xlim2:V, reg p16:p(V +), reg ylim1:*, reg ylim2:V, reg p17:p(V +), reg col15:*, reg col16:V, reg c33:L, reg col18:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r156:V, reg p18:p(V +), reg xlab1:*, reg xlab2:V, reg p19:p(V +), reg ylab1:*, reg ylab2:V, reg p20:p(V +), reg sub1:*, reg sub2:V, reg p21:p(V +), reg main3:*, reg main4:V, reg p22:p(V +), reg ddd1:dots?, reg r162:V, reg text:cls, reg x17:*, reg x18:V, reg p23:p(V +), reg xlabs5:*, reg xlabs6:V, reg p24:p(V +), reg cex7:*, reg cex8:V, reg c34:L, reg cex10:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __9:cls, reg r165:V, reg p25:p(V +), reg col19:*, reg col20:V, reg c35:L, reg col22:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __10:cls, reg r167:V, reg p26:p(V +), reg ddd2:dots?, reg r169:V, reg par4:cls, reg r170:V, reg dev_hold:cls, reg r171:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r172:V, reg on_exit1:cls, reg r174:V, reg plot1:cls, reg y15:*, reg y16:V, reg p27:p(V +), reg xlim3:*, reg xlim4:V, reg ratio:*, reg ratio1:V, reg r176:V, reg p28:p(V +), reg ylim3:*, reg ylim4:V, reg ratio2:*, reg ratio3:V, reg r178:V, reg p29:p(V +), reg col23:*, reg col24:V, reg c36:L, reg col26:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __11:cls, reg r180:V, reg p30:p(V +), reg ddd3:dots?, reg r182:V, reg axis:cls, reg col27:*, reg col28:V, reg c37:L, reg col30:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __12:cls, reg r183:V, reg p31:p(V +), reg ddd4:dots?, reg r185:V, reg axis1:cls, reg col31:*, reg col32:V, reg c38:L, reg col34:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __13:cls, reg r186:V, reg p32:p(V +), reg ddd5:dots?, reg r188:V, reg box:cls, reg col35:*, reg col36:V, reg c39:L, reg col38:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg __14:cls, reg r189:V, reg p33:p(V +), reg r191:V, reg text1:cls, reg y17:*, reg y18:V, reg p34:p(V +), reg ylabs5:*, reg ylabs6:V, reg p35:p(V +), reg cex11:*, reg cex12:V, reg c40:L, reg cex14:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg __15:cls, reg r194:V, reg p36:p(V +), reg col39:*, reg col40:V, reg c41:L, reg col42:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __16:cls, reg r196:V, reg p37:p(V +), reg ddd6:dots?, reg r198:V, reg var_axes1:*, reg var_axes2:V, reg c42:L, reg arrows:cls, reg y19:*, reg y20:V, reg c43:L, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg __17:cls, reg r199:V, reg r200:V, reg p38:p(V +), reg y23:*, reg y24:V, reg c44:L, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg __18:cls, reg r202:V, reg r203:V, reg p39:p(V +), reg col43:*, reg col44:V, reg c45:L, reg col46:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg __19:cls, reg r205:V, reg p40:p(V +), reg arrow_len1:*, reg arrow_len2:V, reg p41:p(V +), reg r208:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r210:V, reg r211:V, reg invisible:cls, reg r212:V |
    mkenv;
    st x = x;
    st y = y;
    var_axes_isMissing = missing.0(var_axes);
    if var_axes_isMissing then L0(TRUE) else L0(var_axes);
  L0(var_axes_orDefault):
    st `var.axes` = var_axes_orDefault;
    st col = col;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L1() else L2(cex);
  L1():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(<lang par("cex")>, 2.0);
      goto L0(r2);
    L2():
      r = dyn base(<lang par("cex")>, 2.0);
      goto L0(r);
    };
    goto L2(p);
  L2(cex_orDefault):
    st cex = cex_orDefault;
    xlabs_isMissing = missing.0(xlabs);
    if xlabs_isMissing then L3(NULL) else L3(xlabs);
  L3(xlabs_orDefault):
    st xlabs = xlabs_orDefault;
    ylabs_isMissing = missing.0(ylabs);
    if ylabs_isMissing then L4(NULL) else L4(ylabs);
  L4(ylabs_orDefault):
    st ylabs = ylabs_orDefault;
    expand_isMissing = missing.0(expand);
    if expand_isMissing then L5(1.0) else L5(expand);
  L5(expand_orDefault):
    st expand = expand_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L6(NULL) else L6(xlim);
  L6(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L7(NULL) else L7(ylim);
  L7(ylim_orDefault):
    st ylim = ylim_orDefault;
    arrow_len_isMissing = missing.0(arrow_len);
    if arrow_len_isMissing then L8(0.1) else L8(arrow_len);
  L8(arrow_len_orDefault):
    st `arrow.len` = arrow_len_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L9(NULL) else L9(main);
  L9(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L10(NULL) else L10(sub);
  L10(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L11(NULL) else L11(xlab);
  L11(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L12(NULL) else L12(ylab);
  L12(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    nrow = ldf nrow;
    check L62() else D0();
  D0():
    deopt 1 [];
  L62():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn nrow(p1);
    check L63() else D1();
  D1():
    deopt 3 [r5];
  L63():
    st n = r5;
    nrow1 = ldf nrow;
    check L64() else D2();
  D2():
    deopt 6 [];
  L64():
    p2 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r7 = dyn nrow1(p2);
    check L65() else D3();
  D3():
    deopt 8 [r7];
  L65():
    st p = r7;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L13(r9):
    c = `as.logical`(r9);
    if c then L68() else L14();
  L66():
    missing = ldf missing in base;
    r10 = dyn missing(<sym xlabs>);
    goto L13(r10);
  L67():
    r8 = dyn base1(<sym xlabs>);
    goto L13(r8);
  L14():
    goto L15();
  L15():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L72() else L73();
  L68():
    ____ = ldf `%||%`;
    check L69() else D4();
  D4():
    deopt 14 [];
  L16(r23):
    st xlabs = r23;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L69():
    p3 = prom<V +>{
      sym2 = ldf dimnames;
      base2 = ldf dimnames in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r12):
      c1 = `is.object`(r12);
      if c1 then L4() else L5(r12);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      dimnames = ldf dimnames in base;
      r13 = dyn dimnames(x4);
      goto L0(r13);
    L3():
      r11 = dyn base2(<sym x>);
      goto L0(r11);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r12);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r15):
      __ = ldf `[[` in base;
      r16 = dyn __(r15, 1);
      goto L1(r16);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p4 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r18 = `:`(1, n1);
      return r18;
    };
    r20 = dyn ____(p3, p4);
    check L70() else D5();
  L72():
    xlabs1 = ld xlabs;
    check L74() else D6();
  L73():
    r22 = dyn base3(<sym xlabs>);
    goto L16(r22);
  D5():
    deopt 17 [r20];
  D6():
    deopt 23 [xlabs1];
  L17(r26):
    l = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L87() else D12();
  L70():
    st xlabs = r20;
    goto L15();
  L74():
    xlabs2 = force? xlabs1;
    checkMissing(xlabs2);
    as_character = ldf `as.character` in base;
    r24 = dyn as_character(xlabs2);
    check L75() else D7();
  L76():
    xlabs3 = ld xlabs;
    check L78() else D8();
  L77():
    r25 = dyn base4(<sym xlabs>, <lang `[[`(dimnames(x), 2)>);
    goto L17(r25);
  D7():
    deopt 26 [r24];
  D8():
    deopt 30 [xlabs3];
  D12():
    deopt 44 [r26, l, r26];
  L75():
    goto L16(r24);
  L78():
    xlabs4 = force? xlabs3;
    checkMissing(xlabs4);
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L87():
    r34 = dyn dimnames__(l, NULL, r26);
    check L88() else D13();
  D13():
    deopt 46 [r26, r34];
  L18(r28):
    c2 = `is.object`(r28);
    if c2 then L83() else L84(r28);
  L79():
    x5 = ld x;
    check L81() else D9();
  L80():
    r27 = dyn base5(<sym x>);
    goto L18(r27);
  L88():
    st x = r34;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L89() else L90();
  D9():
    deopt 34 [x5];
  L19(dx3):
    list = ldf list in base;
    r33 = dyn list(xlabs4, dx3);
    check L86() else D11();
  L20(r36):
    c3 = `as.logical`(r36);
    if c3 then L91() else L21();
  L81():
    x6 = force? x5;
    checkMissing(x6);
    dimnames1 = ldf dimnames in base;
    r29 = dyn dimnames1(x6);
    check L82() else D10();
  L83():
    dr2 = tryDispatchBuiltin.1("[[", r28);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L85() else L84(dr2);
  L84(r31):
    __1 = ldf `[[` in base;
    r32 = dyn __1(r31, 2);
    goto L19(r32);
  L89():
    missing1 = ldf missing in base;
    r37 = dyn missing1(<sym ylabs>);
    goto L20(r37);
  L90():
    r35 = dyn base6(<sym ylabs>);
    goto L20(r35);
  D10():
    deopt 37 [r29];
  D11():
    deopt 42 [r33];
  L21():
    goto L22();
  L22():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  L82():
    goto L18(r29);
  L85():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L86():
    goto L17(r33);
  L91():
    ____1 = ldf `%||%`;
    check L92() else D14();
  D14():
    deopt 52 [];
  L23(r52):
    st ylabs = r52;
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L99() else L100();
  L92():
    p5 = prom<V +>{
      sym7 = ldf dimnames;
      base7 = ldf dimnames in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r39):
      c4 = `is.object`(r39);
      if c4 then L4() else L5(r39);
    L2():
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      dimnames2 = ldf dimnames in base;
      r40 = dyn dimnames2(y4);
      goto L0(r40);
    L3():
      r38 = dyn base7(<sym y>);
      goto L0(r38);
    L1(dx5):
      return dx5;
    L4():
      dr4 = tryDispatchBuiltin.1("[[", r39);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(r42):
      __2 = ldf `[[` in base;
      r43 = dyn __2(r42, 1);
      goto L1(r43);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    p9 = prom<V +>{
      paste = ldf paste;
      p8 = prom<V +>{
        p6 = ld p;
        p7 = force? p6;
        checkMissing(p7);
        r45 = `:`(1, p7);
        return r45;
      };
      r47 = dyn paste("Var", p8);
      return r47;
    };
    r49 = dyn ____1(p5, p9);
    check L93() else D15();
  L95():
    ylabs1 = ld ylabs;
    check L97() else D16();
  L96():
    r51 = dyn base8(<sym ylabs>);
    goto L23(r51);
  D15():
    deopt 55 [r49];
  D16():
    deopt 61 [ylabs1];
  L24(r55):
    l1 = ld y;
    dimnames__1 = ldf `dimnames<-`;
    check L110() else D22();
  L93():
    st ylabs = r49;
    goto L22();
  L97():
    ylabs2 = force? ylabs1;
    checkMissing(ylabs2);
    as_character1 = ldf `as.character` in base;
    r53 = dyn as_character1(ylabs2);
    check L98() else D17();
  L99():
    ylabs3 = ld ylabs;
    check L101() else D18();
  L100():
    r54 = dyn base9(<sym ylabs>, <lang `[[`(dimnames(y), 2)>);
    goto L24(r54);
  D17():
    deopt 64 [r53];
  D18():
    deopt 68 [ylabs3];
  D22():
    deopt 82 [r55, l1, r55];
  L98():
    goto L23(r53);
  L101():
    ylabs4 = force? ylabs3;
    checkMissing(ylabs4);
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L102() else L103();
  L110():
    r63 = dyn dimnames__1(l1, NULL, r55);
    check L111() else D23();
  D23():
    deopt 84 [r55, r63];
  L25(r57):
    c5 = `is.object`(r57);
    if c5 then L106() else L107(r57);
  L102():
    y5 = ld y;
    check L104() else D19();
  L103():
    r56 = dyn base10(<sym y>);
    goto L25(r56);
  L111():
    st y = r63;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  D19():
    deopt 72 [y5];
  L26(dx7):
    list1 = ldf list in base;
    r62 = dyn list1(ylabs4, dx7);
    check L109() else D21();
  L27(r65):
    r67 = `==`(r65, 1);
    c6 = `as.logical`(r67);
    if c6 then L116() else L28();
  L104():
    y6 = force? y5;
    checkMissing(y6);
    dimnames3 = ldf dimnames in base;
    r58 = dyn dimnames3(y6);
    check L105() else D20();
  L106():
    dr6 = tryDispatchBuiltin.1("[[", r57);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(dr6);
  L107(r60):
    __3 = ldf `[[` in base;
    r61 = dyn __3(r60, 2);
    goto L26(r61);
  L112():
    cex1 = ld cex;
    check L114() else D24();
  L113():
    r64 = dyn base11(<sym cex>);
    goto L27(r64);
  D20():
    deopt 75 [r58];
  D21():
    deopt 80 [r62];
  D24():
    deopt 88 [cex1];
  L28():
    goto L30();
  L30():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L123() else L124();
  L105():
    goto L25(r58);
  L108():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L26(dx6);
  L109():
    goto L24(r62);
  L114():
    cex2 = force? cex1;
    checkMissing(cex2);
    length = ldf length in base;
    r66 = dyn length(cex2);
    check L115() else D25();
  L116():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  D25():
    deopt 91 [r66];
  L29(r69):
    st cex = r69;
    goto L30();
  L31(r73):
    c8 = `as.logical`(r73);
    if c8 then L125() else L32();
  L115():
    goto L27(r66);
  L117():
    cex3 = ld cex;
    check L119() else D26();
  L118():
    r68 = dyn base12(<sym cex>, <sym cex>);
    goto L29(r68);
  L123():
    missing2 = ldf missing in base;
    r74 = dyn missing2(<sym col>);
    goto L31(r74);
  L124():
    r72 = dyn base13(<sym col>);
    goto L31(r72);
  D26():
    deopt 96 [cex3];
  L32():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L146() else L147();
  L38():
    r97 = clos inner2501545716;
    st `unsigned.range` = r97;
    unsigned_range = ldf `unsigned.range`;
    check L157() else D45();
  L119():
    cex4 = force? cex3;
    checkMissing(cex4);
    cex5 = ld cex;
    check L120() else D27();
  L125():
    par = ldf par;
    check L126() else D29();
  D27():
    deopt 98 [cex5];
  D29():
    deopt 109 [];
  D45():
    deopt 168 [];
  L39(r91):
    r93 = `==`(r91, 1);
    c11 = `as.logical`(r93);
    if c11 then L150() else L40();
  L120():
    cex6 = force? cex5;
    checkMissing(cex6);
    c7 = ldf c in base;
    r70 = dyn c7(cex4, cex6);
    check L121() else D28();
  L126():
    r75 = dyn par("col");
    check L127() else D30();
  L146():
    col9 = ld col;
    check L148() else D40();
  L147():
    r90 = dyn base17(<sym col>);
    goto L39(r90);
  L157():
    p10 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c13 = `is.object`(x8);
      if c13 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x8);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r98 = dyn __4(x8, <missing>, 1);
      goto L0(r98);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r100 = dyn unsigned_range(p10);
    check L158() else D46();
  D28():
    deopt 101 [r70];
  D30():
    deopt 111 [r75];
  D40():
    deopt 147 [col9];
  D46():
    deopt 170 [r100];
  L40():
    goto L38();
  L121():
    goto L29(r70);
  L127():
    st col = r75;
    sym14 = ldf `is.numeric`;
    base14 = ldf `is.numeric` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L128() else L129();
  L148():
    col10 = force? col9;
    checkMissing(col10);
    length1 = ldf length in base;
    r92 = dyn length1(col10);
    check L149() else D41();
  L150():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L151() else L152();
  L158():
    st rangx1 = r100;
    unsigned_range1 = ldf `unsigned.range`;
    check L159() else D47();
  D41():
    deopt 150 [r92];
  D47():
    deopt 173 [];
  L33(r77):
    r79 = `!`(r77);
    c9 = `as.logical`(r79);
    if c9 then L132() else L34();
  L41(r95):
    st col = r95;
    goto L38();
  L128():
    col1 = ld col;
    check L130() else D31();
  L129():
    r76 = dyn base14(<sym col>);
    goto L33(r76);
  L149():
    goto L39(r92);
  L151():
    col11 = ld col;
    check L153() else D42();
  L152():
    r94 = dyn base18(<sym col>, <sym col>);
    goto L41(r94);
  L159():
    p11 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c14 = `is.object`(x12);
      if c14 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x12);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r101 = dyn __5(x12, <missing>, 2);
      goto L0(r101);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r103 = dyn unsigned_range1(p11);
    check L160() else D48();
  D31():
    deopt 115 [col1];
  D42():
    deopt 155 [col11];
  D48():
    deopt 175 [r103];
  L34():
    goto L36();
  L36():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L140() else L141();
  L130():
    col2 = force? col1;
    checkMissing(col2);
    is_numeric = ldf `is.numeric` in base;
    r78 = dyn is_numeric(col2);
    check L131() else D32();
  L132():
    sym15 = ldf match;
    base15 = ldf match in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L133() else L134();
  L153():
    col12 = force? col11;
    checkMissing(col12);
    col13 = ld col;
    check L154() else D43();
  L160():
    st rangx2 = r103;
    unsigned_range2 = ldf `unsigned.range`;
    check L161() else D49();
  D32():
    deopt 118 [r78];
  D43():
    deopt 157 [col13];
  D49():
    deopt 178 [];
  L35(r81):
    st col = r81;
    goto L36();
  L37(r86):
    st col = r86;
    goto L38();
  L131():
    goto L33(r78);
  L133():
    col3 = ld col;
    check L135() else D33();
  L134():
    r80 = dyn base15[, , nomatch](<sym col>, <lang palette()>, 1);
    goto L35(r80);
  L140():
    col5 = ld col;
    check L142() else D37();
  L141():
    r85 = dyn base16(<sym col>, <lang `+`(col, 1)>);
    goto L37(r85);
  L154():
    col14 = force? col13;
    checkMissing(col14);
    c12 = ldf c in base;
    r96 = dyn c12(col12, col14);
    check L155() else D44();
  L161():
    p12 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      c15 = `is.object`(y8);
      if c15 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", y8);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __6 = ldf `[` in base;
      r104 = dyn __6(y8, <missing>, 1);
      goto L0(r104);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r106 = dyn unsigned_range2(p12);
    check L162() else D50();
  D33():
    deopt 122 [col3];
  D37():
    deopt 136 [col5];
  D44():
    deopt 160 [r96];
  D50():
    deopt 180 [r106];
  L135():
    col4 = force? col3;
    checkMissing(col4);
    palette = ldf palette;
    check L136() else D34();
  L142():
    col6 = force? col5;
    checkMissing(col6);
    col7 = ld col;
    check L143() else D38();
  L155():
    goto L41(r96);
  L162():
    st rangy1 = r106;
    unsigned_range3 = ldf `unsigned.range`;
    check L163() else D51();
  D34():
    deopt 125 [];
  D38():
    deopt 138 [col7];
  D51():
    deopt 183 [];
  L136():
    r82 = dyn palette();
    check L137() else D35();
  L143():
    col8 = force? col7;
    checkMissing(col8);
    r87 = `+`(col8, 1);
    c10 = ldf c in base;
    r88 = dyn c10(col6, r87);
    check L144() else D39();
  L163():
    p13 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      c16 = `is.object`(y12);
      if c16 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", y12);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __7 = ldf `[` in base;
      r107 = dyn __7(y12, <missing>, 2);
      goto L0(r107);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r109 = dyn unsigned_range3(p13);
    check L164() else D52();
  D35():
    deopt 126 [r82];
  D39():
    deopt 143 [r88];
  D52():
    deopt 185 [r109];
  L137():
    match = ldf match in base;
    r83 = dyn match(col4, r82, 1, NULL);
    check L138() else D36();
  L144():
    goto L37(r88);
  L164():
    st rangy2 = r109;
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L165() else L166();
  D36():
    deopt 130 [r83];
  L42(r111):
    c17 = `as.logical`(r111);
    if c17 then L167() else L43(c17);
  L138():
    goto L35(r83);
  L165():
    missing3 = ldf missing in base;
    r112 = dyn missing3(<sym xlim>);
    goto L42(r112);
  L166():
    r110 = dyn base19(<sym xlim>);
    goto L42(r110);
  L43(c19):
    c26 = `as.logical`(c19);
    if c26 then L171() else L45();
  L167():
    sym20 = ldf missing;
    base20 = ldf missing in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L168() else L169();
  L44(c22, r114):
    c23 = `as.logical`(r114);
    c24 = `&&`(c22, c23);
    goto L43(c24);
  L45():
    sym22 = ldf missing;
    base22 = ldf missing in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L178() else L179();
  L47():
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L188() else L189();
  L168():
    missing4 = ldf missing in base;
    r115 = dyn missing4(<sym ylim>);
    goto L44(c17, r115);
  L169():
    r113 = dyn base20(<sym ylim>);
    goto L44(c17, r113);
  L171():
    sym21 = ldf range;
    base21 = ldf range in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L172() else L173();
  L46(r117):
    st rangx2 = r117;
    st rangx1 = r117;
    st ylim = r117;
    st xlim = r117;
    goto L47();
  L48(r121):
    c27 = `as.logical`(r121);
    if c27 then L180() else L49();
  L52(r127):
    expand1 = ld expand;
    check L195() else D63();
  L172():
    rangx1 = ld rangx1;
    check L174() else D53();
  L173():
    r116 = dyn base21(<sym rangx1>, <sym rangx2>);
    goto L46(r116);
  L178():
    missing5 = ldf missing in base;
    r122 = dyn missing5(<sym xlim>);
    goto L48(r122);
  L179():
    r120 = dyn base22(<sym xlim>);
    goto L48(r120);
  L188():
    rangy1 = ld rangy1;
    check L190() else D58();
  L189():
    r126 = dyn base24(<lang `/`(rangy1, rangx1)>, <lang `/`(rangy2, rangx2)>);
    goto L52(r126);
  D53():
    deopt 196 [rangx1];
  D58():
    deopt 222 [rangy1];
  D63():
    deopt 231 [r127, expand1];
  L49():
    sym23 = ldf missing;
    base23 = ldf missing in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L183() else L184();
  L174():
    rangx2 = force? rangx1;
    checkMissing(rangx2);
    rangx3 = ld rangx2;
    check L175() else D54();
  L180():
    rangx5 = ld rangx1;
    check L181() else D56();
  L190():
    rangy2 = force? rangy1;
    checkMissing(rangy2);
    rangx9 = ld rangx1;
    check L191() else D59();
  L195():
    expand2 = force? expand1;
    checkMissing(expand2);
    r131 = `/`(r127, expand2);
    st ratio = r131;
    sym25 = ldf `on.exit`;
    base25 = ldf `on.exit` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L196() else L197();
  D54():
    deopt 198 [rangx3];
  D56():
    deopt 209 [rangx5];
  D59():
    deopt 223 [rangy2, rangx9];
  L50(r124):
    c28 = `as.logical`(r124);
    if c28 then L185() else L51();
  L53():
    par1 = ldf par;
    check L198() else D64();
  L175():
    rangx4 = force? rangx3;
    checkMissing(rangx4);
    range = ldf range in base;
    r118 = dyn range(rangx2, rangx4);
    check L176() else D55();
  L181():
    rangx6 = force? rangx5;
    checkMissing(rangx6);
    st xlim = rangx6;
    goto L47();
  L183():
    missing6 = ldf missing in base;
    r125 = dyn missing6(<sym ylim>);
    goto L50(r125);
  L184():
    r123 = dyn base23(<sym ylim>);
    goto L50(r123);
  L191():
    rangx10 = force? rangx9;
    checkMissing(rangx10);
    r128 = `/`(rangy2, rangx10);
    rangy3 = ld rangy2;
    check L192() else D60();
  L196():
    on_exit = ldf `on.exit` in base;
    r134 = dyn on_exit(<lang par(op)>);
    goto L53();
  L197():
    r132 = dyn base25(<lang par(op)>);
    goto L53();
  D55():
    deopt 201 [r118];
  D60():
    deopt 226 [rangy3];
  D64():
    deopt 239 [];
  L51():
    goto L47();
  L176():
    goto L46(r118);
  L185():
    rangx7 = ld rangx2;
    check L186() else D57();
  L192():
    rangy4 = force? rangy3;
    checkMissing(rangy4);
    rangx11 = ld rangx2;
    check L193() else D61();
  L198():
    r135 = dyn par1[pty]("s");
    check L199() else D65();
  D57():
    deopt 215 [rangx7];
  D61():
    deopt 227 [rangy4, rangx11];
  D65():
    deopt 242 [r135];
  L186():
    rangx8 = force? rangx7;
    checkMissing(rangx8);
    st ylim = rangx8;
    goto L47();
  L193():
    rangx12 = force? rangx11;
    checkMissing(rangx12);
    r129 = `/`(rangy4, rangx12);
    max = ldf max in base;
    r130 = dyn max(r128, r129);
    check L194() else D62();
  L199():
    st op = r135;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L200() else L201();
  D62():
    deopt 231 [r130];
  L54(r137):
    r138 = `!`(r137);
    c30 = `as.logical`(r138);
    if c30 then L203() else L55();
  L194():
    goto L52(r130);
  L200():
    main1 = ld main;
    check L202() else D66();
  L201():
    r136 = dyn base26(<sym main>);
    goto L54(r136);
  D66():
    deopt 245 [main1];
  L55():
    goto L57();
  L57():
    plot = ldf plot;
    check L211() else D71();
  L202():
    main2 = force? main1;
    checkMissing(main2);
    c29 = `==`(main2, NULL);
    goto L54(c29);
  L203():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L204() else L205();
  D71():
    deopt 264 [];
  L56(r140):
    st op = r140;
    goto L57();
  L204():
    op = ld op;
    check L206() else D67();
  L205():
    r139 = dyn base27(<sym op>, <lang par(mar=`+`(par("mar"), c(0.0, 0.0, 1.0, 0.0)))>);
    goto L56(r139);
  L211():
    p15 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p16 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p17 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p18 = prom<V +>{
      col15 = ld col;
      col16 = force? col15;
      checkMissing(col16);
      c33 = `is.object`(col16);
      if c33 then L1() else L2(col16);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", col16);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(col18):
      __8 = ldf `[` in base;
      r156 = dyn __8(col18, 1);
      goto L0(r156);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p19 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p20 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p21 = prom<V +>{
      sub1 = ld sub;
      sub2 = force? sub1;
      checkMissing(sub2);
      return sub2;
    };
    p22 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    ddd1 = ld `...`;
    r162 = dyn plot[, type, xlim, ylim, col, xlab, ylab, sub, main, `...`](p15, "n", p16, p17, p18, p19, p20, p21, p22, ddd1);
    check L212() else D72();
  D67():
    deopt 251 [op];
  D72():
    deopt 283 [r162];
  L206():
    op1 = force? op;
    checkMissing(op1);
    par2 = ldf par;
    check L207() else D68();
  L212():
    text = ldf text;
    check L213() else D73();
  D68():
    deopt 254 [];
  D73():
    deopt 285 [];
  L207():
    p14 = prom<V +>{
      par3 = ldf par;
      r141 = dyn par3("mar");
      sym28 = ldf c;
      base28 = ldf c in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r145, r146):
      r148 = `+`(r145, r146);
      return r148;
    L1():
      c31 = ldf c in base;
      r147 = dyn c31(0.0, 0.0, 1.0, 0.0);
      goto L0(r141, r147);
    L2():
      r144 = dyn base28(0.0, 0.0, 1.0, 0.0);
      goto L0(r141, r144);
    };
    r150 = dyn par2[mar](p14);
    check L208() else D69();
  L213():
    p23 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p24 = prom<V +>{
      xlabs5 = ld xlabs;
      xlabs6 = force? xlabs5;
      checkMissing(xlabs6);
      return xlabs6;
    };
    p25 = prom<V +>{
      cex7 = ld cex;
      cex8 = force? cex7;
      checkMissing(cex8);
      c34 = `is.object`(cex8);
      if c34 then L1() else L2(cex8);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", cex8);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(cex10):
      __9 = ldf `[` in base;
      r165 = dyn __9(cex10, 1);
      goto L0(r165);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p26 = prom<V +>{
      col19 = ld col;
      col20 = force? col19;
      checkMissing(col20);
      c35 = `is.object`(col20);
      if c35 then L1() else L2(col20);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", col20);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(col22):
      __10 = ldf `[` in base;
      r167 = dyn __10(col22, 1);
      goto L0(r167);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    ddd2 = ld `...`;
    r169 = dyn text[, , cex, col, `...`](p23, p24, p25, p26, ddd2);
    check L214() else D74();
  D69():
    deopt 257 [r150];
  D74():
    deopt 293 [r169];
  L208():
    c32 = ldf c in base;
    r151 = dyn c32(op1, r150);
    check L209() else D70();
  L214():
    par4 = ldf par;
    check L215() else D75();
  D70():
    deopt 259 [r151];
  D75():
    deopt 295 [];
  L209():
    goto L56(r151);
  L215():
    r170 = dyn par4[new](TRUE);
    check L216() else D76();
  D76():
    deopt 298 [r170];
  L216():
    dev_hold = ldf `dev.hold`;
    check L217() else D77();
  D77():
    deopt 300 [];
  L217():
    r171 = dyn dev_hold();
    check L218() else D78();
  D78():
    deopt 301 [r171];
  L218():
    sym29 = ldf `on.exit`;
    base29 = ldf `on.exit` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L219() else L220();
  L58():
    plot1 = ldf plot;
    check L221() else D79();
  L219():
    on_exit1 = ldf `on.exit` in base;
    r174 = dyn on_exit1(<lang dev.flush()>, TRUE);
    goto L58();
  L220():
    r172 = dyn base29[, add](<lang dev.flush()>, TRUE);
    goto L58();
  D79():
    deopt 306 [];
  L221():
    p27 = prom<V +>{
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    p28 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      ratio = ld ratio;
      ratio1 = force? ratio;
      checkMissing(ratio1);
      r176 = `*`(xlim4, ratio1);
      return r176;
    };
    p29 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      ratio2 = ld ratio;
      ratio3 = force? ratio2;
      checkMissing(ratio3);
      r178 = `*`(ylim4, ratio3);
      return r178;
    };
    p30 = prom<V +>{
      col23 = ld col;
      col24 = force? col23;
      checkMissing(col24);
      c36 = `is.object`(col24);
      if c36 then L1() else L2(col24);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", col24);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(col26):
      __11 = ldf `[` in base;
      r180 = dyn __11(col26, 1);
      goto L0(r180);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    ddd3 = ld `...`;
    r182 = dyn plot1[, axes, type, xlim, ylim, xlab, ylab, col, `...`](p27, FALSE, "n", p28, p29, "", "", p30, ddd3);
    check L222() else D80();
  D80():
    deopt 323 [r182];
  L222():
    axis = ldf axis;
    check L223() else D81();
  D81():
    deopt 325 [];
  L223():
    p31 = prom<V +>{
      col27 = ld col;
      col28 = force? col27;
      checkMissing(col28);
      c37 = `is.object`(col28);
      if c37 then L1() else L2(col28);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[", col28);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(col30):
      __12 = ldf `[` in base;
      r183 = dyn __12(col30, 2);
      goto L0(r183);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    ddd4 = ld `...`;
    r185 = dyn axis[, col, `...`](3.0, p31, ddd4);
    check L224() else D82();
  D82():
    deopt 330 [r185];
  L224():
    axis1 = ldf axis;
    check L225() else D83();
  D83():
    deopt 332 [];
  L225():
    p32 = prom<V +>{
      col31 = ld col;
      col32 = force? col31;
      checkMissing(col32);
      c38 = `is.object`(col32);
      if c38 then L1() else L2(col32);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", col32);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(col34):
      __13 = ldf `[` in base;
      r186 = dyn __13(col34, 2);
      goto L0(r186);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    ddd5 = ld `...`;
    r188 = dyn axis1[, col, `...`](4.0, p32, ddd5);
    check L226() else D84();
  D84():
    deopt 337 [r188];
  L226():
    box = ldf box;
    check L227() else D85();
  D85():
    deopt 339 [];
  L227():
    p33 = prom<V +>{
      col35 = ld col;
      col36 = force? col35;
      checkMissing(col36);
      c39 = `is.object`(col36);
      if c39 then L1() else L2(col36);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[", col36);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(col38):
      __14 = ldf `[` in base;
      r189 = dyn __14(col38, 1);
      goto L0(r189);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r191 = dyn box[col](p33);
    check L228() else D86();
  D86():
    deopt 342 [r191];
  L228():
    text1 = ldf text;
    check L229() else D87();
  D87():
    deopt 344 [];
  L229():
    p34 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    p35 = prom<V +>{
      ylabs5 = ld ylabs;
      ylabs6 = force? ylabs5;
      checkMissing(ylabs6);
      return ylabs6;
    };
    p36 = prom<V +>{
      cex11 = ld cex;
      cex12 = force? cex11;
      checkMissing(cex12);
      c40 = `is.object`(cex12);
      if c40 then L1() else L2(cex12);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[", cex12);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(cex14):
      __15 = ldf `[` in base;
      r194 = dyn __15(cex14, 2);
      goto L0(r194);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    p37 = prom<V +>{
      col39 = ld col;
      col40 = force? col39;
      checkMissing(col40);
      c41 = `is.object`(col40);
      if c41 then L1() else L2(col40);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", col40);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(col42):
      __16 = ldf `[` in base;
      r196 = dyn __16(col42, 2);
      goto L0(r196);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    ddd6 = ld `...`;
    r198 = dyn text1[, labels, cex, col, `...`](p34, p35, p36, p37, ddd6);
    check L230() else D88();
  D88():
    deopt 353 [r198];
  L230():
    var_axes1 = ld `var.axes`;
    check L231() else D89();
  D89():
    deopt 354 [var_axes1];
  L231():
    var_axes2 = force? var_axes1;
    checkMissing(var_axes2);
    c42 = `as.logical`(var_axes2);
    if c42 then L232() else L59();
  L59():
    goto L60();
  L60():
    sym30 = ldf invisible;
    base30 = ldf invisible in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L236() else L237();
  L232():
    arrows = ldf arrows;
    check L233() else D90();
  D90():
    deopt 357 [];
  L61(r211):
    popenv;
    return r211;
  L233():
    p38 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      c43 = `is.object`(y20);
      if c43 then L1() else L2();
    L0(dx35):
      r200 = `*`(dx35, 0.8);
      return r200;
    L1():
      dr34 = tryDispatchBuiltin.1("[", y20);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2();
    L2():
      __17 = ldf `[` in base;
      r199 = dyn __17(y20, <missing>, 1);
      goto L0(r199);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    p39 = prom<V +>{
      y23 = ld y;
      y24 = force? y23;
      checkMissing(y24);
      c44 = `is.object`(y24);
      if c44 then L1() else L2();
    L0(dx37):
      r203 = `*`(dx37, 0.8);
      return r203;
    L1():
      dr36 = tryDispatchBuiltin.1("[", y24);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2();
    L2():
      __18 = ldf `[` in base;
      r202 = dyn __18(y24, <missing>, 2);
      goto L0(r202);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    };
    p40 = prom<V +>{
      col43 = ld col;
      col44 = force? col43;
      checkMissing(col44);
      c45 = `is.object`(col44);
      if c45 then L1() else L2(col44);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("[", col44);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(col46):
      __19 = ldf `[` in base;
      r205 = dyn __19(col46, 2);
      goto L0(r205);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    p41 = prom<V +>{
      arrow_len1 = ld `arrow.len`;
      arrow_len2 = force? arrow_len1;
      checkMissing(arrow_len2);
      return arrow_len2;
    };
    r208 = dyn arrows[, , , , col, length](0.0, 0.0, p38, p39, p40, p41);
    check L234() else D91();
  L236():
    invisible = ldf invisible in base;
    r212 = dyn invisible();
    check L238() else D92();
  L237():
    r210 = dyn base30();
    goto L61(r210);
  D91():
    deopt 366 [r208];
  D92():
    deopt 372 [r212];
  L234():
    goto L60();
  L238():
    goto L61(r212);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg min:cls, reg r6:V, reg abs:cls, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg x3:*, reg x4:V, reg max:cls, reg r13:V, reg abs1:cls, reg r14:V, reg c:cls, reg r15:V |
    mkenv;
    st x = x;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    popenv;
    return r1;
  L5():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang `-`(abs(min(x, na.rm=TRUE)))>, <lang abs(max(x, na.rm=TRUE))>);
    goto L0(r);
  L1(r3):
    r8 = `-`(<missing>, r3);
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L7():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L8():
    r2 = dyn base1(<lang min(x, na.rm=TRUE)>);
    goto L1(r2);
  L2(r5):
    abs = ldf abs in base;
    r7 = dyn abs(r5);
    check L13() else D2();
  L3(r10):
    c = ldf c in base;
    r15 = dyn c(r8, r10);
    check L21() else D6();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r4 = dyn base2[, `na.rm`](<sym x>, TRUE);
    goto L2(r4);
  L14():
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L16() else L17();
  L15():
    r9 = dyn base3(<lang max(x, na.rm=TRUE)>);
    goto L3(r9);
  D0():
    deopt 6 [x1];
  D2():
    deopt 13 [r7];
  D6():
    deopt 28 [r15];
  L4(r12):
    abs1 = ldf abs in base;
    r14 = dyn abs1(r12);
    check L20() else D5();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    min = ldf min in base;
    r6 = dyn min(x2, TRUE);
    check L12() else D1();
  L13():
    goto L1(r7);
  L16():
    x3 = ld x;
    check L18() else D3();
  L17():
    r11 = dyn base4[, `na.rm`](<sym x>, TRUE);
    goto L4(r11);
  L21():
    goto L0(r15);
  D1():
    deopt 11 [r6];
  D3():
    deopt 19 [x3];
  D5():
    deopt 26 [r14];
  L12():
    goto L2(r6);
  L18():
    x4 = force? x3;
    checkMissing(x4);
    max = ldf max in base;
    r13 = dyn max(x4, TRUE);
    check L19() else D4();
  L20():
    goto L3(r14);
  D4():
    deopt 24 [r13];
  L19():
    goto L4(r13);
  }
}