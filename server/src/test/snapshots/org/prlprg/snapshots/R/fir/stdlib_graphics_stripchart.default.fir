fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner739774635;
    st `stripchart.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner739774635(x, method, jitter, offset, vertical, `group.names`, add, at, xlim, ylim, ylab, xlab, dlab, glab, log, pch, col, cex, axes, `frame.plot`, `...`) {
  (reg x:*, reg method:*, reg jitter:*, reg offset:*, reg vertical:*, reg group_names:*, reg add:*, reg at:*, reg xlim:*, reg ylim:*, reg ylab:*, reg xlab:*, reg dlab:*, reg glab:*, reg log:*, reg pch:*, reg col:*, reg cex:*, reg axes:*, reg frame_plot:*, reg ddd:dots) -+> V { var x:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var jitter:*, reg jitter_isMissing:L, reg jitter_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, reg p:p(V +), var vertical:*, reg vertical_isMissing:L, reg vertical_orDefault:*, var `group.names`:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var dlab:*, reg dlab_isMissing:L, reg dlab_orDefault:*, var glab:*, reg glab_isMissing:L, reg glab_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r1:V, reg p1:p(V +), var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, reg par1:cls, reg r3:V, reg p2:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes1:*, reg axes2:V, reg p3:p(V +), var `...`:dots?, reg pmatch:cls, reg method1:*, reg method2:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p5:p(V +), reg r11:V, reg c1:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg method3:*, reg method4:V, reg is_na:cls, reg r17:V, reg c2:L, reg c3:V, reg method5:*, reg method6:V, reg r18:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg x1:*, reg x2:V, reg is_list:cls, reg r23:V, reg c9:L, reg x3:*, reg x4:V, reg x5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg x6:*, reg x7:V, reg is_numeric:cls, reg r26:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg x8:*, reg x9:V, reg list:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg groups:*, reg groups1:V, reg length:cls, reg r32:V, reg n:*, reg n1:V, reg r33:V, reg c11:L, reg stop1:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg missing:cls, reg r38:V, reg r39:V, reg c12:L, reg group_names1:*, reg group_names2:V, reg l:*, reg attr__:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg groups2:*, reg groups3:V, reg attr:cls, reg r45:V, reg c13:V, reg c14:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg r47:V, reg n2:*, reg n3:V, reg r48:I, reg l1:*, reg attr__1:cls, reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg at1:*, reg at2:V, reg c15:V, reg c16:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg n4:*, reg n5:V, reg r54:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg r57:V, reg at3:*, reg at4:V, reg length1:cls, reg r58:V, reg n6:*, reg n7:V, reg r59:V, reg c17:L, reg stop2:cls, reg gettextf:cls, reg n8:*, reg n9:V, reg p6:p(V +), reg r61:V, reg p7:p(V +), reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg dlab1:*, reg dlab2:V, reg c18:V, reg c19:L, reg deparse1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r66:V, reg r67:V, reg substitute:cls, reg r68:V, reg p8:p(V +), reg r70:V, reg dev_hold:cls, reg r72:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r73:V, reg on_exit:cls, reg r75:V, reg add1:*, reg add2:V, reg r76:V, reg c20:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r77:V, reg r78:V, reg unlist:cls, reg groups4:*, reg groups5:V, reg p9:p(V +), reg r80:V, reg range:cls, reg r81:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r82:V, reg r83:V, reg n10:*, reg n11:V, reg c21:cls, reg r84:V, reg method7:*, reg method8:V, reg r85:V, reg c22:L, reg glim:*, reg glim1:V, reg jitter1:*, reg jitter2:V, reg n12:*, reg n13:V, reg r86:V, reg c23:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r87:V, reg glim6:V, reg jitter7:V, reg r88:V, reg c24:cls, reg r89:V, reg glim7:V, reg jitter8:V, reg r90:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r91:V, reg c25:cls, reg r92:V, reg r93:V, reg r94:V, reg method9:*, reg method10:V, reg r96:V, reg c26:L, reg glim10:*, reg glim11:V, reg n14:*, reg n15:V, reg r97:V, reg c27:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r98:V, reg glim16:V, reg r99:V, reg c28:cls, reg r100:V, reg glim17:V, reg r101:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r102:V, reg c29:cls, reg r103:V, reg r104:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r105:V, reg r106:V, reg xlim1:*, reg xlim2:V, reg c30:V, reg c31:L, reg vertical1:*, reg vertical2:V, reg c32:L, reg glim20:*, reg glim21:V, reg glim22:V, reg dlim:*, reg dlim1:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r107:V, reg r108:V, reg ylim1:*, reg ylim2:V, reg c33:V, reg c34:L, reg vertical3:*, reg vertical4:V, reg c35:L, reg dlim2:*, reg dlim3:V, reg dlim4:V, reg glim24:*, reg glim25:V, reg plot_new:cls, reg r109:V, reg plot_window:cls, reg xlim3:*, reg xlim4:V, reg p10:p(V +), reg ylim3:*, reg ylim4:V, reg p11:p(V +), reg log1:*, reg log2:V, reg p12:p(V +), reg ddd1:dots?, reg r113:V, reg frame_plot1:*, reg frame_plot2:V, reg c36:L, reg box:cls, reg r114:V, reg vertical5:*, reg vertical6:V, reg c37:L, reg axes3:*, reg axes4:V, reg c38:L, reg n16:*, reg n17:V, reg r116:V, reg c39:L, reg axis:cls, reg at5:*, reg at6:V, reg p13:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r118:V, reg r119:V, reg groups6:*, reg groups7:V, reg names:cls, reg r120:V, reg p14:p(V +), reg ddd2:dots?, reg r122:V, reg Axis:cls, reg x10:*, reg x11:V, reg p15:p(V +), reg ddd3:dots?, reg r125:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r127:V, reg r128:V, reg ylab1:*, reg ylab2:V, reg c40:V, reg c41:L, reg dlab3:*, reg dlab4:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r129:V, reg r130:V, reg xlab1:*, reg xlab2:V, reg c42:V, reg c43:L, reg glab1:*, reg glab2:V, reg glab3:V, reg axes5:*, reg axes6:V, reg c44:L, reg Axis1:cls, reg x12:*, reg x13:V, reg p16:p(V +), reg ddd4:dots?, reg r132:V, reg n18:*, reg n19:V, reg r133:V, reg c45:L, reg axis1:cls, reg at7:*, reg at8:V, reg p17:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r135:V, reg r136:V, reg groups8:*, reg groups9:V, reg names1:cls, reg r137:V, reg p18:p(V +), reg ddd5:dots?, reg r139:V, reg r140:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r142:V, reg r143:V, reg xlab3:*, reg xlab4:V, reg c46:V, reg c47:L, reg dlab6:*, reg dlab7:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r144:V, reg r145:V, reg ylab3:*, reg ylab4:V, reg c48:V, reg c49:L, reg glab5:*, reg glab6:V, reg title:cls, reg xlab5:*, reg xlab6:V, reg p19:p(V +), reg ylab5:*, reg ylab6:V, reg p20:p(V +), reg ddd6:dots?, reg r148:V, reg cex1:*, reg cex2:V, reg vertical7:*, reg vertical8:V, reg c50:L, reg xinch:cls, reg par2:cls, reg r150:V, reg c51:L, reg r152:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r153:V, reg p21:p(V +), reg r155:V, reg cex5:V, reg r156:V, reg yinch:cls, reg par3:cls, reg r157:V, reg c52:L, reg r159:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r160:V, reg p22:p(V +), reg r162:V, reg r163:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r164:V, reg r165:V, reg n20:*, reg n21:V, reg r166:I, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c53:L, reg x14:V, reg groups10:*, reg groups11:V, reg c54:L, reg i6:I, reg groups13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg i9:*, reg i10:V, reg __3:cls, reg r167:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r168:V, reg i13:I, reg r169:V, reg at9:*, reg at10:V, reg c55:L, reg i15:I, reg at12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i17:I, reg dx9:V, reg i18:*, reg i19:V, reg __4:cls, reg r170:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r171:V, reg i22:I, reg r172:V, reg x15:*, reg x16:V, reg length2:cls, reg r173:V, reg rep_int:cls, reg r174:V, reg method11:*, reg method12:V, reg r175:V, reg c56:L, reg y:*, reg y1:V, reg __5:cls, reg r176:V, reg r177:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r178:V, reg r179:V, reg y2:*, reg y3:V, reg length3:cls, reg r180:V, reg p23:p(V +), reg jitter11:*, reg jitter12:V, reg r182:V, reg p24:p(V +), reg jitter13:*, reg jitter14:V, reg p25:p(V +), reg r185:V, reg r186:V, reg i25:I, reg method13:*, reg method14:V, reg r188:V, reg c57:L, reg split:cls, reg x17:*, reg x18:V, reg p26:p(V +), reg factor:cls, reg x19:*, reg x20:V, reg p27:p(V +), reg r191:V, reg p28:p(V +), reg r193:V, reg lapply:cls, reg xg:*, reg xg1:V, reg p29:p(V +), reg seq_along:*, reg seq_along1:V, reg p30:p(V +), reg r196:V, reg unlist1:cls, reg xg2:*, reg xg3:V, reg p31:p(V +), reg r198:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r199:V, reg i30:I, reg r200:V, reg at13:*, reg at14:V, reg c58:L, reg i32:I, reg at16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i34:I, reg dx11:V, reg i35:*, reg i36:V, reg __6:cls, reg r201:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r202:V, reg i39:I, reg r203:V, reg x21:*, reg x22:V, reg length4:cls, reg r204:V, reg rep_int1:cls, reg r205:V, reg unlist2:cls, reg xo:*, reg xo1:V, reg p32:p(V +), reg r207:V, reg r208:V, reg offset1:*, reg offset2:V, reg r209:V, reg csize:*, reg csize1:V, reg r210:V, reg r211:V, reg vertical9:*, reg vertical10:V, reg c59:L, reg points:cls, reg y4:*, reg y5:V, reg p33:p(V +), reg x23:*, reg x24:V, reg p34:p(V +), reg col1:*, reg col2:V, reg c60:L, reg col4:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg i42:*, reg i43:V, reg r214:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r215:V, reg col7:V, reg r216:V, reg col8:*, reg col9:V, reg length5:cls, reg r217:V, reg __7:cls, reg r218:V, reg r219:V, reg __8:cls, reg r220:V, reg p35:p(V +), reg pch1:*, reg pch2:V, reg c61:L, reg pch4:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i44:*, reg i45:V, reg r222:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r223:V, reg pch7:V, reg r224:V, reg pch8:*, reg pch9:V, reg length6:cls, reg r225:V, reg __9:cls, reg r226:V, reg r227:V, reg __10:cls, reg r228:V, reg p36:p(V +), reg cex6:*, reg cex7:V, reg p37:p(V +), reg ddd7:dots?, reg r231:V, reg i46:I, reg points1:cls, reg x25:*, reg x26:V, reg p38:p(V +), reg y6:*, reg y7:V, reg p39:p(V +), reg col10:*, reg col11:V, reg c62:L, reg col13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg i47:*, reg i48:V, reg r235:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r236:V, reg col16:V, reg r237:V, reg col17:*, reg col18:V, reg length7:cls, reg r238:V, reg __11:cls, reg r239:V, reg r240:V, reg __12:cls, reg r241:V, reg p40:p(V +), reg pch10:*, reg pch11:V, reg c63:L, reg pch13:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg i49:*, reg i50:V, reg r243:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r244:V, reg pch16:V, reg r245:V, reg pch17:*, reg pch18:V, reg length8:cls, reg r246:V, reg __13:cls, reg r247:V, reg r248:V, reg __14:cls, reg r249:V, reg p41:p(V +), reg cex8:*, reg cex9:V, reg p42:p(V +), reg ddd8:dots?, reg r252:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r253:V, reg r254:V, reg invisible:cls, reg r255:V |
    mkenv;
    st x = x;
    method_isMissing = missing.0(method);
    if method_isMissing then L0("overplot") else L0(method);
  L0(method_orDefault):
    st method = method_orDefault;
    jitter_isMissing = missing.0(jitter);
    if jitter_isMissing then L1(0.1) else L1(jitter);
  L1(jitter_orDefault):
    st jitter = jitter_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L2() else L3(offset);
  L2():
    p = prom<V +>{
      return 0.3333333333333333;
    };
    goto L3(p);
  L3(offset_orDefault):
    st offset = offset_orDefault;
    vertical_isMissing = missing.0(vertical);
    if vertical_isMissing then L4(FALSE) else L4(vertical);
  L4(vertical_orDefault):
    st vertical = vertical_orDefault;
    st `group.names` = group_names;
    add_isMissing = missing.0(add);
    if add_isMissing then L5(FALSE) else L5(add);
  L5(add_orDefault):
    st add = add_orDefault;
    at_isMissing = missing.0(at);
    if at_isMissing then L6(NULL) else L6(at);
  L6(at_orDefault):
    st at = at_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L7(NULL) else L7(xlim);
  L7(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L8(NULL) else L8(ylim);
  L8(ylim_orDefault):
    st ylim = ylim_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L9(NULL) else L9(ylab);
  L9(ylab_orDefault):
    st ylab = ylab_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L10(NULL) else L10(xlab);
  L10(xlab_orDefault):
    st xlab = xlab_orDefault;
    dlab_isMissing = missing.0(dlab);
    if dlab_isMissing then L11("") else L11(dlab);
  L11(dlab_orDefault):
    st dlab = dlab_orDefault;
    glab_isMissing = missing.0(glab);
    if glab_isMissing then L12("") else L12(glab);
  L12(glab_orDefault):
    st glab = glab_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L13("") else L13(log);
  L13(log_orDefault):
    st log = log_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L14(0.0) else L14(pch);
  L14(pch_orDefault):
    st pch = pch_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L15() else L16(col);
  L15():
    p1 = prom<V +>{
      par = ldf par;
      r1 = dyn par("fg");
      return r1;
    };
    goto L16(p1);
  L16(col_orDefault):
    st col = col_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L17() else L18(cex);
  L17():
    p2 = prom<V +>{
      par1 = ldf par;
      r3 = dyn par1("cex");
      return r3;
    };
    goto L18(p2);
  L18(cex_orDefault):
    st cex = cex_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L19(TRUE) else L19(axes);
  L19(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L20() else L21(frame_plot);
  L20():
    p3 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    goto L21(p3);
  L21(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    st `...` = ddd;
    pmatch = ldf pmatch;
    check L117() else D0();
  D0():
    deopt 1 [];
  L117():
    p4 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p5 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c("overplot", "jitter", "stack");
      goto L0(r9);
    L2():
      r7 = dyn base("overplot", "jitter", "stack");
      goto L0(r7);
    };
    r11 = dyn pmatch(p4, p5);
    check L118() else D1();
  D1():
    deopt 4 [r11];
  L118():
    c1 = `is.object`(r11);
    if c1 then L119() else L120(r11);
  L22(dx1):
    st method = dx1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L122() else L123();
  L119():
    dr = tryDispatchBuiltin.1("[", r11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L121() else L120(dr);
  L120(r13):
    __ = ldf `[` in base;
    r14 = dyn __(r13, 1);
    goto L22(r14);
  L23(r16):
    c2 = `as.logical`(r16);
    if c2 then L24(c2) else L126();
  L121():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L122():
    method3 = ld method;
    check L124() else D2();
  L123():
    r15 = dyn base1(<sym method>);
    goto L23(r15);
  D2():
    deopt 11 [method3];
  L24(c3):
    c8 = `as.logical`(c3);
    if c8 then L129() else L25();
  L124():
    method4 = force? method3;
    checkMissing(method4);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(method4);
    check L125() else D3();
  L126():
    method5 = ld method;
    check L127() else D4();
  D3():
    deopt 14 [r17];
  D4():
    deopt 15 [c2, method5];
  L25():
    goto L26();
  L26():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L133() else L134();
  L125():
    goto L23(r17);
  L127():
    method6 = force? method5;
    checkMissing(method6);
    r18 = `==`(method6, 0);
    c5 = `as.logical`(r18);
    c6 = `||`(c2, c5);
    goto L24(c6);
  L129():
    stop = ldf stop;
    check L130() else D5();
  D5():
    deopt 21 [];
  L27(r22):
    c9 = `as.logical`(r22);
    if c9 then L137() else L28();
  L130():
    r19 = dyn stop("invalid plotting method");
    check L131() else D6();
  L133():
    x1 = ld x;
    check L135() else D7();
  L134():
    r21 = dyn base2(<sym x>);
    goto L27(r21);
  D6():
    deopt 23 [r19];
  D7():
    deopt 28 [x1];
  L28():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L140() else L141();
  L29(x5):
    st groups = x5;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L150() else L151();
  L131():
    goto L26();
  L135():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r23 = dyn is_list(x2);
    check L136() else D8();
  L137():
    x3 = ld x;
    check L138() else D9();
  D8():
    deopt 31 [r23];
  D9():
    deopt 32 [x3];
  L30(r25):
    c10 = `as.logical`(r25);
    if c10 then L144() else L31();
  L33(r31):
    st n = r31;
    n = ld n;
    check L154() else D16();
  L136():
    goto L27(r23);
  L138():
    x4 = force? x3;
    checkMissing(x4);
    goto L29(x4);
  L140():
    x6 = ld x;
    check L142() else D10();
  L141():
    r24 = dyn base3(<sym x>);
    goto L30(r24);
  L150():
    groups = ld groups;
    check L152() else D14();
  L151():
    r30 = dyn base5(<sym groups>);
    goto L33(r30);
  D10():
    deopt 36 [x6];
  D14():
    deopt 51 [groups];
  D16():
    deopt 56 [n];
  L31():
    goto L29(NULL);
  L142():
    x7 = force? x6;
    checkMissing(x7);
    is_numeric = ldf `is.numeric` in base;
    r26 = dyn is_numeric(x7);
    check L143() else D11();
  L144():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L145() else L146();
  L152():
    groups1 = force? groups;
    checkMissing(groups1);
    length = ldf length in base;
    r32 = dyn length(groups1);
    check L153() else D15();
  L154():
    n1 = force? n;
    checkMissing(n1);
    r33 = `!`(n1);
    c11 = `as.logical`(r33);
    if c11 then L155() else L34();
  D11():
    deopt 39 [r26];
  D15():
    deopt 54 [r32];
  L32(r28):
    goto L29(r28);
  L34():
    goto L35();
  L35():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L159() else L160();
  L143():
    goto L30(r26);
  L145():
    x8 = ld x;
    check L147() else D12();
  L146():
    r27 = dyn base4(<sym x>);
    goto L32(r27);
  L153():
    goto L33(r32);
  L155():
    stop1 = ldf stop;
    check L156() else D17();
  D12():
    deopt 42 [x8];
  D17():
    deopt 60 [];
  L36(r37):
    r39 = `!`(r37);
    c12 = `as.logical`(r39);
    if c12 then L161() else L37();
  L147():
    x9 = force? x8;
    checkMissing(x9);
    list = ldf list in base;
    r29 = dyn list(x9);
    check L148() else D13();
  L156():
    r34 = dyn stop1("invalid first argument");
    check L157() else D18();
  L159():
    missing = ldf missing in base;
    r38 = dyn missing(<sym group.names>);
    goto L36(r38);
  L160():
    r36 = dyn base6(<sym group.names>);
    goto L36(r36);
  D13():
    deopt 45 [r29];
  D18():
    deopt 62 [r34];
  L37():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L166() else L167();
  L38():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L179() else L180();
  L148():
    goto L32(r29);
  L157():
    goto L35();
  L161():
    group_names1 = ld `group.names`;
    check L162() else D19();
  D19():
    deopt 69 [group_names1];
  L39(r42):
    c14 = `as.logical`(r42);
    if c14 then L172() else L41();
  L43(r51):
    c16 = `as.logical`(r51);
    if c16 then L182() else L44();
  L162():
    group_names2 = force? group_names1;
    checkMissing(group_names2);
    l = ld groups;
    attr__ = ldf `attr<-`;
    check L163() else D20();
  L166():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L168() else L169();
  L167():
    r41 = dyn base7(<lang attr(groups, "names")>);
    goto L39(r41);
  L179():
    at1 = ld at;
    check L181() else D27();
  L180():
    r50 = dyn base10(<sym at>);
    goto L43(r50);
  D20():
    deopt 72 [group_names2, l, group_names2];
  D27():
    deopt 99 [at1];
  L40(r44):
    c13 = `==`(r44, NULL);
    goto L39(c13);
  L41():
    goto L38();
  L44():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L187() else L188();
  L46():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L196() else L197();
  L163():
    r40 = dyn attr__(l, NULL, "names", group_names2);
    check L164() else D21();
  L168():
    groups2 = ld groups;
    check L170() else D22();
  L169():
    r43 = dyn base8(<sym groups>, "names");
    goto L40(r43);
  L172():
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L173() else L174();
  L181():
    at2 = force? at1;
    checkMissing(at2);
    c15 = `==`(at2, NULL);
    goto L43(c15);
  L182():
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L183() else L184();
  D21():
    deopt 75 [group_names2, r40];
  D22():
    deopt 80 [groups2];
  L42(r47):
    l1 = ld groups;
    attr__1 = ldf `attr<-`;
    check L176() else D25();
  L45(r53):
    st at = r53;
    goto L46();
  L47(r57):
    n6 = ld n;
    check L191() else D31();
  L49(r65):
    c19 = `as.logical`(r65);
    if c19 then L199() else L50();
  L164():
    st groups = r40;
    goto L38();
  L170():
    groups3 = force? groups2;
    checkMissing(groups3);
    attr = ldf attr in base;
    r45 = dyn attr(groups3, "names");
    check L171() else D23();
  L173():
    n2 = ld n;
    check L175() else D24();
  L174():
    r46 = dyn base9(<sym n>);
    goto L42(r46);
  L183():
    n4 = ld n;
    check L185() else D28();
  L184():
    r52 = dyn base11(<sym n>);
    goto L45(r52);
  L187():
    at3 = ld at;
    check L189() else D29();
  L188():
    r56 = dyn base12(<sym at>);
    goto L47(r56);
  L196():
    dlab1 = ld dlab;
    check L198() else D34();
  L197():
    r64 = dyn base13(<sym dlab>);
    goto L49(r64);
  D23():
    deopt 84 [r45];
  D24():
    deopt 87 [n2];
  D25():
    deopt 91 [r47, l1, r47];
  D28():
    deopt 103 [n4];
  D29():
    deopt 109 [at3];
  D31():
    deopt 112 [r57, n6];
  D34():
    deopt 124 [dlab1];
  L50():
    goto L51();
  L51():
    dev_hold = ldf `dev.hold`;
    check L203() else D37();
  L171():
    goto L40(r45);
  L175():
    n3 = force? n2;
    checkMissing(n3);
    r48 = seq_len(n3);
    goto L42(r48);
  L176():
    r49 = dyn attr__1(l1, NULL, "names", r47);
    check L177() else D26();
  L185():
    n5 = force? n4;
    checkMissing(n5);
    r54 = seq_len(n5);
    goto L45(r54);
  L189():
    at4 = force? at3;
    checkMissing(at4);
    length1 = ldf length in base;
    r58 = dyn length1(at4);
    check L190() else D30();
  L191():
    n7 = force? n6;
    checkMissing(n7);
    r59 = `!=`(r57, n7);
    c17 = `as.logical`(r59);
    if c17 then L192() else L48();
  L198():
    dlab2 = force? dlab1;
    checkMissing(dlab2);
    c18 = `==`(dlab2, NULL);
    goto L49(c18);
  L199():
    deparse1 = ldf deparse1;
    check L200() else D35();
  D26():
    deopt 94 [r47, r49];
  D30():
    deopt 112 [r58];
  D35():
    deopt 128 [];
  D37():
    deopt 135 [];
  L48():
    goto L46();
  L177():
    st groups = r49;
    goto L38();
  L190():
    goto L47(r58);
  L192():
    stop2 = ldf stop;
    check L193() else D32();
  L200():
    p8 = prom<V +>{
      sym14 = ldf substitute;
      base14 = ldf substitute in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      substitute = ldf substitute in base;
      r68 = dyn substitute(<sym x>);
      goto L0(r68);
    L2():
      r66 = dyn base14(<sym x>);
      goto L0(r66);
    };
    r70 = dyn deparse1(p8);
    check L201() else D36();
  L203():
    r72 = dyn dev_hold();
    check L204() else D38();
  D32():
    deopt 116 [];
  D36():
    deopt 130 [r70];
  D38():
    deopt 136 [r72];
  L193():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        n8 = ld n;
        n9 = force? n8;
        checkMissing(n9);
        return n9;
      };
      r61 = dyn gettextf("'at' must have length equal to the number %d of groups", p6);
      return r61;
    };
    r63 = dyn stop2[, domain](p7, NA_LGL);
    check L194() else D33();
  L201():
    st dlab = r70;
    goto L51();
  L204():
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L205() else L206();
  D33():
    deopt 120 [r63];
  L52():
    add1 = ld add;
    check L207() else D39();
  L194():
    goto L46();
  L205():
    on_exit = ldf `on.exit` in base;
    r75 = dyn on_exit(<lang dev.flush()>);
    goto L52();
  L206():
    r73 = dyn base15(<lang dev.flush()>);
    goto L52();
  D39():
    deopt 140 [add1];
  L207():
    add2 = force? add1;
    checkMissing(add2);
    r76 = `!`(add2);
    c20 = `as.logical`(r76);
    if c20 then L208() else L53();
  L53():
    goto L98();
  L98():
    cex1 = ld cex;
    check L324() else D94();
  L208():
    sym16 = ldf range;
    base16 = ldf range in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L209() else L210();
  D94():
    deopt 360 [cex1];
  L54(r78):
    st dlim = r78;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L214() else L215();
  L209():
    unlist = ldf unlist;
    check L211() else D40();
  L210():
    r77 = dyn base16[, `na.rm`](<lang unlist(groups, use.names=FALSE)>, TRUE);
    goto L54(r77);
  L324():
    cex2 = force? cex1;
    checkMissing(cex2);
    vertical7 = ld vertical;
    check L325() else D95();
  D40():
    deopt 146 [];
  D95():
    deopt 361 [cex2, vertical7];
  L55(r83):
    st glim = r83;
    method7 = ld method;
    check L218() else D45();
  L211():
    p9 = prom<V +>{
      groups4 = ld groups;
      groups5 = force? groups4;
      checkMissing(groups5);
      return groups5;
    };
    r80 = dyn unlist[, `use.names`](p9, FALSE);
    check L212() else D41();
  L214():
    n10 = ld n;
    check L216() else D43();
  L215():
    r82 = dyn base17(1, <sym n>);
    goto L55(r82);
  L325():
    vertical8 = force? vertical7;
    checkMissing(vertical8);
    c50 = `as.logical`(vertical8);
    if c50 then L326() else L99();
  D41():
    deopt 150 [r80];
  D43():
    deopt 159 [n10];
  D45():
    deopt 164 [method7];
  L99():
    yinch = ldf yinch;
    check L330() else D98();
  L100(cex5, r156):
    r163 = `*`(cex5, r156);
    st csize = r163;
    sym30 = ldf seq_len;
    base30 = ldf seq_len in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L332() else L333();
  L212():
    range = ldf range in base;
    r81 = dyn range(r80, TRUE);
    check L213() else D42();
  L216():
    n11 = force? n10;
    checkMissing(n11);
    c21 = ldf c in base;
    r84 = dyn c21(1, n11);
    check L217() else D44();
  L218():
    method8 = force? method7;
    checkMissing(method8);
    r85 = `==`(method8, 2);
    c22 = `as.logical`(r85);
    if c22 then L219() else L56();
  L326():
    xinch = ldf xinch;
    check L327() else D96();
  D42():
    deopt 154 [r81];
  D44():
    deopt 162 [r84];
  D96():
    deopt 364 [cex2];
  D98():
    deopt 368 [cex2];
  L56():
    method9 = ld method;
    check L232() else D51();
  L60():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L245() else L246();
  L101(r165):
    s = toForSeq(r165);
    l2 = length(s);
    i = 0;
    goto L102(i);
  L213():
    goto L54(r81);
  L217():
    goto L55(r84);
  L219():
    glim = ld glim;
    check L220() else D46();
  L327():
    p21 = prom<V +>{
      par2 = ldf par;
      r150 = dyn par2("cin");
      c51 = `is.object`(r150);
      if c51 then L1() else L2(r150);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", r150);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r152):
      __1 = ldf `[` in base;
      r153 = dyn __1(r152, 1);
      goto L0(r153);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r155 = dyn xinch(p21);
    check L328() else D97();
  L330():
    p22 = prom<V +>{
      par3 = ldf par;
      r157 = dyn par3("cin");
      c52 = `is.object`(r157);
      if c52 then L1() else L2(r157);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r157);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r159):
      __2 = ldf `[` in base;
      r160 = dyn __2(r159, 2);
      goto L0(r160);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r162 = dyn yinch(p22);
    check L331() else D99();
  L332():
    n20 = ld n;
    check L334() else D100();
  L333():
    r164 = dyn base30(<sym n>);
    goto L101(r164);
  D46():
    deopt 168 [glim];
  D51():
    deopt 191 [method9];
  D97():
    deopt 366 [cex2, r155];
  D99():
    deopt 370 [cex2, r162];
  D100():
    deopt 374 [n20];
  L65(r106):
    c31 = `as.logical`(r106);
    if c31 then L248() else L66();
  L102(i1):
    i2 = `+`.1(i1, 1);
    c53 = `<`.1(l2, i2);
    if c53 then L335() else L115();
  L220():
    glim1 = force? glim;
    checkMissing(glim1);
    jitter1 = ld jitter;
    check L221() else D47();
  L232():
    method10 = force? method9;
    checkMissing(method10);
    r96 = `==`(method10, 3.0);
    c26 = `as.logical`(r96);
    if c26 then L233() else L61();
  L245():
    xlim1 = ld xlim;
    check L247() else D56();
  L246():
    r105 = dyn base22(<sym xlim>);
    goto L65(r105);
  L328():
    goto L100(cex2, r155);
  L331():
    goto L100(cex2, r162);
  L334():
    n21 = force? n20;
    checkMissing(n21);
    r166 = seq_len(n21);
    goto L101(r166);
  D47():
    deopt 169 [glim1, jitter1];
  D56():
    deopt 218 [xlim1];
  L61():
    goto L60();
  L66():
    goto L69();
  L69():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L255() else L256();
  L115():
    x14 = `[[`(s, i2, NULL, TRUE);
    st i = x14;
    groups10 = ld groups;
    check L336() else D101();
  L221():
    jitter2 = force? jitter1;
    checkMissing(jitter2);
    n12 = ld n;
    check L222() else D48();
  L233():
    glim10 = ld glim;
    check L234() else D52();
  L247():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c30 = `==`(xlim2, NULL);
    goto L65(c30);
  L248():
    vertical1 = ld vertical;
    check L249() else D57();
  L335():
    sym40 = ldf invisible;
    base40 = ldf invisible in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L392() else L393();
  D48():
    deopt 170 [glim1, jitter2, n12];
  D52():
    deopt 195 [glim10];
  D57():
    deopt 221 [vertical1];
  D101():
    deopt 377 [i2, groups10];
  L70(r108):
    c34 = `as.logical`(r108);
    if c34 then L258() else L71();
  L116(r254):
    popenv;
    return r254;
  L222():
    n13 = force? n12;
    checkMissing(n13);
    r86 = `==`(n13, 1.0);
    c23 = `as.logical`(r86);
    if c23 then L223() else L57();
  L234():
    glim11 = force? glim10;
    checkMissing(glim11);
    n14 = ld n;
    check L235() else D53();
  L249():
    vertical2 = force? vertical1;
    checkMissing(vertical2);
    c32 = `as.logical`(vertical2);
    if c32 then L250() else L67();
  L255():
    ylim1 = ld ylim;
    check L257() else D60();
  L256():
    r107 = dyn base23(<sym ylim>);
    goto L70(r107);
  L336():
    groups11 = force? groups10;
    checkMissing(groups11);
    c54 = `is.object`(groups11);
    if c54 then L337() else L338(i2, groups11);
  L392():
    invisible = ldf invisible in base;
    r255 = dyn invisible();
    check L394() else D134();
  L393():
    r253 = dyn base40();
    goto L116(r253);
  D53():
    deopt 196 [glim11, n14];
  D60():
    deopt 231 [ylim1];
  D134():
    deopt 501 [r255];
  L57():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L228() else L229();
  L59(glim7, jitter8, r90):
    r93 = `*`(jitter8, r90);
    r94 = `+`(glim7, r93);
    st glim = r94;
    goto L60();
  L67():
    dlim = ld dlim;
    check L253() else D59();
  L68(glim22):
    st xlim = glim22;
    goto L69();
  L71():
    goto L74();
  L74():
    plot_new = ldf `plot.new`;
    check L265() else D64();
  L103(i8, dx7):
    st x = dx7;
    sym31 = ldf `rep.int`;
    base31 = ldf `rep.int` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L341() else L342();
  L223():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L224() else L225();
  L235():
    n15 = force? n14;
    checkMissing(n15);
    r97 = `==`(n15, 1);
    c27 = `as.logical`(r97);
    if c27 then L236() else L62();
  L250():
    glim20 = ld glim;
    check L251() else D58();
  L257():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c33 = `==`(ylim2, NULL);
    goto L70(c33);
  L258():
    vertical3 = ld vertical;
    check L259() else D61();
  L337():
    dr6 = tryDispatchBuiltin.1("[[", groups11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L339() else L338(i2, dr6);
  L338(i6, groups13):
    i9 = ld i;
    check L340() else D102();
  L394():
    goto L116(r255);
  D58():
    deopt 223 [glim20];
  D59():
    deopt 225 [dlim];
  D61():
    deopt 234 [vertical3];
  D64():
    deopt 244 [];
  D102():
    deopt 379 [i6, groups13, i9];
  L58(glim6, jitter7, r88):
    goto L59(glim6, jitter7, r88);
  L62():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L241() else L242();
  L64(glim17, r101):
    r104 = `+`(glim17, r101);
    st glim = r104;
    goto L60();
  L104(i13, r169):
    st y = r169;
    method11 = ld method;
    check L353() else D108();
  L224():
    c24 = ldf c in base;
    r89 = dyn c24(-5.0, 5.0);
    check L226() else D49();
  L225():
    r87 = dyn base18(<lang `-`(5.0)>, 5.0);
    goto L58(glim1, jitter2, r87);
  L228():
    c25 = ldf c in base;
    r92 = dyn c25(-2.0, 2.0);
    check L230() else D50();
  L229():
    r91 = dyn base19(<lang `-`(2.0)>, 2.0);
    goto L59(glim1, jitter2, r91);
  L236():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L237() else L238();
  L251():
    glim21 = force? glim20;
    checkMissing(glim21);
    goto L68(glim21);
  L253():
    dlim1 = force? dlim;
    checkMissing(dlim1);
    goto L68(dlim1);
  L259():
    vertical4 = force? vertical3;
    checkMissing(vertical4);
    c35 = `as.logical`(vertical4);
    if c35 then L260() else L72();
  L265():
    r109 = dyn plot_new();
    check L266() else D65();
  L339():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L103(i2, dx6);
  L340():
    i10 = force? i9;
    __3 = ldf `[[` in base;
    r167 = dyn __3(groups13, i10);
    goto L103(i6, r167);
  L341():
    at9 = ld at;
    check L343() else D103();
  L342():
    r168 = dyn base31(<lang `[`(at, i)>, <lang length(x)>);
    goto L104(i8, r168);
  D49():
    deopt 180 [glim1, jitter2, r89];
  D50():
    deopt 187 [glim1, jitter2, r92];
  D65():
    deopt 245 [r109];
  D103():
    deopt 385 [i8, at9];
  D108():
    deopt 399 [i13, method11];
  L63(glim16, r99):
    goto L64(glim16, r99);
  L72():
    glim24 = ld glim;
    check L263() else D63();
  L73(dlim4):
    st ylim = dlim4;
    goto L74();
  L226():
    goto L58(glim1, jitter2, r89);
  L230():
    goto L59(glim1, jitter2, r92);
  L237():
    c28 = ldf c in base;
    r100 = dyn c28(-1.0, 1.0);
    check L239() else D54();
  L238():
    r98 = dyn base20(<lang `-`(1.0)>, 1.0);
    goto L63(glim11, r98);
  L241():
    c29 = ldf c in base;
    r103 = dyn c29(0.0, 0.5);
    check L243() else D55();
  L242():
    r102 = dyn base21(0.0, 0.5);
    goto L64(glim11, r102);
  L260():
    dlim2 = ld dlim;
    check L261() else D62();
  L266():
    plot_window = ldf `plot.window`;
    check L267() else D66();
  L343():
    at10 = force? at9;
    checkMissing(at10);
    c55 = `is.object`(at10);
    if c55 then L344() else L345(i8, at10);
  L353():
    method12 = force? method11;
    checkMissing(method12);
    r175 = `==`(method12, 2);
    c56 = `as.logical`(r175);
    if c56 then L354() else L107();
  D54():
    deopt 206 [glim11, r100];
  D55():
    deopt 212 [glim11, r103];
  D62():
    deopt 236 [dlim2];
  D63():
    deopt 238 [glim24];
  D66():
    deopt 247 [];
  L105(i17, dx9):
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L348() else L349();
  L107():
    method13 = ld method;
    check L360() else D113();
  L108(i25):
    vertical9 = ld vertical;
    check L385() else D129();
  L239():
    goto L63(glim11, r100);
  L243():
    goto L64(glim11, r103);
  L261():
    dlim3 = force? dlim2;
    checkMissing(dlim3);
    goto L73(dlim3);
  L263():
    glim25 = force? glim24;
    checkMissing(glim25);
    goto L73(glim25);
  L267():
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
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    ddd1 = ld `...`;
    r113 = dyn plot_window[, , , `...`](p10, p11, p12, ddd1);
    check L268() else D67();
  L344():
    dr8 = tryDispatchBuiltin.1("[", at10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L346() else L345(i8, dr8);
  L345(i15, at12):
    i18 = ld i;
    check L347() else D104();
  L354():
    y = ld y;
    check L355() else D109();
  D67():
    deopt 252 [r113];
  D104():
    deopt 387 [i15, at12, i18];
  D109():
    deopt 403 [i13, y];
  D113():
    deopt 416 [i13, method13];
  D129():
    deopt 469 [i25, vertical9];
  L106(i22, r172):
    rep_int = ldf `rep.int` in base;
    r174 = dyn rep_int(dx9, r172);
    check L352() else D107();
  L268():
    frame_plot1 = ld `frame.plot`;
    check L269() else D68();
  L346():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L105(i8, dx8);
  L347():
    i19 = force? i18;
    __4 = ldf `[` in base;
    r170 = dyn __4(at12, i19);
    goto L105(i15, r170);
  L348():
    x15 = ld x;
    check L350() else D105();
  L349():
    r171 = dyn base32(<sym x>);
    goto L106(i17, r171);
  L355():
    y1 = force? y;
    checkMissing(y1);
    __5 = ldf `::`;
    check L356() else D110();
  L360():
    method14 = force? method13;
    checkMissing(method14);
    r188 = `==`(method14, 3);
    c57 = `as.logical`(r188);
    if c57 then L361() else L109();
  L385():
    vertical10 = force? vertical9;
    checkMissing(vertical10);
    c59 = `as.logical`(vertical10);
    if c59 then L386() else L113();
  D68():
    deopt 253 [frame_plot1];
  D105():
    deopt 392 [i17, x15];
  D107():
    deopt 397 [i22, r174];
  D110():
    deopt 405 [i13, y1];
  L109():
    goto L108(i13);
  L113():
    points1 = ldf points;
    check L390() else D132();
  L114(i46):
    goto L102(i46);
  L269():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c36 = `as.logical`(frame_plot2);
    if c36 then L270() else L75();
  L350():
    x16 = force? x15;
    checkMissing(x16);
    length2 = ldf length in base;
    r173 = dyn length2(x16);
    check L351() else D106();
  L352():
    goto L104(i22, r174);
  L356():
    r176 = dyn __5("stats", "runif");
    check L357() else D111();
  L361():
    split = ldf split;
    check L362() else D114();
  L386():
    points = ldf points;
    check L387() else D130();
  D106():
    deopt 395 [i17, r173];
  D111():
    deopt 408 [i13, y1, r176];
  D114():
    deopt 421 [i13];
  D130():
    deopt 472 [i25];
  D132():
    deopt 484 [i25];
  L75():
    goto L76();
  L76():
    vertical5 = ld vertical;
    check L274() else D71();
  L270():
    box = ldf box;
    check L271() else D69();
  L351():
    goto L106(i17, r173);
  L357():
    checkFun.0(r176);
    r177 = r176 as cls;
    p23 = prom<V +>{
      sym33 = ldf length;
      base33 = ldf length in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r179):
      return r179;
    L1():
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      length3 = ldf length in base;
      r180 = dyn length3(y3);
      goto L0(r180);
    L2():
      r178 = dyn base33(<sym y>);
      goto L0(r178);
    };
    p24 = prom<V +>{
      jitter11 = ld jitter;
      jitter12 = force? jitter11;
      checkMissing(jitter12);
      r182 = `-`(<missing>, jitter12);
      return r182;
    };
    p25 = prom<V +>{
      jitter13 = ld jitter;
      jitter14 = force? jitter13;
      checkMissing(jitter14);
      return jitter14;
    };
    r185 = dyn r177(p23, p24, p25);
    check L358() else D112();
  L362():
    p26 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p28 = prom<V +>{
      factor = ldf factor;
      p27 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r191 = dyn factor(p27);
      return r191;
    };
    r193 = dyn split(p26, p28);
    check L363() else D115();
  L387():
    p33 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p34 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p35 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      c60 = `is.object`(col2);
      if c60 then L2() else L3(col2);
    L0(dx13):
      return dx13;
    L2():
      dr12 = tryDispatchBuiltin.1("[", col2);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(col4):
      i42 = ld i;
      i43 = force? i42;
      checkMissing(i43);
      r214 = `-`(i43, 1);
      sym36 = ldf length;
      base36 = ldf length in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L5() else L6();
    L1(col7, r216):
      __7 = ldf `%%` in base;
      r218 = dyn __7(r214, r216);
      r219 = `+`(r218, 1);
      __8 = ldf `[` in base;
      r220 = dyn __8(col7, r219);
      goto L0(r220);
    L4():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    L5():
      col8 = ld col;
      col9 = force? col8;
      checkMissing(col9);
      length5 = ldf length in base;
      r217 = dyn length5(col9);
      goto L1(col4, r217);
    L6():
      r215 = dyn base36(<sym col>);
      goto L1(col4, r215);
    };
    p36 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      c61 = `is.object`(pch2);
      if c61 then L2() else L3(pch2);
    L0(dx15):
      return dx15;
    L2():
      dr14 = tryDispatchBuiltin.1("[", pch2);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(pch4):
      i44 = ld i;
      i45 = force? i44;
      checkMissing(i45);
      r222 = `-`(i45, 1);
      sym37 = ldf length;
      base37 = ldf length in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L5() else L6();
    L1(pch7, r224):
      __9 = ldf `%%` in base;
      r226 = dyn __9(r222, r224);
      r227 = `+`(r226, 1);
      __10 = ldf `[` in base;
      r228 = dyn __10(pch7, r227);
      goto L0(r228);
    L4():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    L5():
      pch8 = ld pch;
      pch9 = force? pch8;
      checkMissing(pch9);
      length6 = ldf length in base;
      r225 = dyn length6(pch9);
      goto L1(pch4, r225);
    L6():
      r223 = dyn base37(<sym pch>);
      goto L1(pch4, r223);
    };
    p37 = prom<V +>{
      cex6 = ld cex;
      cex7 = force? cex6;
      checkMissing(cex7);
      return cex7;
    };
    ddd7 = ld `...`;
    r231 = dyn points[, , col, pch, cex, `...`](p33, p34, p35, p36, p37, ddd7);
    check L388() else D131();
  L390():
    p38 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p39 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p40 = prom<V +>{
      col10 = ld col;
      col11 = force? col10;
      checkMissing(col11);
      c62 = `is.object`(col11);
      if c62 then L2() else L3(col11);
    L0(dx17):
      return dx17;
    L2():
      dr16 = tryDispatchBuiltin.1("[", col11);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(col13):
      i47 = ld i;
      i48 = force? i47;
      checkMissing(i48);
      r235 = `-`(i48, 1);
      sym38 = ldf length;
      base38 = ldf length in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L5() else L6();
    L1(col16, r237):
      __11 = ldf `%%` in base;
      r239 = dyn __11(r235, r237);
      r240 = `+`(r239, 1);
      __12 = ldf `[` in base;
      r241 = dyn __12(col16, r240);
      goto L0(r241);
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    L5():
      col17 = ld col;
      col18 = force? col17;
      checkMissing(col18);
      length7 = ldf length in base;
      r238 = dyn length7(col18);
      goto L1(col13, r238);
    L6():
      r236 = dyn base38(<sym col>);
      goto L1(col13, r236);
    };
    p41 = prom<V +>{
      pch10 = ld pch;
      pch11 = force? pch10;
      checkMissing(pch11);
      c63 = `is.object`(pch11);
      if c63 then L2() else L3(pch11);
    L0(dx19):
      return dx19;
    L2():
      dr18 = tryDispatchBuiltin.1("[", pch11);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L4() else L3(dr18);
    L3(pch13):
      i49 = ld i;
      i50 = force? i49;
      checkMissing(i50);
      r243 = `-`(i50, 1);
      sym39 = ldf length;
      base39 = ldf length in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L5() else L6();
    L1(pch16, r245):
      __13 = ldf `%%` in base;
      r247 = dyn __13(r243, r245);
      r248 = `+`(r247, 1);
      __14 = ldf `[` in base;
      r249 = dyn __14(pch16, r248);
      goto L0(r249);
    L4():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    L5():
      pch17 = ld pch;
      pch18 = force? pch17;
      checkMissing(pch18);
      length8 = ldf length in base;
      r246 = dyn length8(pch18);
      goto L1(pch13, r246);
    L6():
      r244 = dyn base39(<sym pch>);
      goto L1(pch13, r244);
    };
    p42 = prom<V +>{
      cex8 = ld cex;
      cex9 = force? cex8;
      checkMissing(cex9);
      return cex9;
    };
    ddd8 = ld `...`;
    r252 = dyn points1[, , col, pch, cex, `...`](p38, p39, p40, p41, p42, ddd8);
    check L391() else D133();
  D69():
    deopt 256 [];
  D71():
    deopt 260 [vertical5];
  D112():
    deopt 413 [i13, y1, r185];
  D115():
    deopt 424 [i13, r193];
  D131():
    deopt 482 [i25, r231];
  D133():
    deopt 494 [i25, r252];
  L271():
    r114 = dyn box();
    check L272() else D70();
  L274():
    vertical6 = force? vertical5;
    checkMissing(vertical6);
    c37 = `as.logical`(vertical6);
    if c37 then L275() else L77();
  L358():
    r186 = `+`(y1, r185);
    st y = r186;
    goto L108(i13);
  L363():
    st xg = r193;
    lapply = ldf lapply;
    check L364() else D116();
  L388():
    goto L114(i25);
  L391():
    goto L114(i25);
  D70():
    deopt 257 [r114];
  D116():
    deopt 427 [i13];
  L77():
    axes5 = ld axes;
    check L299() else D82();
  L88():
    title = ldf title;
    check L321() else D92();
  L272():
    goto L76();
  L275():
    axes3 = ld axes;
    check L276() else D72();
  L364():
    p29 = prom<V +>{
      xg = ld xg;
      xg1 = force? xg;
      checkMissing(xg1);
      return xg1;
    };
    p30 = prom<V +>{
      seq_along = ld seq_along;
      seq_along1 = force? seq_along;
      checkMissing(seq_along1);
      return seq_along1;
    };
    r196 = dyn lapply(p29, p30);
    check L365() else D117();
  D72():
    deopt 262 [axes3];
  D82():
    deopt 306 [axes5];
  D92():
    deopt 351 [];
  D117():
    deopt 430 [i13, r196];
  L276():
    axes4 = force? axes3;
    checkMissing(axes4);
    c38 = `as.logical`(axes4);
    if c38 then L277() else L78();
  L299():
    axes6 = force? axes5;
    checkMissing(axes6);
    c44 = `as.logical`(axes6);
    if c44 then L300() else L89();
  L321():
    p19 = prom<V +>{
      xlab5 = ld xlab;
      xlab6 = force? xlab5;
      checkMissing(xlab6);
      return xlab6;
    };
    p20 = prom<V +>{
      ylab5 = ld ylab;
      ylab6 = force? ylab5;
      checkMissing(ylab6);
      return ylab6;
    };
    ddd6 = ld `...`;
    r148 = dyn title[xlab, ylab, `...`](p19, p20, ddd6);
    check L322() else D93();
  L365():
    st xo = r196;
    unlist1 = ldf unlist;
    check L366() else D118();
  D93():
    deopt 357 [r148];
  D118():
    deopt 433 [i13];
  L78():
    goto L81();
  L81():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L286() else L287();
  L89():
    goto L92();
  L92():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L309() else L310();
  L277():
    n16 = ld n;
    check L278() else D73();
  L300():
    Axis1 = ldf Axis;
    check L301() else D83();
  L322():
    goto L98();
  L366():
    p31 = prom<V +>{
      xg2 = ld xg;
      xg3 = force? xg2;
      checkMissing(xg3);
      return xg3;
    };
    r198 = dyn unlist1[, `use.names`](p31, FALSE);
    check L367() else D119();
  D73():
    deopt 264 [n16];
  D83():
    deopt 309 [];
  D119():
    deopt 437 [i13, r198];
  L82(r128):
    c41 = `as.logical`(r128);
    if c41 then L289() else L83();
  L93(r143):
    c47 = `as.logical`(r143);
    if c47 then L312() else L94();
  L278():
    n17 = force? n16;
    checkMissing(n17);
    r116 = `>`(n17, 1);
    c39 = `as.logical`(r116);
    if c39 then L279() else L79();
  L286():
    ylab1 = ld ylab;
    check L288() else D78();
  L287():
    r127 = dyn base25(<sym ylab>);
    goto L82(r127);
  L301():
    p16 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    ddd4 = ld `...`;
    r132 = dyn Axis1[, side, `...`](p16, 1.0, ddd4);
    check L302() else D84();
  L309():
    xlab3 = ld xlab;
    check L311() else D88();
  L310():
    r142 = dyn base28(<sym xlab>);
    goto L93(r142);
  L367():
    st x = r198;
    sym34 = ldf `rep.int`;
    base34 = ldf `rep.int` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L368() else L369();
  D78():
    deopt 289 [ylab1];
  D84():
    deopt 314 [r132];
  D88():
    deopt 333 [xlab3];
  L79():
    goto L80();
  L80():
    Axis = ldf Axis;
    check L283() else D76();
  L83():
    goto L84();
  L84():
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L292() else L293();
  L94():
    goto L95();
  L95():
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L315() else L316();
  L110(i30, r200):
    unlist2 = ldf unlist;
    check L380() else D125();
  L279():
    axis = ldf axis;
    check L280() else D74();
  L288():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c40 = `==`(ylab2, NULL);
    goto L82(c40);
  L289():
    dlab3 = ld dlab;
    check L290() else D79();
  L302():
    n18 = ld n;
    check L303() else D85();
  L311():
    xlab4 = force? xlab3;
    checkMissing(xlab4);
    c46 = `==`(xlab4, NULL);
    goto L93(c46);
  L312():
    dlab6 = ld dlab;
    check L313() else D89();
  L368():
    at13 = ld at;
    check L370() else D120();
  L369():
    r199 = dyn base34(<lang `[`(at, i)>, <lang length(x)>);
    goto L110(i13, r199);
  D74():
    deopt 269 [];
  D76():
    deopt 280 [];
  D79():
    deopt 292 [dlab3];
  D85():
    deopt 315 [n18];
  D89():
    deopt 336 [dlab6];
  D120():
    deopt 441 [i13, at13];
  D125():
    deopt 454 [i30, r200];
  L85(r130):
    c43 = `as.logical`(r130);
    if c43 then L295() else L86();
  L96(r145):
    c49 = `as.logical`(r145);
    if c49 then L318() else L97();
  L280():
    p13 = prom<V +>{
      at5 = ld at;
      at6 = force? at5;
      checkMissing(at6);
      return at6;
    };
    p14 = prom<V +>{
      sym24 = ldf names;
      base24 = ldf names in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r119):
      return r119;
    L1():
      groups6 = ld groups;
      groups7 = force? groups6;
      checkMissing(groups7);
      names = ldf names in base;
      r120 = dyn names(groups7);
      goto L0(r120);
    L2():
      r118 = dyn base24(<sym groups>);
      goto L0(r118);
    };
    ddd2 = ld `...`;
    r122 = dyn axis[, at, labels, `...`](1.0, p13, p14, ddd2);
    check L281() else D75();
  L283():
    p15 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    ddd3 = ld `...`;
    r125 = dyn Axis[, side, `...`](p15, 2.0, ddd3);
    check L284() else D77();
  L290():
    dlab4 = force? dlab3;
    checkMissing(dlab4);
    st ylab = dlab4;
    goto L84();
  L292():
    xlab1 = ld xlab;
    check L294() else D80();
  L293():
    r129 = dyn base26(<sym xlab>);
    goto L85(r129);
  L303():
    n19 = force? n18;
    checkMissing(n19);
    r133 = `>`(n19, 1);
    c45 = `as.logical`(r133);
    if c45 then L304() else L90();
  L313():
    dlab7 = force? dlab6;
    checkMissing(dlab7);
    st xlab = dlab7;
    goto L95();
  L315():
    ylab3 = ld ylab;
    check L317() else D90();
  L316():
    r144 = dyn base29(<sym ylab>);
    goto L96(r144);
  L370():
    at14 = force? at13;
    checkMissing(at14);
    c58 = `is.object`(at14);
    if c58 then L371() else L372(i13, at14);
  L380():
    p32 = prom<V +>{
      xo = ld xo;
      xo1 = force? xo;
      checkMissing(xo1);
      return xo1;
    };
    r207 = dyn unlist2[, `use.names`](p32, FALSE);
    check L381() else D126();
  D75():
    deopt 276 [r122];
  D77():
    deopt 285 [r125];
  D80():
    deopt 298 [xlab1];
  D90():
    deopt 342 [ylab3];
  D126():
    deopt 458 [i30, r200, r207];
  L86():
    goto L87(NULL);
  L87(glab3):
    goto L88();
  L90():
    goto L91(NULL);
  L91(r140):
    goto L92();
  L97():
    goto L88();
  L111(i34, dx11):
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L375() else L376();
  L281():
    goto L80();
  L284():
    goto L81();
  L294():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c42 = `==`(xlab2, NULL);
    goto L85(c42);
  L295():
    glab1 = ld glab;
    check L296() else D81();
  L304():
    axis1 = ldf axis;
    check L305() else D86();
  L317():
    ylab4 = force? ylab3;
    checkMissing(ylab4);
    c48 = `==`(ylab4, NULL);
    goto L96(c48);
  L318():
    glab5 = ld glab;
    check L319() else D91();
  L371():
    dr10 = tryDispatchBuiltin.1("[", at14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L373() else L372(i13, dr10);
  L372(i32, at16):
    i35 = ld i;
    check L374() else D121();
  L381():
    r208 = `-`(r207, 1.0);
    offset1 = ld offset;
    check L382() else D127();
  D81():
    deopt 301 [glab1];
  D86():
    deopt 320 [];
  D91():
    deopt 345 [glab5];
  D121():
    deopt 443 [i32, at16, i35];
  D127():
    deopt 460 [i30, r200, r208, offset1];
  L112(i39, r203):
    rep_int1 = ldf `rep.int` in base;
    r205 = dyn rep_int1(dx11, r203);
    check L379() else D124();
  L296():
    glab2 = force? glab1;
    checkMissing(glab2);
    st xlab = glab2;
    goto L87(glab2);
  L305():
    p17 = prom<V +>{
      at7 = ld at;
      at8 = force? at7;
      checkMissing(at8);
      return at8;
    };
    p18 = prom<V +>{
      sym27 = ldf names;
      base27 = ldf names in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r136):
      return r136;
    L1():
      groups8 = ld groups;
      groups9 = force? groups8;
      checkMissing(groups9);
      names1 = ldf names in base;
      r137 = dyn names1(groups9);
      goto L0(r137);
    L2():
      r135 = dyn base27(<sym groups>);
      goto L0(r135);
    };
    ddd5 = ld `...`;
    r139 = dyn axis1[, at, labels, `...`](2.0, p17, p18, ddd5);
    check L306() else D87();
  L319():
    glab6 = force? glab5;
    checkMissing(glab6);
    st ylab = glab6;
    goto L88();
  L373():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L111(i13, dx10);
  L374():
    i36 = force? i35;
    __6 = ldf `[` in base;
    r201 = dyn __6(at16, i36);
    goto L111(i32, r201);
  L375():
    x21 = ld x;
    check L377() else D122();
  L376():
    r202 = dyn base35(<sym x>);
    goto L112(i34, r202);
  L382():
    offset2 = force? offset1;
    checkMissing(offset2);
    r209 = `*`(r208, offset2);
    csize = ld csize;
    check L383() else D128();
  D87():
    deopt 327 [r139];
  D122():
    deopt 448 [i34, x21];
  D124():
    deopt 453 [i39, r205];
  D128():
    deopt 462 [i30, r200, r209, csize];
  L306():
    goto L91(r139);
  L377():
    x22 = force? x21;
    checkMissing(x22);
    length4 = ldf length in base;
    r204 = dyn length4(x22);
    check L378() else D123();
  L379():
    goto L110(i39, r205);
  L383():
    csize1 = force? csize;
    checkMissing(csize1);
    r210 = `*`(r209, csize1);
    r211 = `+`(r200, r210);
    st y = r211;
    goto L108(i30);
  D123():
    deopt 451 [i34, r204];
  L378():
    goto L112(i34, r204);
  }
}