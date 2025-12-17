fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3567768494;
    st `plot.hclust` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3567768494(x, labels, hang, check, axes, `frame.plot`, ann, main, sub, xlab, ylab, `...`) {
  (reg x:*, reg labels:*, reg hang:*, reg check:*, reg axes:*, reg frame_plot:*, reg ann:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var hang:*, reg hang_isMissing:L, reg hang_orDefault:*, var check:*, reg check_isMissing:L, reg check_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg check1:*, reg check2:V, reg c1:L, reg c3:V, reg isTRUE:cls, reg _validity_hclust:cls, reg x5:*, reg x6:V, reg p:p(V +), reg merge:*, reg merge1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg r6:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg msg:*, reg msg1:V, reg p3:p(V +), reg r8:V, reg l:*, reg storage_mode__:cls, reg r10:V, reg nrow:cls, reg merge2:*, reg merge3:V, reg p4:p(V +), reg r12:V, reg n1:*, reg n2:V, reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg x7:*, reg x8:V, reg c8:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg as_double:cls, reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg missing:cls, reg r20:V, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg c14:L, reg r22:V, reg labels1:*, reg labels2:V, reg c15:V, reg c16:L, reg c17:V, reg c19:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg ____:cls, reg x11:*, reg x12:V, reg c20:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r25:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg n3:*, reg n4:V, reg r29:I, reg p6:p(V +), reg r31:V, reg as_character:cls, reg r32:V, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg labels3:*, reg labels4:V, reg c21:L, reg c22:L, reg c24:V, reg labels5:*, reg labels6:V, reg r36:V, reg c25:L, reg c26:V, reg c28:L, reg character:cls, reg n5:*, reg n6:V, reg p7:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg labels7:*, reg labels8:V, reg as_character1:cls, reg r40:V, reg dev_hold:cls, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg on_exit:cls, reg r44:V, reg plot_new:cls, reg r45:V, reg ___:cls, reg r46:V, reg r47:cls, reg n7:*, reg n8:V, reg p8:p(V +), reg merge4:*, reg merge5:V, reg p9:p(V +), reg height:*, reg height1:V, reg p10:p(V +), reg order:cls, reg x15:*, reg x16:V, reg c29:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r51:V, reg p11:p(V +), reg r53:V, reg p12:p(V +), reg hang1:*, reg hang2:V, reg p13:p(V +), reg labels9:*, reg labels10:V, reg p14:p(V +), reg ddd1:dots?, reg r57:V, reg axes1:*, reg axes2:V, reg c30:L, reg axis:cls, reg pretty:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg height2:*, reg height3:V, reg range:cls, reg r60:V, reg p15:p(V +), reg r62:V, reg p16:p(V +), reg ddd2:dots?, reg r64:V, reg frame_plot1:*, reg frame_plot2:V, reg c31:L, reg box:cls, reg ddd3:dots?, reg r66:V, reg ann1:*, reg ann2:V, reg c32:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg x19:*, reg x20:V, reg c33:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r70:V, reg c34:V, reg r71:V, reg c35:L, reg c37:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg c40:L, reg r73:V, reg sub1:*, reg sub2:V, reg c41:V, reg c42:L, reg c43:V, reg c45:L, reg paste0:cls, reg deparse:cls, reg cl:*, reg cl1:V, reg c46:L, reg cl3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __:cls, reg r74:V, reg p17:p(V +), reg r76:V, reg p18:p(V +), reg x23:*, reg x24:V, reg c47:L, reg x26:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r78:V, reg p19:p(V +), reg r80:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:V, reg xlab1:*, reg xlab2:V, reg c48:V, reg c49:L, reg c51:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r84:V, reg c54:L, reg r85:V, reg cl4:*, reg cl5:V, reg c55:V, reg r86:V, reg c56:L, reg c57:V, reg c59:L, reg deparse1:cls, reg cl6:*, reg cl7:V, reg c60:L, reg cl9:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __1:cls, reg r87:V, reg p20:p(V +), reg r89:V, reg title:cls, reg main1:*, reg main2:V, reg p21:p(V +), reg sub3:*, reg sub4:V, reg p22:p(V +), reg xlab3:*, reg xlab4:V, reg p23:p(V +), reg ylab1:*, reg ylab2:V, reg p24:p(V +), reg ddd4:dots?, reg r95:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg invisible:cls, reg r99:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0(NULL) else L0(labels);
  L0(labels_orDefault):
    st labels = labels_orDefault;
    hang_isMissing = missing.0(hang);
    if hang_isMissing then L1(0.1) else L1(hang);
  L1(hang_orDefault):
    st hang = hang_orDefault;
    check_isMissing = missing.0(check);
    if check_isMissing then L2(TRUE) else L2(check);
  L2(check_orDefault):
    st check = check_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L3(TRUE) else L3(axes);
  L3(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L4(FALSE) else L4(frame_plot);
  L4(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L5(TRUE) else L5(ann);
  L5(ann_orDefault):
    st ann = ann_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L6("Cluster Dendrogram") else L6(main);
  L6(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L7(NULL) else L7(sub);
  L7(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L8(NULL) else L8(xlab);
  L8(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L9("Height") else L9(ylab);
  L9(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L41() else D0();
  D0():
    deopt 0 [x1];
  L41():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L43() else L44(x2);
  L42(dx1):
    st merge = dx1;
    check1 = ld check;
    check L46() else D1();
  L43():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(dr);
  L44(x4):
    r = `$`(x4, <sym merge>);
    goto L42(r);
  D1():
    deopt 4 [check1];
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L42(dx);
  L46():
    check2 = force? check1;
    checkMissing(check2);
    c1 = `as.logical`(check2);
    if c1 then L47() else L10(c1);
  L10(c3):
    c7 = `as.logical`(c3);
    if c7 then L51() else L11();
  L47():
    isTRUE = ldf isTRUE;
    check L48() else D2();
  D2():
    deopt 7 [c1];
  L11():
    goto L12();
  L12():
    l = ld merge;
    storage_mode__ = ldf `storage.mode<-`;
    check L55() else D6();
  L48():
    p2 = prom<V +>{
      _validity_hclust = ldf `.validity.hclust`;
      p = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p1 = prom<V +>{
        merge = ld merge;
        merge1 = force? merge;
        checkMissing(merge1);
        return merge1;
      };
      r3 = dyn _validity_hclust(p, p1);
      st msg = r3;
      invisible.0();
      return r3;
    };
    r5 = dyn isTRUE(p2);
    check L49() else D3();
  L51():
    stop = ldf stop;
    check L52() else D4();
  D3():
    deopt 9 [c1, r5];
  D4():
    deopt 13 [];
  D6():
    deopt 21 ["integer", l, "integer"];
  L49():
    r6 = `!`(r5);
    c4 = `as.logical`(r6);
    c5 = `&&`(c1, c4);
    goto L10(c5);
  L52():
    p3 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r8 = dyn stop(p3);
    check L53() else D5();
  L55():
    r10 = dyn storage_mode__(l, NULL, "integer");
    check L56() else D7();
  D5():
    deopt 15 [r8];
  D7():
    deopt 23 ["integer", r10];
  L53():
    goto L12();
  L56():
    st merge = r10;
    nrow = ldf nrow;
    check L57() else D8();
  D8():
    deopt 26 [];
  L57():
    p4 = prom<V +>{
      merge2 = ld merge;
      merge3 = force? merge2;
      checkMissing(merge3);
      return merge3;
    };
    r12 = dyn nrow(p4);
    check L58() else D9();
  D9():
    deopt 28 [r12];
  L58():
    st n1 = r12;
    n1 = ld n1;
    check L59() else D10();
  D10():
    deopt 30 [n1];
  L59():
    n2 = force? n1;
    checkMissing(n2);
    r13 = `+`(n2, 1);
    st n = r13;
    sym = ldf `as.double`;
    base = ldf `as.double` in base;
    guard = `==`.4(sym, base);
    if guard then L60() else L61();
  L13(r15):
    st height = r15;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L60():
    x7 = ld x;
    check L62() else D11();
  L61():
    r14 = dyn base(<lang `$`(x, height)>);
    goto L13(r14);
  D11():
    deopt 37 [x7];
  L14(r19):
    c9 = `as.logical`(r19);
    if c9 then L15(c9) else L70();
  L62():
    x8 = force? x7;
    checkMissing(x8);
    c8 = `is.object`(x8);
    if c8 then L64() else L65(x8);
  L68():
    missing = ldf missing in base;
    r20 = dyn missing(<sym labels>);
    goto L14(r20);
  L69():
    r18 = dyn base1(<sym labels>);
    goto L14(r18);
  L15(c10):
    c19 = `as.logical`(c10);
    if c19 then L75() else L17();
  L63(dx3):
    as_double = ldf `as.double` in base;
    r17 = dyn as_double(dx3);
    check L67() else D12();
  L64():
    dr2 = tryDispatchBuiltin.1("$", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(x10):
    r16 = `$`(x10, <sym height>);
    goto L63(r16);
  L70():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L71() else L72();
  D12():
    deopt 41 [r17];
  L16(c14, r22):
    c16 = `as.logical`(r22);
    c17 = `||`(c14, c16);
    goto L15(c17);
  L17():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L19(r33):
    st labels = r33;
    dev_hold = ldf `dev.hold`;
    check L96() else D23();
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L63(dx2);
  L67():
    goto L13(r17);
  L71():
    labels1 = ld labels;
    check L73() else D13();
  L72():
    r21 = dyn base2(<sym labels>);
    goto L16(c9, r21);
  L75():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L76() else L77();
  D13():
    deopt 47 [c9, labels1];
  D23():
    deopt 80 [];
  L18(r24):
    goto L19(r24);
  L20(r35):
    c22 = `as.logical`(r35);
    if c22 then L85() else L21(c22);
  L73():
    labels2 = force? labels1;
    checkMissing(labels2);
    c15 = `==`(labels2, NULL);
    goto L16(c9, c15);
  L76():
    ____ = ldf `%||%`;
    check L78() else D14();
  L77():
    r23 = dyn base3(<lang `%||%`(`$`(x, labels), seq_len(n))>);
    goto L18(r23);
  L82():
    labels3 = ld labels;
    check L84() else D17();
  L83():
    r34 = dyn base5(<sym labels>);
    goto L20(r34);
  L96():
    r41 = dyn dev_hold();
    check L97() else D24();
  D14():
    deopt 54 [];
  D17():
    deopt 61 [labels3];
  D24():
    deopt 81 [r41];
  L21(c24):
    c28 = `as.logical`(c24);
    if c28 then L88() else L22();
  L78():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c20 = `is.object`(x12);
      if c20 then L1() else L2(x12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x14):
      r25 = `$`(x14, <sym labels>);
      goto L0(r25);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      sym4 = ldf seq_len;
      base4 = ldf seq_len in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r29 = seq_len(n4);
      goto L0(r29);
    L2():
      r27 = dyn base4(<sym n>);
      goto L0(r27);
    };
    r31 = dyn ____(p5, p6);
    check L79() else D15();
  L84():
    labels4 = force? labels3;
    checkMissing(labels4);
    c21 = `is.logical`(labels4);
    goto L20(c21);
  L85():
    labels5 = ld labels;
    check L86() else D18();
  L97():
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  D15():
    deopt 57 [r31];
  D18():
    deopt 64 [c22, labels5];
  L22():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  L23():
    plot_new = ldf `plot.new`;
    check L100() else D25();
  L79():
    as_character = ldf `as.character` in base;
    r32 = dyn as_character(r31);
    check L80() else D16();
  L86():
    labels6 = force? labels5;
    checkMissing(labels6);
    r36 = `!`(labels6);
    c25 = `as.logical`(r36);
    c26 = `&&`(c22, c25);
    goto L21(c26);
  L88():
    character = ldf character;
    check L89() else D19();
  L98():
    on_exit = ldf `on.exit` in base;
    r44 = dyn on_exit(<lang dev.flush()>);
    goto L23();
  L99():
    r42 = dyn base7(<lang dev.flush()>);
    goto L23();
  D16():
    deopt 59 [r32];
  D19():
    deopt 69 [];
  D25():
    deopt 86 [];
  L80():
    goto L18(r32);
  L89():
    p7 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    r38 = dyn character(p7);
    check L90() else D20();
  L92():
    labels7 = ld labels;
    check L94() else D21();
  L93():
    r39 = dyn base6(<sym labels>);
    goto L19(r39);
  L100():
    r45 = dyn plot_new();
    check L101() else D26();
  D20():
    deopt 71 [r38];
  D21():
    deopt 74 [labels7];
  D26():
    deopt 87 [r45];
  L90():
    goto L19(r38);
  L94():
    labels8 = force? labels7;
    checkMissing(labels8);
    as_character1 = ldf `as.character` in base;
    r40 = dyn as_character1(labels8);
    check L95() else D22();
  L101():
    ___ = ldf `:::`;
    check L102() else D27();
  D22():
    deopt 77 [r40];
  D27():
    deopt 89 [];
  L95():
    goto L19(r40);
  L102():
    r46 = dyn ___("graphics", "plotHclust");
    check L103() else D28();
  D28():
    deopt 92 [r46];
  L103():
    checkFun.0(r46);
    r47 = r46 as cls;
    p8 = prom<V +>{
      n7 = ld n1;
      n8 = force? n7;
      checkMissing(n8);
      return n8;
    };
    p9 = prom<V +>{
      merge4 = ld merge;
      merge5 = force? merge4;
      checkMissing(merge5);
      return merge5;
    };
    p10 = prom<V +>{
      height = ld height;
      height1 = force? height;
      checkMissing(height1);
      return height1;
    };
    p12 = prom<V +>{
      order = ldf order;
      p11 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        c29 = `is.object`(x16);
        if c29 then L1() else L2(x16);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x16);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x18):
        r51 = `$`(x18, <sym order>);
        goto L0(r51);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r53 = dyn order(p11);
      return r53;
    };
    p13 = prom<V +>{
      hang1 = ld hang;
      hang2 = force? hang1;
      checkMissing(hang2);
      return hang2;
    };
    p14 = prom<V +>{
      labels9 = ld labels;
      labels10 = force? labels9;
      checkMissing(labels10);
      return labels10;
    };
    ddd1 = ld `...`;
    r57 = dyn r47[, , , , , , `...`](p8, p9, p10, p12, p13, p14, ddd1);
    check L104() else D29();
  D29():
    deopt 101 [r57];
  L104():
    axes1 = ld axes;
    check L105() else D30();
  D30():
    deopt 102 [axes1];
  L105():
    axes2 = force? axes1;
    checkMissing(axes2);
    c30 = `as.logical`(axes2);
    if c30 then L106() else L24();
  L24():
    goto L25();
  L25():
    frame_plot1 = ld `frame.plot`;
    check L110() else D33();
  L106():
    axis = ldf axis;
    check L107() else D31();
  D31():
    deopt 105 [];
  D33():
    deopt 113 [frame_plot1];
  L107():
    p16 = prom<V +>{
      pretty = ldf pretty;
      p15 = prom<V +>{
        sym8 = ldf range;
        base8 = ldf range in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r59):
        return r59;
      L1():
        height2 = ld height;
        height3 = force? height2;
        checkMissing(height3);
        range = ldf range in base;
        r60 = dyn range(height3);
        goto L0(r60);
      L2():
        r58 = dyn base8(<sym height>);
        goto L0(r58);
      };
      r62 = dyn pretty(p15);
      return r62;
    };
    ddd2 = ld `...`;
    r64 = dyn axis[, at, `...`](2.0, p16, ddd2);
    check L108() else D32();
  L110():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c31 = `as.logical`(frame_plot2);
    if c31 then L111() else L26();
  D32():
    deopt 110 [r64];
  L26():
    goto L27();
  L27():
    ann1 = ld ann;
    check L115() else D36();
  L108():
    goto L25();
  L111():
    box = ldf box;
    check L112() else D34();
  D34():
    deopt 116 [];
  D36():
    deopt 121 [ann1];
  L112():
    ddd3 = ld `...`;
    r66 = dyn box[`...`](ddd3);
    check L113() else D35();
  L115():
    ann2 = force? ann1;
    checkMissing(ann2);
    c32 = `as.logical`(ann2);
    if c32 then L116() else L28();
  D35():
    deopt 118 [r66];
  L28():
    goto L39();
  L39():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L148() else L149();
  L113():
    goto L27();
  L116():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L117() else L118();
  L29(r69):
    r71 = `!`(r69);
    c35 = `as.logical`(r71);
    if c35 then L124() else L30(c35);
  L40(r98):
    popenv;
    return r98;
  L117():
    x19 = ld x;
    check L119() else D37();
  L118():
    r68 = dyn base9(<lang `<-`(cl, `$`(x, call))>);
    goto L29(r68);
  L148():
    invisible = ldf invisible in base;
    r99 = dyn invisible();
    check L150() else D47();
  L149():
    r97 = dyn base13();
    goto L40(r97);
  D37():
    deopt 124 [x19];
  D47():
    deopt 179 [r99];
  L30(c37):
    c45 = `as.logical`(c37);
    if c45 then L129() else L32();
  L119():
    x20 = force? x19;
    checkMissing(x20);
    c33 = `is.object`(x20);
    if c33 then L121() else L122(x20);
  L124():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  L150():
    goto L40(r99);
  L31(c40, r73):
    c42 = `as.logical`(r73);
    c43 = `&&`(c40, c42);
    goto L30(c43);
  L32():
    goto L33();
  L33():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L133() else L134();
  L120(dx9):
    st cl = dx9;
    c34 = `==`(dx9, NULL);
    goto L29(c34);
  L121():
    dr8 = tryDispatchBuiltin.1("$", x20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L123() else L122(dr8);
  L122(x22):
    r70 = `$`(x22, <sym call>);
    goto L120(r70);
  L125():
    sub1 = ld sub;
    check L127() else D38();
  L126():
    r72 = dyn base10(<sym sub>);
    goto L31(c35, r72);
  L129():
    paste0 = ldf paste0;
    check L130() else D39();
  D38():
    deopt 131 [c35, sub1];
  D39():
    deopt 136 [];
  L34(r83):
    c49 = `as.logical`(r83);
    if c49 then L136() else L35(c49);
  L123():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L120(dx8);
  L127():
    sub2 = force? sub1;
    checkMissing(sub2);
    c41 = `==`(sub2, NULL);
    goto L31(c35, c41);
  L130():
    p18 = prom<V +>{
      deparse = ldf deparse;
      p17 = prom<V +>{
        cl = ld cl;
        cl1 = force? cl;
        checkMissing(cl1);
        c46 = `is.object`(cl1);
        if c46 then L1() else L2(cl1);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[[", cl1);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(cl3):
        __ = ldf `[[` in base;
        r74 = dyn __(cl3, 1);
        goto L0(r74);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r76 = dyn deparse(p17);
      return r76;
    };
    p19 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      c47 = `is.object`(x24);
      if c47 then L1() else L2(x24);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x24);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x26):
      r78 = `$`(x26, <sym method>);
      goto L0(r78);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r80 = dyn paste0(p18, " (*, \"", p19, "\")");
    check L131() else D40();
  L133():
    xlab1 = ld xlab;
    check L135() else D41();
  L134():
    r82 = dyn base11(<sym xlab>);
    goto L34(r82);
  D40():
    deopt 141 [r80];
  D41():
    deopt 146 [xlab1];
  L35(c51):
    c59 = `as.logical`(c51);
    if c59 then L141() else L37();
  L131():
    st sub = r80;
    goto L33();
  L135():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c48 = `==`(xlab2, NULL);
    goto L34(c48);
  L136():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L137() else L138();
  L36(c54, r85):
    r86 = `!`(r85);
    c56 = `as.logical`(r86);
    c57 = `&&`(c54, c56);
    goto L35(c57);
  L37():
    goto L38();
  L38():
    title = ldf title;
    check L145() else D45();
  L137():
    cl4 = ld cl;
    check L139() else D42();
  L138():
    r84 = dyn base12(<sym cl>);
    goto L36(c49, r84);
  L141():
    deparse1 = ldf deparse;
    check L142() else D43();
  D42():
    deopt 150 [c49, cl4];
  D43():
    deopt 156 [];
  D45():
    deopt 163 [];
  L139():
    cl5 = force? cl4;
    checkMissing(cl5);
    c55 = `==`(cl5, NULL);
    goto L36(c49, c55);
  L142():
    p20 = prom<V +>{
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      c60 = `is.object`(cl7);
      if c60 then L1() else L2(cl7);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", cl7);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(cl9):
      __1 = ldf `[[` in base;
      r87 = dyn __1(cl9, 2);
      goto L0(r87);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r89 = dyn deparse1(p20);
    check L143() else D44();
  L145():
    p21 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p22 = prom<V +>{
      sub3 = ld sub;
      sub4 = force? sub3;
      checkMissing(sub4);
      return sub4;
    };
    p23 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p24 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd4 = ld `...`;
    r95 = dyn title[main, sub, xlab, ylab, `...`](p21, p22, p23, p24, ddd4);
    check L146() else D46();
  D44():
    deopt 158 [r89];
  D46():
    deopt 173 [r95];
  L143():
    st xlab = r89;
    goto L38();
  L146():
    goto L39();
  }
}