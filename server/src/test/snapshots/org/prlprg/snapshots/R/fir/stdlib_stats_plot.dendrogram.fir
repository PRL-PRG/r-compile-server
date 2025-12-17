fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2636108617;
    st `plot.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2636108617(x, type, center, `edge.root`, nodePar, edgePar, leaflab, dLeaf, xlab, ylab, xaxt, yaxt, horiz, `frame.plot`, xlim, ylim, `...`) {
  (reg x:*, reg type:*, reg center:*, reg edge_root:*, reg nodePar:*, reg edgePar:*, reg leaflab:*, reg dLeaf:*, reg xlab:*, reg ylab:*, reg xaxt:*, reg yaxt:*, reg horiz:*, reg frame_plot:*, reg xlim:*, reg ylim:*, reg ddd:dots) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var center:*, reg center_isMissing:L, reg center_orDefault:*, var `edge.root`:*, reg edge_root_isMissing:L, reg edge_root_orDefault:*, reg is_leaf:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c6:L, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c9:L, reg r9:V, reg x3:*, reg x4:V, reg attr:cls, reg r10:V, reg c10:V, reg r11:V, reg c11:L, reg c12:V, reg p2:p(V +), var nodePar:*, reg nodePar_isMissing:L, reg nodePar_orDefault:*, var edgePar:*, reg edgePar_isMissing:L, reg edgePar_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg list:cls, reg r15:V, reg p3:p(V +), var leaflab:*, reg leaflab_isMissing:L, reg leaflab_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg c14:cls, reg r19:V, reg p4:p(V +), var dLeaf:*, reg dLeaf_isMissing:L, reg dLeaf_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xaxt:*, reg xaxt_isMissing:L, reg xaxt_orDefault:*, var yaxt:*, reg yaxt_isMissing:L, reg yaxt_orDefault:*, var horiz:*, reg horiz_isMissing:L, reg horiz_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, var xlim:*, var ylim:*, var `...`:dots?, reg match_arg:cls, reg type1:*, reg type2:V, reg p5:p(V +), reg r22:V, reg match_arg1:cls, reg leaflab1:*, reg leaflab2:V, reg p6:p(V +), reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg x5:*, reg x6:V, reg attr1:cls, reg r27:V, reg edge_root1:*, reg edge_root2:V, reg c15:L, reg c17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg c20:L, reg r29:V, reg edge_root3:*, reg edge_root4:V, reg c21:L, reg c22:L, reg c23:V, reg c25:L, reg is_leaf1:cls, reg x7:*, reg x8:V, reg p7:p(V +), reg r31:V, reg c26:L, reg r34:R, reg r35:V, reg hgt:*, reg hgt1:V, reg r36:V, reg _memberDend:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r39:V, reg hgt2:*, reg hgt3:V, reg edge_root5:*, reg edge_root6:V, reg r40:V, reg center1:*, reg center2:V, reg c27:L, reg mem_x:*, reg mem_x1:V, reg r41:V, reg mem_x2:*, reg mem_x3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg x11:*, reg x12:V, reg r45:V, reg x13:*, reg x14:V, reg r46:V, reg c28:cls, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg yTop:*, reg yTop1:V, reg c29:cls, reg r50:V, reg horiz1:*, reg horiz2:V, reg c30:L, reg xl_:*, reg xl_1:V, reg rev:cls, reg yl_:*, reg yl_1:V, reg p9:p(V +), reg r52:V, reg tmp:*, reg tmp1:V, reg xaxt1:*, reg xaxt2:V, reg yaxt1:*, reg yaxt2:V, reg tmp2:*, reg tmp3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg missing:cls, reg r55:V, reg c31:L, reg c32:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg c36:L, reg r57:V, reg xlim1:*, reg xlim2:V, reg c37:V, reg c38:L, reg c39:V, reg c41:L, reg xl_2:*, reg xl_3:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg missing1:cls, reg r60:V, reg c42:L, reg c43:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg c47:L, reg r62:V, reg ylim1:*, reg ylim2:V, reg c48:V, reg c49:L, reg c50:V, reg c52:L, reg yl_2:*, reg yl_3:V, reg dev_hold:cls, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg on_exit:cls, reg r66:V, reg plot:cls, reg xlim3:*, reg xlim4:V, reg p10:p(V +), reg ylim3:*, reg ylim4:V, reg p11:p(V +), reg xlab1:*, reg xlab2:V, reg p12:p(V +), reg ylab1:*, reg ylab2:V, reg p13:p(V +), reg xaxt3:*, reg xaxt4:V, reg p14:p(V +), reg yaxt3:*, reg yaxt4:V, reg p15:p(V +), reg frame_plot1:*, reg frame_plot2:V, reg p16:p(V +), reg ddd1:dots?, reg r74:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r75:V, reg r76:V, reg dLeaf1:*, reg dLeaf2:V, reg c53:V, reg c54:L, reg horiz3:*, reg horiz4:V, reg c55:L, reg strwidth:cls, reg r79:V, reg r80:R, reg r81:V, reg strheight:cls, reg r82:V, reg r83:V, reg edge_root7:*, reg edge_root8:V, reg c56:L, reg plotNodeLimit:cls, reg x15:*, reg x16:V, reg p17:p(V +), reg x17:*, reg x18:V, reg p18:p(V +), reg x19:*, reg x20:V, reg p19:p(V +), reg center3:*, reg center4:V, reg p20:p(V +), reg r89:V, reg c57:L, reg r91:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r92:V, reg horiz5:*, reg horiz6:V, reg c58:L, reg segments:cls, reg hgt4:*, reg hgt5:V, reg p21:p(V +), reg x21:*, reg x22:V, reg p22:p(V +), reg yTop2:*, reg yTop3:V, reg p23:p(V +), reg x23:*, reg x24:V, reg p24:p(V +), reg r97:V, reg segments1:cls, reg x25:*, reg x26:V, reg p25:p(V +), reg hgt6:*, reg hgt7:V, reg p26:p(V +), reg x27:*, reg x28:V, reg p27:p(V +), reg yTop4:*, reg yTop5:V, reg p28:p(V +), reg r103:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r104:V, reg r105:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r106:V, reg r107:V, reg x29:*, reg x30:V, reg attr2:cls, reg r108:V, reg c59:V, reg r109:V, reg c60:L, reg mean:cls, reg hgt8:*, reg hgt9:V, reg p29:p(V +), reg yTop6:*, reg yTop7:V, reg p30:p(V +), reg r112:V, reg horiz7:*, reg horiz8:V, reg c61:L, reg text:cls, reg my:*, reg my1:V, reg p31:p(V +), reg x31:*, reg x32:V, reg p32:p(V +), reg et:*, reg et1:V, reg p33:p(V +), reg r116:V, reg r117:V, reg text1:cls, reg x33:*, reg x34:V, reg p34:p(V +), reg my2:*, reg my3:V, reg p35:p(V +), reg et2:*, reg et3:V, reg p36:p(V +), reg r121:V, reg r122:V, reg plotNode:cls, reg x35:*, reg x36:V, reg p37:p(V +), reg x37:*, reg x38:V, reg p38:p(V +), reg x39:*, reg x40:V, reg p39:p(V +), reg type3:*, reg type4:V, reg p40:p(V +), reg center5:*, reg center6:V, reg p41:p(V +), reg leaflab3:*, reg leaflab4:V, reg p42:p(V +), reg dLeaf3:*, reg dLeaf4:V, reg p43:p(V +), reg nodePar1:*, reg nodePar2:V, reg p44:p(V +), reg edgePar1:*, reg edgePar2:V, reg p45:p(V +), reg horiz9:*, reg horiz10:V, reg p46:p(V +), reg r134:V |
    mkenv;
    st x = x;
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
      r2 = dyn c("rectangle", "triangle");
      goto L0(r2);
    L2():
      r = dyn base("rectangle", "triangle");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    center_isMissing = missing.0(center);
    if center_isMissing then L2(FALSE) else L2(center);
  L2(center_orDefault):
    st center = center_orDefault;
    edge_root_isMissing = missing.0(edge_root);
    if edge_root_isMissing then L3() else L4(edge_root);
  L3():
    p2 = prom<V +>{
      is_leaf = ldf `is.leaf`;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r5 = dyn is_leaf(p1);
      c1 = `as.logical`(r5);
      if c1 then L0(c1) else L3();
    L0(c2):
      return c2;
    L3():
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L1(c6, r7):
      r11 = `!`(r7);
      c11 = `as.logical`(r11);
      c12 = `||`(c6, c11);
      goto L0(c12);
    L4():
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L5():
      r6 = dyn base1(<lang attr(x, "edgetext")>);
      goto L1(c1, r6);
    L2(c9, r9):
      c10 = `==`(r9, NULL);
      goto L1(c9, c10);
    L6():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r10 = dyn attr(x4, "edgetext");
      goto L2(c1, r10);
    L7():
      r8 = dyn base2(<sym x>, "edgetext");
      goto L2(c1, r8);
    };
    goto L4(p2);
  L4(edge_root_orDefault):
    st `edge.root` = edge_root_orDefault;
    nodePar_isMissing = missing.0(nodePar);
    if nodePar_isMissing then L5(NULL) else L5(nodePar);
  L5(nodePar_orDefault):
    st nodePar = nodePar_orDefault;
    edgePar_isMissing = missing.0(edgePar);
    if edgePar_isMissing then L6() else L7(edgePar);
  L6():
    p3 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      list = ldf list in base;
      r15 = dyn list();
      goto L0(r15);
    L2():
      r13 = dyn base3();
      goto L0(r13);
    };
    goto L7(p3);
  L7(edgePar_orDefault):
    st edgePar = edgePar_orDefault;
    leaflab_isMissing = missing.0(leaflab);
    if leaflab_isMissing then L8() else L9(leaflab);
  L8():
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c14 = ldf c in base;
      r19 = dyn c14("perpendicular", "textlike", "none");
      goto L0(r19);
    L2():
      r17 = dyn base4("perpendicular", "textlike", "none");
      goto L0(r17);
    };
    goto L9(p4);
  L9(leaflab_orDefault):
    st leaflab = leaflab_orDefault;
    dLeaf_isMissing = missing.0(dLeaf);
    if dLeaf_isMissing then L10(NULL) else L10(dLeaf);
  L10(dLeaf_orDefault):
    st dLeaf = dLeaf_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L11("") else L11(xlab);
  L11(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L12("") else L12(ylab);
  L12(ylab_orDefault):
    st ylab = ylab_orDefault;
    xaxt_isMissing = missing.0(xaxt);
    if xaxt_isMissing then L13("n") else L13(xaxt);
  L13(xaxt_orDefault):
    st xaxt = xaxt_orDefault;
    yaxt_isMissing = missing.0(yaxt);
    if yaxt_isMissing then L14("s") else L14(yaxt);
  L14(yaxt_orDefault):
    st yaxt = yaxt_orDefault;
    horiz_isMissing = missing.0(horiz);
    if horiz_isMissing then L15(FALSE) else L15(horiz);
  L15(horiz_orDefault):
    st horiz = horiz_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L16(FALSE) else L16(frame_plot);
  L16(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    st xlim = xlim;
    st ylim = ylim;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L56() else D0();
  D0():
    deopt 1 [];
  L56():
    p5 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r22 = dyn match_arg(p5);
    check L57() else D1();
  D1():
    deopt 3 [r22];
  L57():
    st type = r22;
    match_arg1 = ldf `match.arg`;
    check L58() else D2();
  D2():
    deopt 6 [];
  L58():
    p6 = prom<V +>{
      leaflab1 = ld leaflab;
      leaflab2 = force? leaflab1;
      checkMissing(leaflab2);
      return leaflab2;
    };
    r24 = dyn match_arg1(p6);
    check L59() else D3();
  D3():
    deopt 8 [r24];
  L59():
    st leaflab = r24;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L17(r26):
    st hgt = r26;
    edge_root1 = ld `edge.root`;
    check L64() else D6();
  L60():
    x5 = ld x;
    check L62() else D4();
  L61():
    r25 = dyn base5(<sym x>, "height");
    goto L17(r25);
  D4():
    deopt 12 [x5];
  D6():
    deopt 18 [edge_root1];
  L62():
    x6 = force? x5;
    checkMissing(x6);
    attr1 = ldf attr in base;
    r27 = dyn attr1(x6, "height");
    check L63() else D5();
  L64():
    edge_root2 = force? edge_root1;
    checkMissing(edge_root2);
    c15 = `as.logical`(edge_root2);
    if c15 then L65() else L18(c15);
  D5():
    deopt 16 [r27];
  L18(c17):
    c25 = `as.logical`(c17);
    if c25 then L70() else L20();
  L63():
    goto L17(r27);
  L65():
    sym6 = ldf `is.logical`;
    base6 = ldf `is.logical` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L19(c20, r29):
    c22 = `as.logical`(r29);
    c23 = `&&`(c20, c22);
    goto L18(c23);
  L20():
    goto L23();
  L23():
    _memberDend = ldf `.memberDend`;
    check L77() else D11();
  L66():
    edge_root3 = ld `edge.root`;
    check L68() else D7();
  L67():
    r28 = dyn base6(<sym edge.root>);
    goto L19(c15, r28);
  L70():
    is_leaf1 = ldf `is.leaf`;
    check L71() else D8();
  D7():
    deopt 21 [c15, edge_root3];
  D8():
    deopt 27 [0.0625];
  D11():
    deopt 39 [];
  L68():
    edge_root4 = force? edge_root3;
    checkMissing(edge_root4);
    c21 = `is.logical`(edge_root4);
    goto L19(c15, c21);
  L71():
    p7 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r31 = dyn is_leaf1(p7);
    check L72() else D9();
  L77():
    p8 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r39 = dyn _memberDend(p8);
    check L78() else D12();
  D9():
    deopt 29 [0.0625, r31];
  D12():
    deopt 41 [r39];
  L72():
    c26 = `as.logical`(r31);
    if c26 then L73() else L21();
  L78():
    st `mem.x` = r39;
    hgt2 = ld hgt;
    check L79() else D13();
  D13():
    deopt 43 [hgt2];
  L21():
    hgt = ld hgt;
    check L75() else D10();
  L22(r34, r35):
    r36 = `*`(r34, r35);
    st `edge.root` = r36;
    goto L23();
  L73():
    goto L22(0.0625, 1.0);
  L79():
    hgt3 = force? hgt2;
    checkMissing(hgt3);
    edge_root5 = ld `edge.root`;
    check L80() else D14();
  D10():
    deopt 32 [0.0625, hgt];
  D14():
    deopt 44 [hgt3, edge_root5];
  L75():
    hgt1 = force? hgt;
    checkMissing(hgt1);
    goto L22(0.0625, hgt1);
  L80():
    edge_root6 = force? edge_root5;
    checkMissing(edge_root6);
    r40 = `+`(hgt3, edge_root6);
    st yTop = r40;
    center1 = ld center;
    check L81() else D15();
  D15():
    deopt 48 [center1];
  L81():
    center2 = force? center1;
    checkMissing(center2);
    c27 = `as.logical`(center2);
    if c27 then L82() else L24();
  L24():
    st x1 = 1.0;
    mem_x2 = ld `mem.x`;
    check L85() else D17();
  L25():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L86() else L87();
  L82():
    st x1 = 0.5;
    mem_x = ld `mem.x`;
    check L83() else D16();
  D16():
    deopt 53 [mem_x];
  D17():
    deopt 61 [mem_x2];
  L26(r44):
    st `xl.` = r44;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L91() else L92();
  L83():
    mem_x1 = force? mem_x;
    checkMissing(mem_x1);
    r41 = `+`(mem_x1, 0.5);
    st x2 = r41;
    goto L25();
  L85():
    mem_x3 = force? mem_x2;
    checkMissing(mem_x3);
    st x2 = mem_x3;
    goto L25();
  L86():
    x11 = ld x1;
    check L88() else D18();
  L87():
    r43 = dyn base7(<lang `-`(x1, `/`(1.0, 2.0))>, <lang `+`(x2, `/`(1.0, 2.0))>);
    goto L26(r43);
  D18():
    deopt 66 [x11];
  L27(r49):
    st `yl.` = r49;
    horiz1 = ld horiz;
    check L95() else D23();
  L88():
    x12 = force? x11;
    checkMissing(x12);
    r45 = `-`(x12, 0.5);
    x13 = ld x2;
    check L89() else D19();
  L91():
    yTop = ld yTop;
    check L93() else D21();
  L92():
    r48 = dyn base8(0.0, <sym yTop>);
    goto L27(r48);
  D19():
    deopt 70 [x13];
  D21():
    deopt 80 [yTop];
  D23():
    deopt 85 [horiz1];
  L89():
    x14 = force? x13;
    checkMissing(x14);
    r46 = `+`(x14, 0.5);
    c28 = ldf c in base;
    r47 = dyn c28(r45, r46);
    check L90() else D20();
  L93():
    yTop1 = force? yTop;
    checkMissing(yTop1);
    c29 = ldf c in base;
    r50 = dyn c29(0.0, yTop1);
    check L94() else D22();
  L95():
    horiz2 = force? horiz1;
    checkMissing(horiz2);
    c30 = `as.logical`(horiz2);
    if c30 then L96() else L28();
  D20():
    deopt 75 [r47];
  D22():
    deopt 83 [r50];
  L28():
    goto L29();
  L29():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  L90():
    goto L26(r47);
  L94():
    goto L27(r50);
  L96():
    xl_ = ld `xl.`;
    check L97() else D24();
  D24():
    deopt 87 [xl_];
  L30(r54):
    c31 = `as.logical`(r54);
    if c31 then L31(c31) else L107();
  L97():
    xl_1 = force? xl_;
    checkMissing(xl_1);
    st tmp = xl_1;
    rev = ldf rev;
    check L98() else D25();
  L105():
    missing = ldf missing in base;
    r55 = dyn missing(<sym xlim>);
    goto L30(r55);
  L106():
    r53 = dyn base9(<sym xlim>);
    goto L30(r53);
  D25():
    deopt 91 [];
  L31(c32):
    c41 = `as.logical`(c32);
    if c41 then L112() else L33();
  L98():
    p9 = prom<V +>{
      yl_ = ld `yl.`;
      yl_1 = force? yl_;
      checkMissing(yl_1);
      return yl_1;
    };
    r52 = dyn rev(p9);
    check L99() else D26();
  L107():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  D26():
    deopt 93 [r52];
  L32(c36, r57):
    c38 = `as.logical`(r57);
    c39 = `||`(c36, c38);
    goto L31(c39);
  L33():
    goto L34();
  L34():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L99():
    st `xl.` = r52;
    tmp = ld tmp;
    check L100() else D27();
  L108():
    xlim1 = ld xlim;
    check L110() else D31();
  L109():
    r56 = dyn base10(<sym xlim>);
    goto L32(c31, r56);
  L112():
    xl_2 = ld `xl.`;
    check L113() else D32();
  D27():
    deopt 95 [tmp];
  D31():
    deopt 113 [c31, xlim1];
  D32():
    deopt 117 [xl_2];
  L35(r59):
    c42 = `as.logical`(r59);
    if c42 then L36(c42) else L117();
  L100():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    st `yl.` = tmp1;
    xaxt1 = ld xaxt;
    check L101() else D28();
  L110():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c37 = `==`(xlim2, NULL);
    goto L32(c31, c37);
  L113():
    xl_3 = force? xl_2;
    checkMissing(xl_3);
    st xlim = xl_3;
    goto L34();
  L115():
    missing1 = ldf missing in base;
    r60 = dyn missing1(<sym ylim>);
    goto L35(r60);
  L116():
    r58 = dyn base11(<sym ylim>);
    goto L35(r58);
  D28():
    deopt 98 [xaxt1];
  L36(c43):
    c52 = `as.logical`(c43);
    if c52 then L122() else L38();
  L101():
    xaxt2 = force? xaxt1;
    checkMissing(xaxt2);
    st tmp = xaxt2;
    yaxt1 = ld yaxt;
    check L102() else D29();
  L117():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L118() else L119();
  D29():
    deopt 101 [yaxt1];
  L37(c47, r62):
    c49 = `as.logical`(r62);
    c50 = `||`(c47, c49);
    goto L36(c50);
  L38():
    goto L39();
  L39():
    dev_hold = ldf `dev.hold`;
    check L125() else D35();
  L102():
    yaxt2 = force? yaxt1;
    checkMissing(yaxt2);
    st xaxt = yaxt2;
    tmp2 = ld tmp;
    check L103() else D30();
  L118():
    ylim1 = ld ylim;
    check L120() else D33();
  L119():
    r61 = dyn base12(<sym ylim>);
    goto L37(c42, r61);
  L122():
    yl_2 = ld `yl.`;
    check L123() else D34();
  D30():
    deopt 104 [tmp2];
  D33():
    deopt 126 [c42, ylim1];
  D34():
    deopt 130 [yl_2];
  D35():
    deopt 136 [];
  L103():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    st yaxt = tmp3;
    goto L29();
  L120():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c48 = `==`(ylim2, NULL);
    goto L37(c42, c48);
  L123():
    yl_3 = force? yl_2;
    checkMissing(yl_3);
    st ylim = yl_3;
    goto L39();
  L125():
    r63 = dyn dev_hold();
    check L126() else D36();
  D36():
    deopt 137 [r63];
  L126():
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L127() else L128();
  L40():
    plot = ldf plot;
    check L129() else D37();
  L127():
    on_exit = ldf `on.exit` in base;
    r66 = dyn on_exit(<lang dev.flush()>);
    goto L40();
  L128():
    r64 = dyn base13(<lang dev.flush()>);
    goto L40();
  D37():
    deopt 142 [];
  L129():
    p10 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p11 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p12 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p13 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p14 = prom<V +>{
      xaxt3 = ld xaxt;
      xaxt4 = force? xaxt3;
      checkMissing(xaxt4);
      return xaxt4;
    };
    p15 = prom<V +>{
      yaxt3 = ld yaxt;
      yaxt4 = force? yaxt3;
      checkMissing(yaxt4);
      return yaxt4;
    };
    p16 = prom<V +>{
      frame_plot1 = ld `frame.plot`;
      frame_plot2 = force? frame_plot1;
      checkMissing(frame_plot2);
      return frame_plot2;
    };
    ddd1 = ld `...`;
    r74 = dyn plot[, xlim, ylim, type, xlab, ylab, xaxt, yaxt, `frame.plot`, `...`](0.0, p10, p11, "n", p12, p13, p14, p15, p16, ddd1);
    check L130() else D38();
  D38():
    deopt 161 [r74];
  L130():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L131() else L132();
  L41(r76):
    c54 = `as.logical`(r76);
    if c54 then L134() else L42();
  L131():
    dLeaf1 = ld dLeaf;
    check L133() else D39();
  L132():
    r75 = dyn base14(<sym dLeaf>);
    goto L41(r75);
  D39():
    deopt 163 [dLeaf1];
  L42():
    goto L45();
  L45():
    edge_root7 = ld `edge.root`;
    check L143() else D45();
  L133():
    dLeaf2 = force? dLeaf1;
    checkMissing(dLeaf2);
    c53 = `==`(dLeaf2, NULL);
    goto L41(c53);
  L134():
    horiz3 = ld horiz;
    check L135() else D40();
  D40():
    deopt 167 [0.75, horiz3];
  D45():
    deopt 181 [edge_root7];
  L135():
    horiz4 = force? horiz3;
    checkMissing(horiz4);
    c55 = `as.logical`(horiz4);
    if c55 then L136() else L43();
  L143():
    edge_root8 = force? edge_root7;
    checkMissing(edge_root8);
    c56 = `as.logical`(edge_root8);
    if c56 then L144() else L46();
  L43():
    strheight = ldf strheight;
    check L140() else D43();
  L44(r80, r81):
    r83 = `*`(r80, r81);
    st dLeaf = r83;
    goto L45();
  L46():
    goto L55();
  L55():
    plotNode = ldf plotNode;
    check L176() else D62();
  L136():
    strwidth = ldf strwidth;
    check L137() else D41();
  L144():
    plotNodeLimit = ldf plotNodeLimit;
    check L145() else D46();
  D41():
    deopt 170 [0.75];
  D43():
    deopt 174 [0.75];
  D46():
    deopt 184 [];
  D62():
    deopt 244 [];
  L137():
    r79 = dyn strwidth("w");
    check L138() else D42();
  L140():
    r82 = dyn strheight("x");
    check L141() else D44();
  L145():
    p17 = prom<V +>{
      x15 = ld x1;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p18 = prom<V +>{
      x17 = ld x2;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p19 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    p20 = prom<V +>{
      center3 = ld center;
      center4 = force? center3;
      checkMissing(center4);
      return center4;
    };
    r89 = dyn plotNodeLimit(p17, p18, p19, p20);
    check L146() else D47();
  L176():
    p37 = prom<V +>{
      x35 = ld x1;
      x36 = force? x35;
      checkMissing(x36);
      return x36;
    };
    p38 = prom<V +>{
      x37 = ld x2;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    p39 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    p40 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p41 = prom<V +>{
      center5 = ld center;
      center6 = force? center5;
      checkMissing(center6);
      return center6;
    };
    p42 = prom<V +>{
      leaflab3 = ld leaflab;
      leaflab4 = force? leaflab3;
      checkMissing(leaflab4);
      return leaflab4;
    };
    p43 = prom<V +>{
      dLeaf3 = ld dLeaf;
      dLeaf4 = force? dLeaf3;
      checkMissing(dLeaf4);
      return dLeaf4;
    };
    p44 = prom<V +>{
      nodePar1 = ld nodePar;
      nodePar2 = force? nodePar1;
      checkMissing(nodePar2);
      return nodePar2;
    };
    p45 = prom<V +>{
      edgePar1 = ld edgePar;
      edgePar2 = force? edgePar1;
      checkMissing(edgePar2);
      return edgePar2;
    };
    p46 = prom<V +>{
      horiz9 = ld horiz;
      horiz10 = force? horiz9;
      checkMissing(horiz10);
      return horiz10;
    };
    r134 = dyn plotNode[, , , type, center, leaflab, dLeaf, nodePar, edgePar, horiz](p37, p38, p39, p40, p41, p42, p43, p44, p45, p46);
    check L177() else D63();
  D42():
    deopt 172 [0.75, r79];
  D44():
    deopt 176 [0.75, r82];
  D47():
    deopt 189 [r89];
  D63():
    deopt 262 [r134];
  L138():
    goto L44(0.75, r79);
  L141():
    goto L44(0.75, r82);
  L146():
    c57 = `is.object`(r89);
    if c57 then L148() else L149(r89);
  L177():
    popenv;
    return r134;
  L147(dx1):
    st x0 = dx1;
    horiz5 = ld horiz;
    check L151() else D48();
  L148():
    dr = tryDispatchBuiltin.1("$", r89);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L150() else L149(dr);
  L149(r91):
    r92 = `$`(r91, <sym x>);
    goto L147(r92);
  D48():
    deopt 192 [horiz5];
  L150():
    dx = getTryDispatchBuiltinValue(dr);
    goto L147(dx);
  L151():
    horiz6 = force? horiz5;
    checkMissing(horiz6);
    c58 = `as.logical`(horiz6);
    if c58 then L152() else L47();
  L47():
    segments1 = ldf segments;
    check L156() else D51();
  L48():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L158() else L159();
  L152():
    segments = ldf segments;
    check L153() else D49();
  D49():
    deopt 195 [];
  D51():
    deopt 202 [];
  L49(r105):
    r109 = `!`(r105);
    c60 = `as.logical`(r109);
    if c60 then L164() else L51();
  L153():
    p21 = prom<V +>{
      hgt4 = ld hgt;
      hgt5 = force? hgt4;
      checkMissing(hgt5);
      return hgt5;
    };
    p22 = prom<V +>{
      x21 = ld x0;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p23 = prom<V +>{
      yTop2 = ld yTop;
      yTop3 = force? yTop2;
      checkMissing(yTop3);
      return yTop3;
    };
    p24 = prom<V +>{
      x23 = ld x0;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r97 = dyn segments(p21, p22, p23, p24);
    check L154() else D50();
  L156():
    p25 = prom<V +>{
      x25 = ld x0;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p26 = prom<V +>{
      hgt6 = ld hgt;
      hgt7 = force? hgt6;
      checkMissing(hgt7);
      return hgt7;
    };
    p27 = prom<V +>{
      x27 = ld x0;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p28 = prom<V +>{
      yTop4 = ld yTop;
      yTop5 = force? yTop4;
      checkMissing(yTop5);
      return yTop5;
    };
    r103 = dyn segments1(p25, p26, p27, p28);
    check L157() else D52();
  L158():
    sym16 = ldf attr;
    base16 = ldf attr in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L160() else L161();
  L159():
    r104 = dyn base15(<lang `<-`(et, attr(x, "edgetext"))>);
    goto L49(r104);
  D50():
    deopt 200 [r97];
  D52():
    deopt 207 [r103];
  L50(r107):
    st et = r107;
    c59 = `==`(r107, NULL);
    goto L49(c59);
  L51():
    goto L54(NULL);
  L54(r122):
    goto L55();
  L154():
    goto L48();
  L157():
    goto L48();
  L160():
    x29 = ld x;
    check L162() else D53();
  L161():
    r106 = dyn base16(<sym x>, "edgetext");
    goto L50(r106);
  L164():
    mean = ldf mean;
    check L165() else D55();
  D53():
    deopt 211 [x29];
  D55():
    deopt 220 [];
  L162():
    x30 = force? x29;
    checkMissing(x30);
    attr2 = ldf attr in base;
    r108 = dyn attr2(x30, "edgetext");
    check L163() else D54();
  L165():
    p29 = prom<V +>{
      hgt8 = ld hgt;
      hgt9 = force? hgt8;
      checkMissing(hgt9);
      return hgt9;
    };
    p30 = prom<V +>{
      yTop6 = ld yTop;
      yTop7 = force? yTop6;
      checkMissing(yTop7);
      return yTop7;
    };
    r112 = dyn mean(p29, p30);
    check L166() else D56();
  D54():
    deopt 215 [r108];
  D56():
    deopt 223 [r112];
  L163():
    goto L50(r108);
  L166():
    st my = r112;
    horiz7 = ld horiz;
    check L167() else D57();
  D57():
    deopt 225 [horiz7];
  L167():
    horiz8 = force? horiz7;
    checkMissing(horiz8);
    c61 = `as.logical`(horiz8);
    if c61 then L168() else L52();
  L52():
    text1 = ldf text;
    check L172() else D60();
  L53(r117):
    goto L54(r117);
  L168():
    text = ldf text;
    check L169() else D58();
  D58():
    deopt 228 [];
  D60():
    deopt 234 [];
  L169():
    p31 = prom<V +>{
      my = ld my;
      my1 = force? my;
      checkMissing(my1);
      return my1;
    };
    p32 = prom<V +>{
      x31 = ld x0;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p33 = prom<V +>{
      et = ld et;
      et1 = force? et;
      checkMissing(et1);
      return et1;
    };
    r116 = dyn text(p31, p32, p33);
    check L170() else D59();
  L172():
    p34 = prom<V +>{
      x33 = ld x0;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    p35 = prom<V +>{
      my2 = ld my;
      my3 = force? my2;
      checkMissing(my3);
      return my3;
    };
    p36 = prom<V +>{
      et2 = ld et;
      et3 = force? et2;
      checkMissing(et3);
      return et3;
    };
    r121 = dyn text1(p34, p35, p36);
    check L173() else D61();
  D59():
    deopt 232 [r116];
  D61():
    deopt 238 [r121];
  L170():
    goto L53(r116);
  L173():
    goto L53(r121);
  }
}