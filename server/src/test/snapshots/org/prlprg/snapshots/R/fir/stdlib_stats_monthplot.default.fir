fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2366360405;
    st `monthplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2366360405(x, labels, ylab, times, phase, base, axes, type, box, add, col, lty, lwd, `col.base`, `lty.base`, `lwd.base`, `...`) {
  (reg x:*, reg labels:*, reg ylab:*, reg times:*, reg phase:*, reg base:*, reg axes:*, reg type:*, reg box:*, reg add:*, reg col:*, reg lty:*, reg lwd:*, reg col_base:*, reg lty_base:*, reg lwd_base:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg r:V, reg p:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg deparse1:cls, reg sym:cls, reg base1:cls, reg guard:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), var times:*, reg times_isMissing:L, reg times_orDefault:*, reg sym1:cls, reg base2:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg r10:I, reg p3:p(V +), var phase:*, reg phase_isMissing:L, reg phase_orDefault:*, reg times1:*, reg times2:V, reg r12:V, reg sym2:cls, reg base3:cls, reg guard2:L, reg r13:V, reg r14:V, reg labels1:*, reg labels2:V, reg length:cls, reg r15:V, reg __:cls, reg r16:V, reg r17:V, reg p4:p(V +), var base:*, reg base_isMissing:L, reg base_orDefault:*, reg mean:*, reg mean1:V, reg p5:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym3:cls, reg base4:cls, reg guard3:L, reg r20:V, reg r21:V, reg c:cls, reg r22:V, reg p6:p(V +), var box:*, reg box_isMissing:L, reg box_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r24:V, reg p7:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par1:cls, reg r26:V, reg p8:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par2:cls, reg r28:V, reg p9:p(V +), var `col.base`:*, reg col_base_isMissing:L, reg col_base_orDefault:*, reg col1:*, reg col2:V, reg p10:p(V +), var `lty.base`:*, reg lty_base_isMissing:L, reg lty_base_orDefault:*, reg lty1:*, reg lty2:V, reg p11:p(V +), var `lwd.base`:*, reg lwd_base_isMissing:L, reg lwd_base_orDefault:*, reg lwd1:*, reg lwd2:V, reg p12:p(V +), var `...`:dots?, reg sym4:cls, reg base5:cls, reg guard4:L, reg r33:V, reg r34:V, reg list:cls, reg ddd1:dots?, reg r35:V, reg sym5:cls, reg base6:cls, reg guard5:L, reg r36:V, reg r37:V, reg dots:*, reg dots1:V, reg names:cls, reg r38:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p13:p(V +), reg r40:V, reg sym6:cls, reg base7:cls, reg guard6:L, reg r41:V, reg r42:V, reg labels3:*, reg labels4:V, reg c1:V, reg c2:L, reg c3:V, reg sym7:cls, reg base8:cls, reg guard7:L, reg r43:V, reg c7:L, reg r44:V, reg missing:cls, reg r45:V, reg c8:L, reg c11:L, reg c12:V, reg sym8:cls, reg base9:cls, reg guard8:L, reg r46:V, reg c17:L, reg c18:L, reg r47:V, reg missing1:cls, reg r48:V, reg r49:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg unique:cls, reg phase1:*, reg phase2:V, reg p14:p(V +), reg r51:V, reg sym9:cls, reg base10:cls, reg guard9:L, reg r52:V, reg r53:V, reg phase3:*, reg phase4:V, reg labels5:*, reg labels6:V, reg match:cls, reg r54:V, reg sym10:cls, reg base11:cls, reg guard10:L, reg r56:V, reg r57:V, reg labels7:*, reg labels8:V, reg length1:cls, reg r58:V, reg sym11:cls, reg base12:cls, reg guard11:L, reg r59:V, reg r60:V, reg base13:*, reg base14:V, reg c27:V, reg r61:V, reg c28:L, reg tapply:cls, reg x3:*, reg x4:V, reg p15:p(V +), reg phase5:*, reg phase6:V, reg p16:p(V +), reg base15:*, reg base16:V, reg p17:p(V +), reg r65:V, reg add1:*, reg add2:V, reg r67:V, reg c29:L, reg dev_hold:cls, reg r68:V, reg sym12:cls, reg base17:cls, reg guard12:L, reg r69:V, reg on_exit:cls, reg r71:V, reg match_call:cls, reg r72:V, reg sym13:cls, reg base18:cls, reg guard13:L, reg r73:V, reg r74:V, reg quote:cls, reg r75:V, reg l:*, reg c30:L, reg r77:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r80:V, reg l3:*, reg c31:L, reg r82:L, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r85:V, reg l6:*, reg c32:L, reg r87:L, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r90:V, reg l9:*, reg c33:L, reg r92:L, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r95:V, reg _in_:cls, reg nmdots:*, reg nmdots1:V, reg p18:p(V +), reg r97:V, reg c34:L, reg dots2:*, reg dots3:V, reg c35:L, reg dots5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r98:V, reg dx10:V, reg sym14:cls, reg base19:cls, reg guard14:L, reg r99:V, reg f:*, reg f1:V, reg r100:V, reg c36:cls, reg r101:V, reg l12:*, reg c37:L, reg dx12:V, reg l14:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx16:V, reg r102:V, reg _in_1:cls, reg nmdots2:*, reg nmdots3:V, reg p19:p(V +), reg r104:V, reg c38:L, reg dots6:*, reg dots7:V, reg c39:L, reg dots9:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg r105:V, reg dx19:V, reg sym15:cls, reg base20:cls, reg guard15:L, reg r106:V, reg x5:*, reg x6:V, reg range:cls, reg r107:V, reg l15:*, reg c40:L, reg dx21:V, reg l17:*, reg dr14:V, reg dc7:L, reg dx23:V, reg dx25:V, reg r108:V, reg _in_2:cls, reg nmdots4:*, reg nmdots5:V, reg p20:p(V +), reg r110:V, reg c41:L, reg dots10:*, reg dots11:V, reg c42:L, reg dots13:V, reg dr16:V, reg dc8:L, reg dx26:V, reg dx27:V, reg r111:V, reg dx28:V, reg l18:*, reg c43:L, reg dx30:V, reg l20:*, reg dr18:V, reg dc9:L, reg dx32:V, reg dx34:V, reg r112:V, reg box1:*, reg box2:V, reg c44:L, reg l21:*, reg c45:L, reg r114:L, reg l23:*, reg dr20:V, reg dc10:L, reg dx35:V, reg r116:L, reg dx36:V, reg r117:V, reg l24:*, reg c46:L, reg r120:dots, reg l26:*, reg dr22:V, reg dc11:L, reg dx37:V, reg r122:dots, reg dx38:V, reg r123:V, reg l27:*, reg c47:L, reg r125:dots, reg l29:*, reg dr24:V, reg dc12:L, reg dx39:V, reg r127:dots, reg dx40:V, reg r128:V, reg l30:*, reg c48:L, reg r130:dots, reg l32:*, reg dr26:V, reg dc13:L, reg dx41:V, reg r132:dots, reg dx42:V, reg r133:V, reg l33:*, reg c49:L, reg r135:dots, reg l35:*, reg dr28:V, reg dc14:L, reg dx43:V, reg r137:dots, reg dx44:V, reg r138:V, reg l36:*, reg c50:L, reg r140:dots, reg l38:*, reg dr30:V, reg dc15:L, reg dx45:V, reg r142:dots, reg dx46:V, reg r143:V, reg l39:*, reg c51:L, reg r145:dots, reg l41:*, reg dr32:V, reg dc16:L, reg dx47:V, reg r147:dots, reg dx48:V, reg r148:V, reg l42:*, reg c52:L, reg r150:dots, reg l44:*, reg dr34:V, reg dc17:L, reg dx49:V, reg r152:dots, reg dx50:V, reg r153:V, reg l45:*, reg c53:L, reg r155:dots, reg l47:*, reg dr36:V, reg dc18:L, reg dx51:V, reg r157:dots, reg dx52:V, reg r158:V, reg l48:*, reg c54:L, reg r160:dots, reg l50:*, reg dr38:V, reg dc19:L, reg dx53:V, reg r162:dots, reg dx54:V, reg r163:V, reg l51:*, reg c55:L, reg r165:dots, reg l53:*, reg dr40:V, reg dc20:L, reg dx55:V, reg dx56:V, reg r168:V, reg eval:cls, reg Call:*, reg Call1:V, reg p21:p(V +), reg r170:V, reg axes1:*, reg axes2:V, reg c56:L, reg axis:cls, reg f2:*, reg f3:V, reg r171:V, reg p22:p(V +), reg labels9:*, reg labels10:V, reg p23:p(V +), reg ddd2:dots?, reg r174:V, reg axis1:cls, reg ddd3:dots?, reg r175:V, reg sym16:cls, reg base21:cls, reg guard16:L, reg r177:V, reg r178:V, reg base22:*, reg base23:V, reg c57:V, reg r179:V, reg c58:L, reg segments:cls, reg f4:*, reg f5:V, reg r180:V, reg r181:V, reg p24:p(V +), reg means:*, reg means1:V, reg p25:p(V +), reg f6:*, reg f7:V, reg r184:V, reg r185:V, reg p26:p(V +), reg means2:*, reg means3:V, reg p27:p(V +), reg col_base1:*, reg col_base2:V, reg p28:p(V +), reg lty_base1:*, reg lty_base2:V, reg p29:p(V +), reg lwd_base1:*, reg lwd_base2:V, reg p30:p(V +), reg r191:V, reg r192:V, reg sym17:cls, reg base24:cls, reg guard17:L, reg r194:V, reg r195:V, reg times3:*, reg times4:V, reg as_numeric:cls, reg r196:V, reg diff:cls, reg sym18:cls, reg base25:cls, reg guard18:L, reg r197:V, reg r198:V, reg y:*, reg y1:V, reg range1:cls, reg r199:V, reg p31:p(V +), reg r201:V, reg r202:V, reg r203:V, reg f8:*, reg f9:V, reg r204:V, reg s:V, reg l54:I, reg i:I, reg i1:I, reg i2:I, reg c59:L, reg x7:V, reg phase7:*, reg phase8:V, reg i5:*, reg i6:V, reg r205:V, reg type3:*, reg type4:V, reg r206:V, reg c60:L, reg lines:cls, reg y2:*, reg y3:V, reg c61:L, reg y5:V, reg dr42:V, reg dc21:L, reg dx57:V, reg dx58:V, reg sub:*, reg sub1:V, reg __1:cls, reg r207:V, reg sym19:cls, reg base26:cls, reg guard19:L, reg r208:V, reg dx61:V, reg r209:V, reg y6:*, reg y7:V, reg min:cls, reg r210:V, reg r211:V, reg scale:*, reg scale1:V, reg r212:V, reg r213:V, reg i9:*, reg i10:V, reg r214:V, reg p32:p(V +), reg x8:*, reg x9:V, reg c62:L, reg x11:V, reg dr44:V, reg dc22:L, reg dx62:V, reg dx63:V, reg sub2:*, reg sub3:V, reg __2:cls, reg r216:V, reg p33:p(V +), reg type5:*, reg type6:V, reg p34:p(V +), reg col3:*, reg col4:V, reg p35:p(V +), reg lty3:*, reg lty4:V, reg p36:p(V +), reg lwd3:*, reg lwd4:V, reg p37:p(V +), reg ddd4:dots?, reg r222:V, reg i11:I, reg segments1:cls, reg y8:*, reg y9:V, reg c63:L, reg y11:V, reg dr46:V, reg dc23:L, reg dx64:V, reg dx65:V, reg sub4:*, reg sub5:V, reg __3:cls, reg r224:V, reg sym20:cls, reg base27:cls, reg guard20:L, reg r225:V, reg dx68:V, reg r226:V, reg y12:*, reg y13:V, reg min1:cls, reg r227:V, reg r228:V, reg scale2:*, reg scale3:V, reg r229:V, reg r230:V, reg i12:*, reg i13:V, reg r231:V, reg p38:p(V +), reg means4:*, reg means5:V, reg c64:L, reg means7:V, reg dr48:V, reg dc24:L, reg dx69:V, reg dx70:V, reg i14:*, reg i15:V, reg __4:cls, reg r233:V, reg p39:p(V +), reg y14:*, reg y15:V, reg c65:L, reg y17:V, reg dr50:V, reg dc25:L, reg dx71:V, reg dx72:V, reg sub6:*, reg sub7:V, reg __5:cls, reg r235:V, reg sym21:cls, reg base28:cls, reg guard21:L, reg r236:V, reg dx75:V, reg r237:V, reg y18:*, reg y19:V, reg min2:cls, reg r238:V, reg r239:V, reg scale4:*, reg scale5:V, reg r240:V, reg r241:V, reg i16:*, reg i17:V, reg r242:V, reg p40:p(V +), reg x12:*, reg x13:V, reg c66:L, reg x15:V, reg dr52:V, reg dc26:L, reg dx76:V, reg dx77:V, reg sub8:*, reg sub9:V, reg __6:cls, reg r244:V, reg p41:p(V +), reg col5:*, reg col6:V, reg p42:p(V +), reg lty5:*, reg lty6:V, reg p43:p(V +), reg lwd5:*, reg lwd6:V, reg p44:p(V +), reg ddd5:dots?, reg r249:V, reg sym22:cls, reg base29:cls, reg guard22:L, reg r250:V, reg r251:V, reg invisible:cls, reg r252:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0() else L1(labels);
  L0():
    p = prom<V +>{
      r = `:`(1, 12);
      return r;
    };
    goto L1(p);
  L1(labels_orDefault):
    st labels = labels_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2() else L3(ylab);
  L2():
    p2 = prom<V +>{
      deparse1 = ldf deparse1;
      p1 = prom<V +>{
        sym = ldf substitute;
        base1 = ldf substitute in base;
        guard = `==`.4(sym, base1);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        substitute = ldf substitute in base;
        r4 = dyn substitute(<sym x>);
        goto L0(r4);
      L2():
        r2 = dyn base1(<sym x>);
        goto L0(r2);
      };
      r6 = dyn deparse1(p1);
      return r6;
    };
    goto L3(p2);
  L3(ylab_orDefault):
    st ylab = ylab_orDefault;
    times_isMissing = missing.0(times);
    if times_isMissing then L4() else L5(times);
  L4():
    p3 = prom<V +>{
      sym1 = ldf seq_along;
      base2 = ldf seq_along in base;
      guard1 = `==`.4(sym1, base2);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r10 = seq_along(x2);
      goto L0(r10);
    L2():
      r8 = dyn base2(<sym x>);
      goto L0(r8);
    };
    goto L5(p3);
  L5(times_orDefault):
    st times = times_orDefault;
    phase_isMissing = missing.0(phase);
    if phase_isMissing then L6() else L7(phase);
  L6():
    p4 = prom<V +>{
      times1 = ld times;
      times2 = force? times1;
      checkMissing(times2);
      r12 = `-`(times2, 1);
      sym2 = ldf length;
      base3 = ldf length in base;
      guard2 = `==`.4(sym2, base3);
      if guard2 then L1() else L2();
    L0(r14):
      __ = ldf `%%` in base;
      r16 = dyn __(r12, r14);
      r17 = `+`(r16, 1);
      return r17;
    L1():
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      length = ldf length in base;
      r15 = dyn length(labels2);
      goto L0(r15);
    L2():
      r13 = dyn base3(<sym labels>);
      goto L0(r13);
    };
    goto L7(p4);
  L7(phase_orDefault):
    st phase = phase_orDefault;
    base_isMissing = missing.0(base);
    if base_isMissing then L8() else L9(base);
  L8():
    p5 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    goto L9(p5);
  L9(base_orDefault):
    st base = base_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L10(TRUE) else L10(axes);
  L10(axes_orDefault):
    st axes = axes_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L11() else L12(type);
  L11():
    p6 = prom<V +>{
      sym3 = ldf c;
      base4 = ldf c in base;
      guard3 = `==`.4(sym3, base4);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c = ldf c in base;
      r22 = dyn c("l", "h");
      goto L0(r22);
    L2():
      r20 = dyn base4("l", "h");
      goto L0(r20);
    };
    goto L12(p6);
  L12(type_orDefault):
    st type = type_orDefault;
    box_isMissing = missing.0(box);
    if box_isMissing then L13(TRUE) else L13(box);
  L13(box_orDefault):
    st box = box_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L14(FALSE) else L14(add);
  L14(add_orDefault):
    st add = add_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L15() else L16(col);
  L15():
    p7 = prom<V +>{
      par = ldf par;
      r24 = dyn par("col");
      return r24;
    };
    goto L16(p7);
  L16(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L17() else L18(lty);
  L17():
    p8 = prom<V +>{
      par1 = ldf par;
      r26 = dyn par1("lty");
      return r26;
    };
    goto L18(p8);
  L18(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L19() else L20(lwd);
  L19():
    p9 = prom<V +>{
      par2 = ldf par;
      r28 = dyn par2("lwd");
      return r28;
    };
    goto L20(p9);
  L20(lwd_orDefault):
    st lwd = lwd_orDefault;
    col_base_isMissing = missing.0(col_base);
    if col_base_isMissing then L21() else L22(col_base);
  L21():
    p10 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    goto L22(p10);
  L22(col_base_orDefault):
    st `col.base` = col_base_orDefault;
    lty_base_isMissing = missing.0(lty_base);
    if lty_base_isMissing then L23() else L24(lty_base);
  L23():
    p11 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    goto L24(p11);
  L24(lty_base_orDefault):
    st `lty.base` = lty_base_orDefault;
    lwd_base_isMissing = missing.0(lwd_base);
    if lwd_base_isMissing then L25() else L26(lwd_base);
  L25():
    p12 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    goto L26(p12);
  L26(lwd_base_orDefault):
    st `lwd.base` = lwd_base_orDefault;
    st `...` = ddd;
    sym4 = ldf list;
    base5 = ldf list in base;
    guard4 = `==`.4(sym4, base5);
    if guard4 then L65() else L66();
  L27(r34):
    st dots = r34;
    sym5 = ldf names;
    base6 = ldf names in base;
    guard5 = `==`.4(sym5, base6);
    if guard5 then L69() else L70();
  L65():
    list = ldf list;
    check L67() else D0();
  L66():
    r33 = dyn base5(<sym ...>);
    goto L27(r33);
  D0():
    deopt 2 [];
  L28(r37):
    st nmdots = r37;
    match_arg = ldf `match.arg`;
    check L73() else D4();
  L67():
    ddd1 = ld `...`;
    r35 = dyn list[`...`](ddd1);
    check L68() else D1();
  L69():
    dots = ld dots;
    check L71() else D2();
  L70():
    r36 = dyn base6(<sym dots>);
    goto L28(r36);
  D1():
    deopt 4 [r35];
  D2():
    deopt 8 [dots];
  D4():
    deopt 14 [];
  L68():
    goto L27(r35);
  L71():
    dots1 = force? dots;
    checkMissing(dots1);
    names = ldf names in base;
    r38 = dyn names(dots1);
    check L72() else D3();
  L73():
    p13 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r40 = dyn match_arg(p13);
    check L74() else D5();
  D3():
    deopt 11 [r38];
  D5():
    deopt 16 [r40];
  L72():
    goto L28(r38);
  L74():
    st type = r40;
    sym6 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base7);
    if guard6 then L75() else L76();
  L29(r42):
    c2 = `as.logical`(r42);
    if c2 then L30(c2) else L78();
  L75():
    labels3 = ld labels;
    check L77() else D6();
  L76():
    r41 = dyn base7(<sym labels>);
    goto L29(r41);
  D6():
    deopt 19 [labels3];
  L30(c3):
    c26 = `as.logical`(c3);
    if c26 then L86() else L34();
  L77():
    labels4 = force? labels3;
    checkMissing(labels4);
    c1 = `==`(labels4, NULL);
    goto L29(c1);
  L78():
    sym7 = ldf missing;
    base8 = ldf missing in base;
    guard7 = `==`.4(sym7, base8);
    if guard7 then L79() else L80();
  L31(c7, r44):
    c8 = `as.logical`(r44);
    if c8 then L81() else L32(c7, c8);
  L34():
    goto L36();
  L36():
    sym10 = ldf length;
    base11 = ldf length in base;
    guard10 = `==`.4(sym10, base11);
    if guard10 then L95() else L96();
  L79():
    missing = ldf missing in base;
    r45 = dyn missing(<sym labels>);
    goto L31(c2, r45);
  L80():
    r43 = dyn base8(<sym labels>);
    goto L31(c2, r43);
  L86():
    unique = ldf unique;
    check L87() else D7();
  D7():
    deopt 32 [];
  L32(c11, c12):
    c23 = `as.logical`(c12);
    c24 = `||`(c11, c23);
    goto L30(c24);
  L37(r57):
    st f = r57;
    sym11 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base12);
    if guard11 then L99() else L100();
  L81():
    sym8 = ldf missing;
    base9 = ldf missing in base;
    guard8 = `==`.4(sym8, base9);
    if guard8 then L82() else L83();
  L87():
    p14 = prom<V +>{
      phase1 = ld phase;
      phase2 = force? phase1;
      checkMissing(phase2);
      return phase2;
    };
    r51 = dyn unique(p14);
    check L88() else D8();
  L95():
    labels7 = ld labels;
    check L97() else D12();
  L96():
    r56 = dyn base11(<sym labels>);
    goto L37(r56);
  D8():
    deopt 34 [r51];
  D12():
    deopt 51 [labels7];
  L33(c17, c18, r47):
    r49 = `!`(r47);
    c19 = `as.logical`(r49);
    c20 = `&&`(c18, c19);
    goto L32(c17, c20);
  L38(r60):
    r61 = `!`(r60);
    c28 = `as.logical`(r61);
    if c28 then L102() else L39();
  L82():
    missing1 = ldf missing in base;
    r48 = dyn missing1(<sym phase>);
    goto L33(c7, c8, r48);
  L83():
    r46 = dyn base9(<sym phase>);
    goto L33(c7, c8, r46);
  L88():
    st labels = r51;
    sym9 = ldf match;
    base10 = ldf match in base;
    guard9 = `==`.4(sym9, base10);
    if guard9 then L89() else L90();
  L97():
    labels8 = force? labels7;
    checkMissing(labels8);
    length1 = ldf length in base;
    r58 = dyn length1(labels8);
    check L98() else D13();
  L99():
    base13 = ld base;
    check L101() else D14();
  L100():
    r59 = dyn base12(<sym base>);
    goto L38(r59);
  D13():
    deopt 54 [r58];
  D14():
    deopt 57 [base13];
  L35(r53):
    st phase = r53;
    goto L36();
  L39():
    goto L40();
  L40():
    add1 = ld add;
    check L106() else D17();
  L89():
    phase3 = ld phase;
    check L91() else D9();
  L90():
    r52 = dyn base10(<sym phase>, <sym labels>);
    goto L35(r52);
  L98():
    goto L37(r58);
  L101():
    base14 = force? base13;
    checkMissing(base14);
    c27 = `==`(base14, NULL);
    goto L38(c27);
  L102():
    tapply = ldf tapply;
    check L103() else D15();
  D9():
    deopt 38 [phase3];
  D15():
    deopt 62 [];
  D17():
    deopt 70 [add1];
  L91():
    phase4 = force? phase3;
    checkMissing(phase4);
    labels5 = ld labels;
    check L92() else D10();
  L103():
    p15 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p16 = prom<V +>{
      phase5 = ld phase;
      phase6 = force? phase5;
      checkMissing(phase6);
      return phase6;
    };
    p17 = prom<V +>{
      base15 = ld base;
      base16 = force? base15;
      checkMissing(base16);
      return base16;
    };
    r65 = dyn tapply(p15, p16, p17);
    check L104() else D16();
  L106():
    add2 = force? add1;
    checkMissing(add2);
    r67 = `!`(add2);
    c29 = `as.logical`(r67);
    if c29 then L107() else L41();
  D10():
    deopt 40 [labels5];
  D16():
    deopt 66 [r65];
  L41():
    goto L58();
  L58():
    sym17 = ldf `as.numeric`;
    base24 = ldf `as.numeric` in base;
    guard17 = `==`.4(sym17, base24);
    if guard17 then L242() else L243();
  L92():
    labels6 = force? labels5;
    checkMissing(labels6);
    match = ldf match in base;
    r54 = dyn match(phase4, labels6, NA_INT, NULL);
    check L93() else D11();
  L104():
    st means = r65;
    goto L40();
  L107():
    dev_hold = ldf `dev.hold`;
    check L108() else D18();
  D11():
    deopt 45 [r54];
  D18():
    deopt 74 [];
  L59(r195):
    st y = r195;
    diff = ldf diff;
    check L246() else D48();
  L93():
    goto L35(r54);
  L108():
    r68 = dyn dev_hold();
    check L109() else D19();
  L242():
    times3 = ld times;
    check L244() else D46();
  L243():
    r194 = dyn base24(<sym times>);
    goto L59(r194);
  D19():
    deopt 75 [r68];
  D46():
    deopt 245 [times3];
  D48():
    deopt 252 [1.0];
  L109():
    sym12 = ldf `on.exit`;
    base17 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base17);
    if guard12 then L110() else L111();
  L244():
    times4 = force? times3;
    checkMissing(times4);
    as_numeric = ldf `as.numeric` in base;
    r196 = dyn as_numeric(times4);
    check L245() else D47();
  L246():
    p31 = prom<V +>{
      sym18 = ldf range;
      base25 = ldf range in base;
      guard18 = `==`.4(sym18, base25);
      if guard18 then L1() else L2();
    L0(r198):
      return r198;
    L1():
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      range1 = ldf range in base;
      r199 = dyn range1(y1, TRUE);
      goto L0(r199);
    L2():
      r197 = dyn base25[, `na.rm`](<sym y>, TRUE);
      goto L0(r197);
    };
    r201 = dyn diff(p31);
    check L247() else D49();
  D47():
    deopt 248 [r196];
  D49():
    deopt 254 [1.0, r201];
  L42():
    match_call = ldf `match.call`;
    check L112() else D20();
  L110():
    on_exit = ldf `on.exit` in base;
    r71 = dyn on_exit(<lang dev.flush()>);
    goto L42();
  L111():
    r69 = dyn base17(<lang dev.flush()>);
    goto L42();
  L245():
    goto L59(r196);
  L247():
    r202 = `/`(1.0, r201);
    r203 = `*`(r202, 0.9);
    st scale = r203;
    f8 = ld f;
    check L248() else D50();
  D20():
    deopt 80 [];
  D50():
    deopt 260 [1, f8];
  L112():
    r72 = dyn match_call();
    check L113() else D21();
  L248():
    f9 = force? f8;
    checkMissing(f9);
    r204 = `:`(1, f9);
    s = toForSeq(r204);
    l54 = length(s);
    i = 0;
    goto L60(i);
  D21():
    deopt 81 [r72];
  L60(i1):
    i2 = `+`.1(i1, 1);
    c59 = `<`.1(l54, i2);
    if c59 then L249() else L63();
  L113():
    st Call = r72;
    sym13 = ldf quote;
    base18 = ldf quote in base;
    guard13 = `==`.4(sym13, base18);
    if guard13 then L114() else L115();
  L43(r74):
    l = ld Call;
    c30 = `is.object`(l);
    if c30 then L116() else L117(r74, l);
  L63():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    phase7 = ld phase;
    check L250() else D51();
  L114():
    quote = ldf quote in base;
    r75 = dyn quote(<lang `::`(graphics, plot)>);
    goto L43(r75);
  L115():
    r73 = dyn base18(<lang `::`(graphics, plot)>);
    goto L43(r73);
  L249():
    sym22 = ldf invisible;
    base29 = ldf invisible in base;
    guard22 = `==`.4(sym22, base29);
    if guard22 then L259() else L260();
  D51():
    deopt 263 [i2, phase7];
  L44(dx1):
    st Call = dx1;
    l3 = ld Call;
    c31 = `is.object`(l3);
    if c31 then L120() else L121(NA_LGL, l3);
  L64(r251):
    popenv;
    return r251;
  L116():
    dr = tryDispatchBuiltin.0("[[<-", l, r74);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L118() else L117(r74, dr);
  L117(r77, l2):
    ____ = ldf `[[<-` in base;
    r80 = dyn ____(l2, r74, 1);
    goto L44(r80);
  L250():
    phase8 = force? phase7;
    checkMissing(phase8);
    i5 = ld i;
    check L251() else D52();
  L259():
    invisible = ldf invisible in base;
    r252 = dyn invisible();
    check L261() else D58();
  L260():
    r250 = dyn base29();
    goto L64(r250);
  D52():
    deopt 264 [i2, phase8, i5];
  D58():
    deopt 306 [r252];
  L118():
    dx = getTryDispatchBuiltinValue(dr);
    goto L44(dx);
  L119(dx3):
    st Call = dx3;
    l6 = ld Call;
    c32 = `is.object`(l6);
    if c32 then L124() else L125(NA_LGL, l6);
  L120():
    dr2 = tryDispatchBuiltin.0("$<-", l3, NA_LGL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L122() else L121(NA_LGL, dr2);
  L121(r82, l5):
    r85 = `$<-`(l5, <sym x>, NA_LGL);
    goto L119(r85);
  L251():
    i6 = force? i5;
    checkMissing(i6);
    r205 = `==`(phase8, i6);
    st sub = r205;
    type3 = ld type;
    check L252() else D53();
  L261():
    goto L64(r252);
  D53():
    deopt 268 [i2, type3];
  L122():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L119(dx2);
  L123(dx5):
    st Call = dx5;
    l9 = ld Call;
    c33 = `is.object`(l9);
    if c33 then L128() else L129(FALSE, l9);
  L124():
    dr4 = tryDispatchBuiltin.0("$<-", l6, NA_LGL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L126() else L125(NA_LGL, dr4);
  L125(r87, l8):
    r90 = `$<-`(l8, <sym y>, NA_LGL);
    goto L123(r90);
  L252():
    type4 = force? type3;
    checkMissing(type4);
    r206 = `!=`(type4, "h");
    c60 = `as.logical`(r206);
    if c60 then L253() else L61();
  L61():
    segments1 = ldf segments;
    check L257() else D56();
  L62(i11):
    goto L60(i11);
  L126():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L123(dx4);
  L127(dx7):
    st Call = dx7;
    _in_ = ldf `%in%`;
    check L131() else D22();
  L128():
    dr6 = tryDispatchBuiltin.0("$<-", l9, FALSE);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L130() else L129(FALSE, dr6);
  L129(r92, l11):
    r95 = `$<-`(l11, <sym axes>, FALSE);
    goto L127(r95);
  L253():
    lines = ldf lines;
    check L254() else D54();
  D22():
    deopt 107 [];
  D54():
    deopt 273 [i2];
  D56():
    deopt 287 [i2];
  L130():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L127(dx6);
  L131():
    p18 = prom<V +>{
      nmdots = ld nmdots;
      nmdots1 = force? nmdots;
      checkMissing(nmdots1);
      return nmdots1;
    };
    r97 = dyn _in_("xlim", p18);
    check L132() else D23();
  L254():
    p32 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      c61 = `is.object`(y3);
      if c61 then L2() else L3(y3);
    L0(dx58):
      sym19 = ldf min;
      base26 = ldf min in base;
      guard19 = `==`.4(sym19, base26);
      if guard19 then L5() else L6();
    L2():
      dr42 = tryDispatchBuiltin.1("[", y3);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L4() else L3(dr42);
    L3(y5):
      sub = ld sub;
      sub1 = force? sub;
      __1 = ldf `[` in base;
      r207 = dyn __1(y5, sub1);
      goto L0(r207);
    L1(dx61, r209):
      r211 = `-`(dx61, r209);
      scale = ld scale;
      scale1 = force? scale;
      checkMissing(scale1);
      r212 = `*`(r211, scale1);
      r213 = `-`(r212, 0.45);
      i9 = ld i;
      i10 = force? i9;
      checkMissing(i10);
      r214 = `+`(r213, i10);
      return r214;
    L4():
      dx57 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx57);
    L5():
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      min = ldf min in base;
      r210 = dyn min(y7);
      goto L1(dx58, r210);
    L6():
      r208 = dyn base26(<sym y>);
      goto L1(dx58, r208);
    };
    p33 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c62 = `is.object`(x9);
      if c62 then L1() else L2(x9);
    L0(dx63):
      return dx63;
    L1():
      dr44 = tryDispatchBuiltin.1("[", x9);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(x11):
      sub2 = ld sub;
      sub3 = force? sub2;
      __2 = ldf `[` in base;
      r216 = dyn __2(x11, sub3);
      goto L0(r216);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx62);
    };
    p34 = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    p35 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p36 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    p37 = prom<V +>{
      lwd3 = ld lwd;
      lwd4 = force? lwd3;
      checkMissing(lwd4);
      return lwd4;
    };
    ddd4 = ld `...`;
    r222 = dyn lines[, , type, col, lty, lwd, `...`](p32, p33, p34, p35, p36, p37, ddd4);
    check L255() else D55();
  L257():
    p38 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      c63 = `is.object`(y9);
      if c63 then L2() else L3(y9);
    L0(dx65):
      sym20 = ldf min;
      base27 = ldf min in base;
      guard20 = `==`.4(sym20, base27);
      if guard20 then L5() else L6();
    L2():
      dr46 = tryDispatchBuiltin.1("[", y9);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L4() else L3(dr46);
    L3(y11):
      sub4 = ld sub;
      sub5 = force? sub4;
      __3 = ldf `[` in base;
      r224 = dyn __3(y11, sub5);
      goto L0(r224);
    L1(dx68, r226):
      r228 = `-`(dx68, r226);
      scale2 = ld scale;
      scale3 = force? scale2;
      checkMissing(scale3);
      r229 = `*`(r228, scale3);
      r230 = `-`(r229, 0.45);
      i12 = ld i;
      i13 = force? i12;
      checkMissing(i13);
      r231 = `+`(r230, i13);
      return r231;
    L4():
      dx64 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx64);
    L5():
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      min1 = ldf min in base;
      r227 = dyn min1(y13);
      goto L1(dx65, r227);
    L6():
      r225 = dyn base27(<sym y>);
      goto L1(dx65, r225);
    };
    p39 = prom<V +>{
      means4 = ld means;
      means5 = force? means4;
      checkMissing(means5);
      c64 = `is.object`(means5);
      if c64 then L1() else L2(means5);
    L0(dx70):
      return dx70;
    L1():
      dr48 = tryDispatchBuiltin.1("[", means5);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(means7):
      i14 = ld i;
      i15 = force? i14;
      __4 = ldf `[` in base;
      r233 = dyn __4(means7, i15);
      goto L0(r233);
    L3():
      dx69 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx69);
    };
    p40 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      c65 = `is.object`(y15);
      if c65 then L2() else L3(y15);
    L0(dx72):
      sym21 = ldf min;
      base28 = ldf min in base;
      guard21 = `==`.4(sym21, base28);
      if guard21 then L5() else L6();
    L2():
      dr50 = tryDispatchBuiltin.1("[", y15);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L4() else L3(dr50);
    L3(y17):
      sub6 = ld sub;
      sub7 = force? sub6;
      __5 = ldf `[` in base;
      r235 = dyn __5(y17, sub7);
      goto L0(r235);
    L1(dx75, r237):
      r239 = `-`(dx75, r237);
      scale4 = ld scale;
      scale5 = force? scale4;
      checkMissing(scale5);
      r240 = `*`(r239, scale5);
      r241 = `-`(r240, 0.45);
      i16 = ld i;
      i17 = force? i16;
      checkMissing(i17);
      r242 = `+`(r241, i17);
      return r242;
    L4():
      dx71 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx71);
    L5():
      y18 = ld y;
      y19 = force? y18;
      checkMissing(y19);
      min2 = ldf min in base;
      r238 = dyn min2(y19);
      goto L1(dx72, r238);
    L6():
      r236 = dyn base28(<sym y>);
      goto L1(dx72, r236);
    };
    p41 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c66 = `is.object`(x13);
      if c66 then L1() else L2(x13);
    L0(dx77):
      return dx77;
    L1():
      dr52 = tryDispatchBuiltin.1("[", x13);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(x15):
      sub8 = ld sub;
      sub9 = force? sub8;
      __6 = ldf `[` in base;
      r244 = dyn __6(x15, sub9);
      goto L0(r244);
    L3():
      dx76 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx76);
    };
    p42 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    p43 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      return lty6;
    };
    p44 = prom<V +>{
      lwd5 = ld lwd;
      lwd6 = force? lwd5;
      checkMissing(lwd6);
      return lwd6;
    };
    ddd5 = ld `...`;
    r249 = dyn segments1[, , , , col, lty, lwd, `...`](p38, p39, p40, p41, p42, p43, p44, ddd5);
    check L258() else D57();
  D23():
    deopt 110 [r97];
  D55():
    deopt 285 [i2, r222];
  D57():
    deopt 299 [i2, r249];
  L132():
    c34 = `as.logical`(r97);
    if c34 then L133() else L45();
  L255():
    goto L62(i2);
  L258():
    goto L62(i2);
  L45():
    sym14 = ldf c;
    base19 = ldf c in base;
    guard14 = `==`.4(sym14, base19);
    if guard14 then L140() else L141();
  L46(dx10):
    l12 = ld Call;
    c37 = `is.object`(l12);
    if c37 then L145() else L146(dx10, l12);
  L133():
    dots2 = ld dots;
    check L134() else D24();
  D24():
    deopt 111 [dots2];
  L134():
    dots3 = force? dots2;
    checkMissing(dots3);
    c35 = `is.object`(dots3);
    if c35 then L136() else L137(dots3);
  L140():
    f = ld f;
    check L142() else D25();
  L141():
    r99 = dyn base19(0.55, <lang `+`(f, 0.45)>);
    goto L46(r99);
  L144(dx16):
    st Call = dx16;
    _in_1 = ldf `%in%`;
    check L148() else D27();
  L145():
    dr10 = tryDispatchBuiltin.0("$<-", l12, dx10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L147() else L146(dx10, dr10);
  L146(dx12, l14):
    r102 = `$<-`(l14, <sym xlim>, dx10);
    goto L144(r102);
  D25():
    deopt 117 [f];
  D27():
    deopt 127 [];
  L135(dx9):
    goto L46(dx9);
  L136():
    dr8 = tryDispatchBuiltin.1("$", dots3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L138() else L137(dr8);
  L137(dots5):
    r98 = `$`(dots5, <sym xlim>);
    goto L135(r98);
  L142():
    f1 = force? f;
    checkMissing(f1);
    r100 = `+`(f1, 0.45);
    c36 = ldf c in base;
    r101 = dyn c36(0.55, r100);
    check L143() else D26();
  L147():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L144(dx14);
  L148():
    p19 = prom<V +>{
      nmdots2 = ld nmdots;
      nmdots3 = force? nmdots2;
      checkMissing(nmdots3);
      return nmdots3;
    };
    r104 = dyn _in_1("ylim", p19);
    check L149() else D28();
  D26():
    deopt 122 [r101];
  D28():
    deopt 130 [r104];
  L138():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L135(dx8);
  L143():
    goto L46(r101);
  L149():
    c38 = `as.logical`(r104);
    if c38 then L150() else L47();
  L47():
    sym15 = ldf range;
    base20 = ldf range in base;
    guard15 = `==`.4(sym15, base20);
    if guard15 then L157() else L158();
  L48(dx19):
    l15 = ld Call;
    c40 = `is.object`(l15);
    if c40 then L162() else L163(dx19, l15);
  L150():
    dots6 = ld dots;
    check L151() else D29();
  D29():
    deopt 131 [dots6];
  L151():
    dots7 = force? dots6;
    checkMissing(dots7);
    c39 = `is.object`(dots7);
    if c39 then L153() else L154(dots7);
  L157():
    x5 = ld x;
    check L159() else D30();
  L158():
    r106 = dyn base20[, `na.rm`](<sym x>, TRUE);
    goto L48(r106);
  L161(dx25):
    st Call = dx25;
    _in_2 = ldf `%in%`;
    check L165() else D32();
  L162():
    dr14 = tryDispatchBuiltin.0("$<-", l15, dx19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L164() else L163(dx19, dr14);
  L163(dx21, l17):
    r108 = `$<-`(l17, <sym ylim>, dx19);
    goto L161(r108);
  D30():
    deopt 136 [x5];
  D32():
    deopt 146 [];
  L152(dx18):
    goto L48(dx18);
  L153():
    dr12 = tryDispatchBuiltin.1("$", dots7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L155() else L154(dr12);
  L154(dots9):
    r105 = `$`(dots9, <sym ylim>);
    goto L152(r105);
  L159():
    x6 = force? x5;
    checkMissing(x6);
    range = ldf range in base;
    r107 = dyn range(x6, TRUE);
    check L160() else D31();
  L164():
    dx23 = getTryDispatchBuiltinValue(dr14);
    goto L161(dx23);
  L165():
    p20 = prom<V +>{
      nmdots4 = ld nmdots;
      nmdots5 = force? nmdots4;
      checkMissing(nmdots5);
      return nmdots5;
    };
    r110 = dyn _in_2("xlab", p20);
    check L166() else D33();
  D31():
    deopt 141 [r107];
  D33():
    deopt 149 [r110];
  L155():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L152(dx17);
  L160():
    goto L48(r107);
  L166():
    c41 = `as.logical`(r110);
    if c41 then L167() else L49();
  L49():
    goto L50("");
  L50(dx28):
    l18 = ld Call;
    c43 = `is.object`(l18);
    if c43 then L175() else L176(dx28, l18);
  L167():
    dots10 = ld dots;
    check L168() else D34();
  D34():
    deopt 150 [dots10];
  L168():
    dots11 = force? dots10;
    checkMissing(dots11);
    c42 = `is.object`(dots11);
    if c42 then L170() else L171(dots11);
  L174(dx34):
    st Call = dx34;
    box1 = ld box;
    check L178() else D35();
  L175():
    dr18 = tryDispatchBuiltin.0("$<-", l18, dx28);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L177() else L176(dx28, dr18);
  L176(dx30, l20):
    r112 = `$<-`(l20, <sym xlab>, dx28);
    goto L174(r112);
  D35():
    deopt 158 [box1];
  L169(dx27):
    goto L50(dx27);
  L170():
    dr16 = tryDispatchBuiltin.1("$", dots11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L172() else L171(dr16);
  L171(dots13):
    r111 = `$`(dots13, <sym xlab>);
    goto L169(r111);
  L177():
    dx32 = getTryDispatchBuiltinValue(dr18);
    goto L174(dx32);
  L178():
    box2 = force? box1;
    checkMissing(box2);
    c44 = `as.logical`(box2);
    if c44 then L179() else L51();
  L51():
    goto L52();
  L52():
    l24 = ld Call;
    c46 = `is.object`(l24);
    if c46 then L186() else L187(NULL, l24);
  L172():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L169(dx26);
  L179():
    l21 = ld Call;
    c45 = `is.object`(l21);
    if c45 then L181() else L182(TRUE, l21);
  L180(r116, dx36):
    st Call = dx36;
    goto L52();
  L181():
    dr20 = tryDispatchBuiltin.0("$<-", l21, TRUE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L183() else L182(TRUE, dr20);
  L182(r114, l23):
    r117 = `$<-`(l23, <sym frame.plot>, TRUE);
    goto L180(r114, r117);
  L185(r122, dx38):
    st Call = dx38;
    l27 = ld Call;
    c47 = `is.object`(l27);
    if c47 then L190() else L191(r122, l27);
  L186():
    dr22 = tryDispatchBuiltin.0("$<-", l24, NULL);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L188() else L187(NULL, dr22);
  L187(r120, l26):
    r123 = `$<-`(l26, <sym lwd.base>, NULL);
    goto L185(r120, r123);
  L183():
    dx35 = getTryDispatchBuiltinValue(dr20);
    goto L180(TRUE, dx35);
  L188():
    dx37 = getTryDispatchBuiltinValue(dr22);
    goto L185(NULL, dx37);
  L189(r127, dx40):
    st Call = dx40;
    l30 = ld Call;
    c48 = `is.object`(l30);
    if c48 then L194() else L195(r127, l30);
  L190():
    dr24 = tryDispatchBuiltin.0("$<-", l27, r122);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L192() else L191(r122, dr24);
  L191(r125, l29):
    r128 = `$<-`(l29, <sym lty.base>, r122);
    goto L189(r125, r128);
  L192():
    dx39 = getTryDispatchBuiltinValue(dr24);
    goto L189(r122, dx39);
  L193(r132, dx42):
    st Call = dx42;
    l33 = ld Call;
    c49 = `is.object`(l33);
    if c49 then L198() else L199(r132, l33);
  L194():
    dr26 = tryDispatchBuiltin.0("$<-", l30, r127);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L196() else L195(r127, dr26);
  L195(r130, l32):
    r133 = `$<-`(l32, <sym col.base>, r127);
    goto L193(r130, r133);
  L196():
    dx41 = getTryDispatchBuiltinValue(dr26);
    goto L193(r127, dx41);
  L197(r137, dx44):
    st Call = dx44;
    l36 = ld Call;
    c50 = `is.object`(l36);
    if c50 then L202() else L203(r137, l36);
  L198():
    dr28 = tryDispatchBuiltin.0("$<-", l33, r132);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L200() else L199(r132, dr28);
  L199(r135, l35):
    r138 = `$<-`(l35, <sym add>, r132);
    goto L197(r135, r138);
  L200():
    dx43 = getTryDispatchBuiltinValue(dr28);
    goto L197(r132, dx43);
  L201(r142, dx46):
    st Call = dx46;
    l39 = ld Call;
    c51 = `is.object`(l39);
    if c51 then L206() else L207(r142, l39);
  L202():
    dr30 = tryDispatchBuiltin.0("$<-", l36, r137);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L204() else L203(r137, dr30);
  L203(r140, l38):
    r143 = `$<-`(l38, <sym box>, r137);
    goto L201(r140, r143);
  L204():
    dx45 = getTryDispatchBuiltinValue(dr30);
    goto L201(r137, dx45);
  L205(r147, dx48):
    st Call = dx48;
    l42 = ld Call;
    c52 = `is.object`(l42);
    if c52 then L210() else L211(r147, l42);
  L206():
    dr32 = tryDispatchBuiltin.0("$<-", l39, r142);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L208() else L207(r142, dr32);
  L207(r145, l41):
    r148 = `$<-`(l41, <sym type>, r142);
    goto L205(r145, r148);
  L208():
    dx47 = getTryDispatchBuiltinValue(dr32);
    goto L205(r142, dx47);
  L209(r152, dx50):
    st Call = dx50;
    l45 = ld Call;
    c53 = `is.object`(l45);
    if c53 then L214() else L215(r152, l45);
  L210():
    dr34 = tryDispatchBuiltin.0("$<-", l42, r147);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L212() else L211(r147, dr34);
  L211(r150, l44):
    r153 = `$<-`(l44, <sym base>, r147);
    goto L209(r150, r153);
  L212():
    dx49 = getTryDispatchBuiltinValue(dr34);
    goto L209(r147, dx49);
  L213(r157, dx52):
    st Call = dx52;
    l48 = ld Call;
    c54 = `is.object`(l48);
    if c54 then L218() else L219(r157, l48);
  L214():
    dr36 = tryDispatchBuiltin.0("$<-", l45, r152);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L216() else L215(r152, dr36);
  L215(r155, l47):
    r158 = `$<-`(l47, <sym phase>, r152);
    goto L213(r155, r158);
  L216():
    dx51 = getTryDispatchBuiltinValue(dr36);
    goto L213(r152, dx51);
  L217(r162, dx54):
    st Call = dx54;
    l51 = ld Call;
    c55 = `is.object`(l51);
    if c55 then L222() else L223(r162, l51);
  L218():
    dr38 = tryDispatchBuiltin.0("$<-", l48, r157);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L220() else L219(r157, dr38);
  L219(r160, l50):
    r163 = `$<-`(l50, <sym times>, r157);
    goto L217(r160, r163);
  L220():
    dx53 = getTryDispatchBuiltinValue(dr38);
    goto L217(r157, dx53);
  L221(dx56):
    st Call = dx56;
    eval = ldf eval;
    check L225() else D36();
  L222():
    dr40 = tryDispatchBuiltin.0("$<-", l51, r162);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L224() else L223(r162, dr40);
  L223(r165, l53):
    r168 = `$<-`(l53, <sym labels>, r162);
    goto L221(r168);
  D36():
    deopt 200 [];
  L224():
    dx55 = getTryDispatchBuiltinValue(dr40);
    goto L221(dx55);
  L225():
    p21 = prom<V +>{
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      return Call1;
    };
    r170 = dyn eval(p21);
    check L226() else D37();
  D37():
    deopt 202 [r170];
  L226():
    axes1 = ld axes;
    check L227() else D38();
  D38():
    deopt 203 [axes1];
  L227():
    axes2 = force? axes1;
    checkMissing(axes2);
    c56 = `as.logical`(axes2);
    if c56 then L228() else L53();
  L53():
    goto L54();
  L54():
    sym16 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base21);
    if guard16 then L234() else L235();
  L228():
    axis = ldf axis;
    check L229() else D39();
  D39():
    deopt 206 [];
  L55(r178):
    r179 = `!`(r178);
    c58 = `as.logical`(r179);
    if c58 then L237() else L56();
  L229():
    p22 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      r171 = `:`(1, f3);
      return r171;
    };
    p23 = prom<V +>{
      labels9 = ld labels;
      labels10 = force? labels9;
      checkMissing(labels10);
      return labels10;
    };
    ddd2 = ld `...`;
    r174 = dyn axis[, at, labels, `...`](1.0, p22, p23, ddd2);
    check L230() else D40();
  L234():
    base22 = ld base;
    check L236() else D43();
  L235():
    r177 = dyn base21(<sym base>);
    goto L55(r177);
  D40():
    deopt 213 [r174];
  D43():
    deopt 222 [base22];
  L56():
    goto L57(NULL);
  L57(r192):
    goto L58();
  L230():
    axis1 = ldf axis;
    check L231() else D41();
  L236():
    base23 = force? base22;
    checkMissing(base23);
    c57 = `==`(base23, NULL);
    goto L55(c57);
  L237():
    segments = ldf segments;
    check L238() else D44();
  D41():
    deopt 215 [];
  D44():
    deopt 227 [];
  L231():
    ddd3 = ld `...`;
    r175 = dyn axis1[, `...`](2.0, ddd3);
    check L232() else D42();
  L238():
    p24 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      r180 = `:`(1, f5);
      r181 = `-`(r180, 0.45);
      return r181;
    };
    p25 = prom<V +>{
      means = ld means;
      means1 = force? means;
      checkMissing(means1);
      return means1;
    };
    p26 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      r184 = `:`(1, f7);
      r185 = `+`(r184, 0.45);
      return r185;
    };
    p27 = prom<V +>{
      means2 = ld means;
      means3 = force? means2;
      checkMissing(means3);
      return means3;
    };
    p28 = prom<V +>{
      col_base1 = ld `col.base`;
      col_base2 = force? col_base1;
      checkMissing(col_base2);
      return col_base2;
    };
    p29 = prom<V +>{
      lty_base1 = ld `lty.base`;
      lty_base2 = force? lty_base1;
      checkMissing(lty_base2);
      return lty_base2;
    };
    p30 = prom<V +>{
      lwd_base1 = ld `lwd.base`;
      lwd_base2 = force? lwd_base1;
      checkMissing(lwd_base2);
      return lwd_base2;
    };
    r191 = dyn segments[, , , , col, lty, lwd](p24, p25, p26, p27, p28, p29, p30);
    check L239() else D45();
  D42():
    deopt 218 [r175];
  D45():
    deopt 238 [r191];
  L232():
    goto L54();
  L239():
    goto L57(r191);
  }
}