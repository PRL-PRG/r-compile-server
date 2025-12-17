fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3029382899;
    st `plot.spec` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3029382899(x, add, ci, log, xlab, ylab, type, `ci.col`, `ci.lty`, main, sub, `plot.type`, `...`) {
  (reg x:*, reg add:*, reg ci:*, reg log:*, reg xlab:*, reg ylab:*, reg type:*, reg ci_col:*, reg ci_lty:*, reg main:*, reg sub:*, reg plot_type:*, reg ddd:dots) -+> V { var x:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var ci:*, reg ci_isMissing:L, reg ci_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var `ci.col`:*, reg ci_col_isMissing:L, reg ci_col_orDefault:*, var `ci.lty`:*, reg ci_lty_isMissing:L, reg ci_lty_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var `plot.type`:*, reg plot_type_isMissing:L, reg plot_type_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var `...`:dots?, reg r8:cls, reg match_arg:cls, reg plot_type1:*, reg plot_type2:V, reg p2:p(V +), reg r10:V, reg match_arg1:cls, reg log1:*, reg log2:V, reg p3:p(V +), reg r12:V, reg match_call:cls, reg r13:V, reg plot_type3:*, reg plot_type4:V, reg r14:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg quote:cls, reg r17:V, reg l:*, reg c3:L, reg r19:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r22:V, reg l3:*, reg c4:L, reg r24:dots, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r26:dots, reg dx3:V, reg r27:V, reg l6:*, reg c5:L, reg r29:dots, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r31:dots, reg dx5:V, reg r32:V, reg l9:*, reg c6:L, reg r34:dots, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r37:V, reg eval:cls, reg m:*, reg m1:V, reg p4:p(V +), reg parent_frame:cls, reg r39:V, reg p5:p(V +), reg r41:V, reg plot_type5:*, reg plot_type6:V, reg r44:V, reg c7:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r45:V, reg r46:V, reg quote1:cls, reg r47:V, reg l12:*, reg c8:L, reg r49:V, reg l14:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____1:cls, reg r52:V, reg l15:*, reg c9:L, reg r54:dots, reg l17:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r56:dots, reg dx11:V, reg r57:V, reg l18:*, reg c10:L, reg r59:dots, reg l20:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r61:dots, reg dx13:V, reg r62:V, reg l21:*, reg c11:L, reg r64:dots, reg l23:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r67:V, reg eval1:cls, reg m2:*, reg m3:V, reg p6:p(V +), reg parent_frame1:cls, reg r69:V, reg p7:p(V +), reg r71:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r74:V, reg r75:V, reg ylab1:*, reg ylab2:V, reg c12:V, reg c13:L, reg log3:*, reg log4:V, reg r76:V, reg c14:L, reg r77:S, reg sym5:cls, reg base5:cls, reg guard5:L, reg r79:V, reg r80:V, reg log5:*, reg log6:V, reg c15:L, reg c16:L, reg log7:*, reg log8:V, reg c17:L, reg r81:S, reg sym6:cls, reg base6:cls, reg guard6:L, reg r83:V, reg r84:V, reg missing:cls, reg r85:V, reg c18:L, reg c20:V, reg getOption:cls, reg r86:V, reg c21:L, reg c22:V, reg c24:L, reg match_arg2:cls, reg log9:*, reg log10:V, reg p8:p(V +), reg r89:V, reg log11:*, reg log12:V, reg r90:V, reg c25:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r93:V, reg r94:R, reg r95:V, reg x1:*, reg x2:V, reg c26:L, reg r97:R, reg x4:V, reg dr16:V, reg dc8:L, reg dx16:V, reg r99:R, reg dx17:V, reg r100:V, reg log13:cls, reg r101:V, reg r102:V, reg l24:*, reg c27:L, reg r104:V, reg l26:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r106:V, reg dx19:V, reg r107:V, reg log14:*, reg log15:V, reg r109:V, reg c28:L, reg dev_hold:cls, reg r111:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r112:V, reg on_exit:cls, reg r114:V, reg add1:*, reg add2:V, reg c29:L, reg matplot:cls, reg x5:*, reg x6:V, reg c30:L, reg x8:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r115:V, reg p9:p(V +), reg x9:*, reg x10:V, reg c31:L, reg x12:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r117:V, reg p10:p(V +), reg type1:*, reg type2:V, reg p11:p(V +), reg ddd1:dots?, reg r120:V, reg matplot1:cls, reg x13:*, reg x14:V, reg c32:L, reg x16:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r122:V, reg p12:p(V +), reg x17:*, reg x18:V, reg c33:L, reg x20:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r124:V, reg p13:p(V +), reg xlab1:*, reg xlab2:V, reg p14:p(V +), reg ylab3:*, reg ylab4:V, reg p15:p(V +), reg type3:*, reg type4:V, reg p16:p(V +), reg ylog:*, reg ylog1:V, reg p17:p(V +), reg ddd2:dots?, reg r130:V, reg ci1:*, reg ci2:V, reg r131:V, reg c34:L, reg c35:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r132:V, reg c39:L, reg r133:V, reg x21:*, reg x22:V, reg c40:L, reg c42:L, reg x24:V, reg dr28:V, reg dc14:L, reg dx28:V, reg c44:L, reg dx29:V, reg r134:V, reg is_numeric:cls, reg r135:V, reg r136:V, reg c45:L, reg c46:V, reg c48:L, reg c49:V, reg log16:*, reg log17:V, reg r137:V, reg c51:L, reg c52:V, reg c54:L, reg spec_ci:cls, reg x25:*, reg x26:V, reg p18:p(V +), reg ci3:*, reg ci4:V, reg p19:p(V +), reg r141:V, reg log18:*, reg log19:V, reg r142:V, reg c55:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r145:V, reg r146:R, reg r147:V, reg conf_lim:*, reg conf_lim1:V, reg log20:cls, reg r148:V, reg r149:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r150:V, reg r151:V, reg x27:*, reg x28:V, reg c56:L, reg x30:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r152:V, reg max:cls, reg r153:V, reg conf_lim2:*, reg conf_lim3:V, reg c57:L, reg r155:V, reg conf_lim5:V, reg dr32:V, reg dc16:L, reg dx32:V, reg r157:V, reg dx33:V, reg __:cls, reg r158:V, reg r159:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r160:V, reg r161:V, reg x31:*, reg x32:V, reg c58:L, reg x34:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r162:V, reg max1:cls, reg r163:V, reg x35:*, reg x36:V, reg c59:L, reg r165:V, reg x38:V, reg dr36:V, reg dc18:L, reg dx36:V, reg r167:V, reg dx37:V, reg r168:V, reg r169:V, reg lines:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r170:V, reg r171:V, reg rep:cls, reg r172:V, reg p20:p(V +), reg conf_y:*, reg conf_y1:V, reg conf_lim6:*, reg conf_lim7:V, reg r174:V, reg p21:p(V +), reg ci_col1:*, reg ci_col2:V, reg p22:p(V +), reg r177:V, reg lines1:cls, reg conf_x:*, reg conf_x1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r178:V, reg conf_x4:V, reg r179:V, reg c60:cls, reg r180:V, reg x39:*, reg x40:V, reg c61:L, reg conf_x6:V, reg r182:V, reg x42:V, reg dr38:V, reg dc19:L, reg dx38:V, reg conf_x8:V, reg r184:V, reg dx39:V, reg r185:V, reg r186:V, reg r187:V, reg p23:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r189:V, reg r190:V, reg rep1:cls, reg r191:V, reg p24:p(V +), reg ci_col3:*, reg ci_col4:V, reg p25:p(V +), reg r194:V, reg paste0:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r195:V, reg r196:V, reg round:cls, reg r197:V, reg p26:p(V +), reg paste1:cls, reg format:cls, reg conf_lim8:*, reg conf_lim9:V, reg p27:p(V +), reg r200:V, reg p28:p(V +), reg r202:V, reg p29:p(V +), reg r204:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r205:V, reg r206:V, reg x43:*, reg x44:V, reg c62:L, reg x46:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg r207:V, reg max2:cls, reg r208:V, reg conf_lim10:*, reg conf_lim11:V, reg c63:L, reg r210:V, reg conf_lim13:V, reg dr42:V, reg dc21:L, reg dx42:V, reg r212:V, reg dx43:V, reg __1:cls, reg r213:V, reg r214:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r215:V, reg r216:V, reg x47:*, reg x48:V, reg c64:L, reg x50:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg r217:V, reg max3:cls, reg r218:V, reg x51:*, reg x52:V, reg c65:L, reg r220:V, reg x54:V, reg dr46:V, reg dc23:L, reg dx46:V, reg r222:V, reg dx47:V, reg r223:V, reg r224:V, reg lines2:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r225:V, reg r226:V, reg rep2:cls, reg r227:V, reg p30:p(V +), reg conf_y2:*, reg conf_y3:V, reg conf_lim14:*, reg conf_lim15:V, reg r229:V, reg p31:p(V +), reg ci_col5:*, reg ci_col6:V, reg p32:p(V +), reg r232:V, reg lines3:cls, reg conf_x9:*, reg conf_x10:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r233:V, reg conf_x13:V, reg r234:V, reg c66:cls, reg r235:V, reg x55:*, reg x56:V, reg c67:L, reg conf_x15:V, reg r237:V, reg x58:V, reg dr48:V, reg dc24:L, reg dx48:V, reg conf_x17:V, reg r239:V, reg dx49:V, reg r240:V, reg r241:V, reg r242:V, reg p33:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r244:V, reg r245:V, reg rep3:cls, reg r246:V, reg p34:p(V +), reg ci_col7:*, reg ci_col8:V, reg p35:p(V +), reg r249:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r250:V, reg r251:V, reg main1:*, reg main2:V, reg c68:V, reg c69:L, reg paste2:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r252:V, reg r253:V, reg x59:*, reg x60:V, reg c70:L, reg x62:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg r254:V, reg c71:V, reg r255:V, reg c72:L, reg paste3:cls, reg x63:*, reg x64:V, reg c73:L, reg x66:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg r256:V, reg p36:p(V +), reg r258:V, reg p37:p(V +), reg x67:*, reg x68:V, reg c74:L, reg x70:V, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg r260:V, reg p38:p(V +), reg r262:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r264:V, reg r265:V, reg sub1:*, reg sub2:V, reg c75:V, reg c76:L, reg c78:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r266:V, reg c81:L, reg r267:V, reg x71:*, reg x72:V, reg c82:L, reg c84:L, reg x74:V, reg dr56:V, reg dc28:L, reg dx56:V, reg c86:L, reg dx57:V, reg r268:V, reg is_numeric1:cls, reg r269:V, reg c87:L, reg c88:V, reg c90:L, reg paste4:cls, reg format1:cls, reg x75:*, reg x76:V, reg c91:L, reg x78:V, reg dr58:V, reg dc29:L, reg dx58:V, reg dx59:V, reg r270:V, reg p39:p(V +), reg r272:V, reg p40:p(V +), reg ci_text:*, reg ci_text1:V, reg p41:p(V +), reg r275:V, reg title:cls, reg main3:*, reg main4:V, reg p42:p(V +), reg sub3:*, reg sub4:V, reg p43:p(V +), reg r279:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r280:V, reg r281:V, reg x79:*, reg x80:V, reg invisible:cls, reg r282:V |
    mkenv;
    st x = x;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(FALSE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    ci_isMissing = missing.0(ci);
    if ci_isMissing then L1(0.95) else L1(ci);
  L1(ci_orDefault):
    st ci = ci_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L2() else L3(log);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("yes", "dB", "no");
      goto L0(r2);
    L2():
      r = dyn base("yes", "dB", "no");
      goto L0(r);
    };
    goto L3(p);
  L3(log_orDefault):
    st log = log_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L4("frequency") else L4(xlab);
  L4(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L5(NULL) else L5(ylab);
  L5(ylab_orDefault):
    st ylab = ylab_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L6("l") else L6(type);
  L6(type_orDefault):
    st type = type_orDefault;
    ci_col_isMissing = missing.0(ci_col);
    if ci_col_isMissing then L7("blue") else L7(ci_col);
  L7(ci_col_orDefault):
    st `ci.col` = ci_col_orDefault;
    ci_lty_isMissing = missing.0(ci_lty);
    if ci_lty_isMissing then L8(3.0) else L8(ci_lty);
  L8(ci_lty_orDefault):
    st `ci.lty` = ci_lty_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L9(NULL) else L9(main);
  L9(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L10(NULL) else L10(sub);
  L10(sub_orDefault):
    st sub = sub_orDefault;
    plot_type_isMissing = missing.0(plot_type);
    if plot_type_isMissing then L11() else L12(plot_type);
  L11():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("marginal", "coherency", "phase");
      goto L0(r6);
    L2():
      r4 = dyn base1("marginal", "coherency", "phase");
      goto L0(r4);
    };
    goto L12(p1);
  L12(plot_type_orDefault):
    st `plot.type` = plot_type_orDefault;
    st `...` = ddd;
    r8 = clos inner1727959667;
    st `spec.ci` = r8;
    match_arg = ldf `match.arg`;
    check L65() else D0();
  D0():
    deopt 4 [];
  L65():
    p2 = prom<V +>{
      plot_type1 = ld `plot.type`;
      plot_type2 = force? plot_type1;
      checkMissing(plot_type2);
      return plot_type2;
    };
    r10 = dyn match_arg(p2);
    check L66() else D1();
  D1():
    deopt 6 [r10];
  L66():
    st `plot.type` = r10;
    match_arg1 = ldf `match.arg`;
    check L67() else D2();
  D2():
    deopt 9 [];
  L67():
    p3 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    r12 = dyn match_arg1(p3);
    check L68() else D3();
  D3():
    deopt 11 [r12];
  L68():
    st log = r12;
    match_call = ldf `match.call`;
    check L69() else D4();
  D4():
    deopt 14 [];
  L69():
    r13 = dyn match_call();
    check L70() else D5();
  D5():
    deopt 15 [r13];
  L70():
    st m = r13;
    plot_type3 = ld `plot.type`;
    check L71() else D6();
  D6():
    deopt 17 [plot_type3];
  L71():
    plot_type4 = force? plot_type3;
    checkMissing(plot_type4);
    r14 = `==`(plot_type4, "coherency");
    c2 = `as.logical`(r14);
    if c2 then L72() else L13();
  L13():
    plot_type5 = ld `plot.type`;
    check L94() else D9();
  L72():
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L73() else L74();
  D9():
    deopt 48 [plot_type5];
  L14(r16):
    l = ld m;
    c3 = `is.object`(l);
    if c3 then L75() else L76(r16, l);
  L73():
    quote = ldf quote in base;
    r17 = dyn quote(<lang `::`(stats, plot.spec.coherency)>);
    goto L14(r17);
  L74():
    r15 = dyn base2(<lang `::`(stats, plot.spec.coherency)>);
    goto L14(r15);
  L94():
    plot_type6 = force? plot_type5;
    checkMissing(plot_type6);
    r44 = `==`(plot_type6, "phase");
    c7 = `as.logical`(r44);
    if c7 then L95() else L17();
  L15(dx1):
    st m = dx1;
    l3 = ld m;
    c4 = `is.object`(l3);
    if c4 then L79() else L80(NULL, l3);
  L17():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L117() else L118();
  L75():
    dr = tryDispatchBuiltin.0("[[<-", l, r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76(r16, dr);
  L76(r19, l2):
    ____ = ldf `[[<-` in base;
    r22 = dyn ____(l2, r16, 1);
    goto L15(r22);
  L95():
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L96() else L97();
  L18(r46):
    l12 = ld m;
    c8 = `is.object`(l12);
    if c8 then L98() else L99(r46, l12);
  L21(r75):
    c13 = `as.logical`(r75);
    if c13 then L120() else L22();
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L78(r26, dx3):
    st m = dx3;
    l6 = ld m;
    c5 = `is.object`(l6);
    if c5 then L83() else L84(r26, l6);
  L79():
    dr2 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L81() else L80(NULL, dr2);
  L80(r24, l5):
    r27 = `$<-`(l5, <sym add>, NULL);
    goto L78(r24, r27);
  L96():
    quote1 = ldf quote in base;
    r47 = dyn quote1(<lang `::`(stats, plot.spec.phase)>);
    goto L18(r47);
  L97():
    r45 = dyn base3(<lang `::`(stats, plot.spec.phase)>);
    goto L18(r45);
  L117():
    ylab1 = ld ylab;
    check L119() else D12();
  L118():
    r74 = dyn base4(<sym ylab>);
    goto L21(r74);
  D12():
    deopt 80 [ylab1];
  L19(dx9):
    st m = dx9;
    l15 = ld m;
    c9 = `is.object`(l15);
    if c9 then L102() else L103(NULL, l15);
  L22():
    goto L25();
  L25():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L125() else L126();
  L81():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L78(NULL, dx2);
  L82(r31, dx5):
    st m = dx5;
    l9 = ld m;
    c6 = `is.object`(l9);
    if c6 then L87() else L88(r31, l9);
  L83():
    dr4 = tryDispatchBuiltin.0("$<-", l6, r26);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L85() else L84(r26, dr4);
  L84(r29, l8):
    r32 = `$<-`(l8, <sym log>, r26);
    goto L82(r29, r32);
  L98():
    dr8 = tryDispatchBuiltin.0("[[<-", l12, r46);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L100() else L99(r46, dr8);
  L99(r49, l14):
    ____1 = ldf `[[<-` in base;
    r52 = dyn ____1(l14, r46, 1);
    goto L19(r52);
  L119():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c12 = `==`(ylab2, NULL);
    goto L21(c12);
  L120():
    log3 = ld log;
    check L121() else D13();
  D13():
    deopt 83 [log3];
  L26(r80):
    c16 = `as.logical`(r80);
    if c16 then L128() else L27();
  L85():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L82(r26, dx4);
  L86(dx7):
    st m = dx7;
    eval = ldf eval;
    check L90() else D7();
  L87():
    dr6 = tryDispatchBuiltin.0("$<-", l9, r31);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88(r31, dr6);
  L88(r34, l11):
    r37 = `$<-`(l11, <sym plot.type>, r31);
    goto L86(r37);
  L100():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L19(dx8);
  L101(r56, dx11):
    st m = dx11;
    l18 = ld m;
    c10 = `is.object`(l18);
    if c10 then L106() else L107(r56, l18);
  L102():
    dr10 = tryDispatchBuiltin.0("$<-", l15, NULL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L104() else L103(NULL, dr10);
  L103(r54, l17):
    r57 = `$<-`(l17, <sym add>, NULL);
    goto L101(r54, r57);
  L121():
    log4 = force? log3;
    checkMissing(log4);
    r76 = `==`(log4, "dB");
    c14 = `as.logical`(r76);
    if c14 then L122() else L23();
  L125():
    log5 = ld log;
    check L127() else D14();
  L126():
    r79 = dyn base5(<sym log>);
    goto L26(r79);
  D7():
    deopt 41 [];
  D14():
    deopt 95 [log5];
  L23():
    goto L24("spectrum");
  L24(r77):
    st ylab = r77;
    goto L25();
  L27():
    goto L30();
  L30():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L133() else L134();
  L89():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L86(dx6);
  L90():
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p5 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r39 = dyn parent_frame();
      return r39;
    };
    r41 = dyn eval(p4, p5);
    check L91() else D8();
  L104():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L101(NULL, dx10);
  L105(r61, dx13):
    st m = dx13;
    l21 = ld m;
    c11 = `is.object`(l21);
    if c11 then L110() else L111(r61, l21);
  L106():
    dr12 = tryDispatchBuiltin.0("$<-", l18, r56);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L108() else L107(r56, dr12);
  L107(r59, l20):
    r62 = `$<-`(l20, <sym log>, r56);
    goto L105(r59, r62);
  L122():
    goto L24("spectrum (dB)");
  L127():
    log6 = force? log5;
    checkMissing(log6);
    c15 = `is.logical`(log6);
    goto L26(c15);
  L128():
    log7 = ld log;
    check L129() else D15();
  D8():
    deopt 44 [r41];
  D15():
    deopt 98 [log7];
  L31(r84):
    c18 = `as.logical`(r84);
    if c18 then L135() else L32(c18);
  L91():
    popenv;
    return r41;
  L108():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L105(r56, dx12);
  L109(dx15):
    st m = dx15;
    eval1 = ldf eval;
    check L113() else D10();
  L110():
    dr14 = tryDispatchBuiltin.0("$<-", l21, r61);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L112() else L111(r61, dr14);
  L111(r64, l23):
    r67 = `$<-`(l23, <sym plot.type>, r61);
    goto L109(r67);
  L129():
    log8 = force? log7;
    checkMissing(log8);
    c17 = `as.logical`(log8);
    if c17 then L130() else L28();
  L133():
    missing = ldf missing in base;
    r85 = dyn missing(<sym log>);
    goto L31(r85);
  L134():
    r83 = dyn base6(<sym log>);
    goto L31(r83);
  D10():
    deopt 72 [];
  L28():
    goto L29("no");
  L29(r81):
    st log = r81;
    goto L30();
  L32(c20):
    c24 = `as.logical`(c20);
    if c24 then L139() else L33();
  L112():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L109(dx14);
  L113():
    p6 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    p7 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r69 = dyn parent_frame1();
      return r69;
    };
    r71 = dyn eval1(p6, p7);
    check L114() else D11();
  L130():
    goto L29("yes");
  L135():
    getOption = ldf getOption;
    check L136() else D16();
  D11():
    deopt 75 [r71];
  D16():
    deopt 111 [c18];
  L33():
    goto L34();
  L34():
    match_arg2 = ldf `match.arg`;
    check L141() else D18();
  L114():
    popenv;
    return r71;
  L136():
    r86 = dyn getOption("ts.S.compat");
    check L137() else D17();
  L139():
    st log = "dB";
    goto L34();
  D17():
    deopt 113 [c18, r86];
  D18():
    deopt 121 [];
  L137():
    c21 = `as.logical`(r86);
    c22 = `&&`(c18, c21);
    goto L32(c22);
  L141():
    p8 = prom<V +>{
      log9 = ld log;
      log10 = force? log9;
      checkMissing(log10);
      return log10;
    };
    r89 = dyn match_arg2(p8);
    check L142() else D19();
  D19():
    deopt 123 [r89];
  L142():
    st log = r89;
    st ylog = "";
    log11 = ld log;
    check L143() else D20();
  D20():
    deopt 128 [log11];
  L143():
    log12 = force? log11;
    checkMissing(log12);
    r90 = `==`(log12, "dB");
    c25 = `as.logical`(r90);
    if c25 then L144() else L35();
  L35():
    goto L37();
  L37():
    log14 = ld log;
    check L158() else D23();
  L144():
    sym7 = ldf log10;
    base7 = ldf log10 in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L145() else L146();
  D23():
    deopt 146 [log14];
  L36(r94, r95):
    r102 = `*`(r94, r95);
    l24 = ld x;
    c27 = `is.object`(l24);
    if c27 then L154() else L155(r102, l24);
  L145():
    x1 = ld x;
    check L147() else D21();
  L146():
    r93 = dyn base7(<lang `$`(x, spec)>);
    goto L36(10.0, r93);
  L158():
    log15 = force? log14;
    checkMissing(log15);
    r109 = `==`(log15, "yes");
    c28 = `as.logical`(r109);
    if c28 then L159() else L38();
  D21():
    deopt 135 [10.0, x1];
  L38():
    goto L39();
  L39():
    dev_hold = ldf `dev.hold`;
    check L161() else D24();
  L147():
    x2 = force? x1;
    checkMissing(x2);
    c26 = `is.object`(x2);
    if c26 then L149() else L150(10.0, x2);
  L153(r106, dx19):
    st x = dx19;
    goto L37();
  L154():
    dr18 = tryDispatchBuiltin.0("$<-", l24, r102);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L156() else L155(r102, dr18);
  L155(r104, l26):
    r107 = `$<-`(l26, <sym spec>, r102);
    goto L153(r104, r107);
  L159():
    st ylog = "y";
    goto L39();
  D24():
    deopt 156 [];
  L148(r99, dx17):
    log13 = ldf log10 in base;
    r101 = dyn log13(dx17);
    check L152() else D22();
  L149():
    dr16 = tryDispatchBuiltin.1("$", x2);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L151() else L150(10.0, dr16);
  L150(r97, x4):
    r100 = `$`(x4, <sym spec>);
    goto L148(r97, r100);
  L156():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L153(r102, dx18);
  L161():
    r111 = dyn dev_hold();
    check L162() else D25();
  D22():
    deopt 139 [r99, r101];
  D25():
    deopt 157 [r111];
  L151():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L148(10.0, dx16);
  L152():
    goto L36(r99, r101);
  L162():
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L163() else L164();
  L40():
    add1 = ld add;
    check L165() else D26();
  L163():
    on_exit = ldf `on.exit` in base;
    r114 = dyn on_exit(<lang dev.flush()>);
    goto L40();
  L164():
    r112 = dyn base8(<lang dev.flush()>);
    goto L40();
  D26():
    deopt 161 [add1];
  L165():
    add2 = force? add1;
    checkMissing(add2);
    c29 = `as.logical`(add2);
    if c29 then L166() else L41();
  L41():
    matplot1 = ldf matplot;
    check L170() else D29();
  L42():
    sym26 = ldf invisible;
    base26 = ldf invisible in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L283() else L284();
  L166():
    matplot = ldf matplot;
    check L167() else D27();
  D27():
    deopt 164 [];
  D29():
    deopt 174 [];
  L64(r281):
    popenv;
    return r281;
  L167():
    p9 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c30 = `is.object`(x6);
      if c30 then L1() else L2(x6);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", x6);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x8):
      r115 = `$`(x8, <sym freq>);
      goto L0(r115);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p10 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c31 = `is.object`(x10);
      if c31 then L1() else L2(x10);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", x10);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(x12):
      r117 = `$`(x12, <sym spec>);
      goto L0(r117);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p11 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    ddd1 = ld `...`;
    r120 = dyn matplot[, , type, add, `...`](p9, p10, p11, TRUE, ddd1);
    check L168() else D28();
  L170():
    p12 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c32 = `is.object`(x14);
      if c32 then L1() else L2(x14);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("$", x14);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(x16):
      r122 = `$`(x16, <sym freq>);
      goto L0(r122);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    p13 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c33 = `is.object`(x18);
      if c33 then L1() else L2(x18);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("$", x18);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(x20):
      r124 = `$`(x20, <sym spec>);
      goto L0(r124);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p14 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p15 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p16 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p17 = prom<V +>{
      ylog = ld ylog;
      ylog1 = force? ylog;
      checkMissing(ylog1);
      return ylog1;
    };
    ddd2 = ld `...`;
    r130 = dyn matplot1[, , xlab, ylab, type, log, `...`](p12, p13, p14, p15, p16, p17, ddd2);
    check L171() else D30();
  L283():
    x79 = ld x;
    check L285() else D72();
  L284():
    r280 = dyn base26(<sym x>);
    goto L64(r280);
  D28():
    deopt 172 [r120];
  D30():
    deopt 186 [r130];
  D72():
    deopt 360 [x79];
  L168():
    goto L42();
  L171():
    ci1 = ld ci;
    check L172() else D31();
  L285():
    x80 = force? x79;
    checkMissing(x80);
    invisible = ldf invisible in base;
    r282 = dyn invisible(x80);
    check L286() else D73();
  D31():
    deopt 187 [ci1];
  D73():
    deopt 363 [r282];
  L172():
    ci2 = force? ci1;
    checkMissing(ci2);
    r131 = `<=`(ci2, 0.0);
    c34 = `as.logical`(r131);
    if c34 then L43(c34) else L173();
  L286():
    goto L64(r282);
  L43(c35):
    c48 = `as.logical`(c35);
    if c48 then L45(c48) else L183();
  L173():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L174() else L175();
  L44(c39, r133):
    r136 = `!`(r133);
    c45 = `as.logical`(r136);
    c46 = `||`(c39, c45);
    goto L43(c46);
  L45(c49):
    c54 = `as.logical`(c49);
    if c54 then L186() else L46();
  L174():
    x21 = ld x;
    check L176() else D32();
  L175():
    r132 = dyn base9(<lang `$`(x, df)>);
    goto L44(c34, r132);
  L183():
    log16 = ld log;
    check L184() else D34();
  D32():
    deopt 193 [c34, x21];
  D34():
    deopt 200 [c48, log16];
  L46():
    spec_ci = ldf `spec.ci`;
    check L188() else D35();
  L47():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L257() else L258();
  L176():
    x22 = force? x21;
    checkMissing(x22);
    c40 = `is.object`(x22);
    if c40 then L178() else L179(c34, x22);
  L184():
    log17 = force? log16;
    checkMissing(log17);
    r137 = `==`(log17, "no");
    c51 = `as.logical`(r137);
    c52 = `||`(c48, c51);
    goto L45(c52);
  L186():
    st `ci.text` = "";
    goto L47();
  D35():
    deopt 209 [];
  L56(r251):
    c69 = `as.logical`(r251);
    if c69 then L260() else L57();
  L177(c44, dx29):
    is_numeric = ldf `is.numeric` in base;
    r135 = dyn is_numeric(dx29);
    check L181() else D33();
  L178():
    dr28 = tryDispatchBuiltin.1("$", x22);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L180() else L179(c34, dr28);
  L179(c42, x24):
    r134 = `$`(x24, <sym df>);
    goto L177(c42, r134);
  L188():
    p18 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p19 = prom<V +>{
      ci3 = ld ci;
      ci4 = force? ci3;
      checkMissing(ci4);
      return ci4;
    };
    r141 = dyn spec_ci[, coverage](p18, p19);
    check L189() else D36();
  L257():
    main1 = ld main;
    check L259() else D62();
  L258():
    r250 = dyn base22(<sym main>);
    goto L56(r250);
  D33():
    deopt 197 [c44, r135];
  D36():
    deopt 213 [r141];
  D62():
    deopt 317 [main1];
  L57():
    goto L58();
  L58():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L264() else L265();
  L180():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L177(c34, dx28);
  L181():
    goto L44(c44, r135);
  L189():
    st `conf.lim` = r141;
    log18 = ld log;
    check L190() else D37();
  L259():
    main2 = force? main1;
    checkMissing(main2);
    c68 = `==`(main2, NULL);
    goto L56(c68);
  L260():
    paste2 = ldf paste;
    check L261() else D63();
  D37():
    deopt 215 [log18];
  D63():
    deopt 321 [];
  L59(r265):
    c76 = `as.logical`(r265);
    if c76 then L267() else L60(c76);
  L190():
    log19 = force? log18;
    checkMissing(log19);
    r142 = `==`(log19, "dB");
    c55 = `as.logical`(r142);
    if c55 then L191() else L48();
  L261():
    p37 = prom<V +>{
      sym23 = ldf `is.null`;
      base23 = ldf `is.null` in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L2() else L3();
    L0(r253):
      r255 = `!`(r253);
      c72 = `as.logical`(r255);
      if c72 then L8() else L1();
    L2():
      x59 = ld x;
      x60 = force? x59;
      checkMissing(x60);
      c70 = `is.object`(x60);
      if c70 then L5() else L6(x60);
    L3():
      r252 = dyn base23(<lang `$`(x, series)>);
      goto L0(r252);
    L1():
      return "from specified model";
    L4(dx51):
      c71 = `==`(dx51, NULL);
      goto L0(c71);
    L5():
      dr50 = tryDispatchBuiltin.1("$", x60);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L7() else L6(dr50);
    L6(x62):
      r254 = `$`(x62, <sym series>);
      goto L4(r254);
    L8():
      paste3 = ldf paste;
      p36 = prom<V +>{
        x63 = ld x;
        x64 = force? x63;
        checkMissing(x64);
        c73 = `is.object`(x64);
        if c73 then L1() else L2(x64);
      L0(dx53):
        return dx53;
      L1():
        dr52 = tryDispatchBuiltin.1("$", x64);
        dc26 = getTryDispatchBuiltinDispatched(dr52);
        if dc26 then L3() else L2(dr52);
      L2(x66):
        r256 = `$`(x66, <sym series>);
        goto L0(r256);
      L3():
        dx52 = getTryDispatchBuiltinValue(dr52);
        goto L0(dx52);
      };
      r258 = dyn paste3("Series:", p36);
      return r258;
    L7():
      dx50 = getTryDispatchBuiltinValue(dr50);
      goto L4(dx50);
    };
    p38 = prom<V +>{
      x67 = ld x;
      x68 = force? x67;
      checkMissing(x68);
      c74 = `is.object`(x68);
      if c74 then L1() else L2(x68);
    L0(dx55):
      return dx55;
    L1():
      dr54 = tryDispatchBuiltin.1("$", x68);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(x70):
      r260 = `$`(x70, <sym method>);
      goto L0(r260);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx54);
    };
    r262 = dyn paste2[, , sep](p37, p38, "\n");
    check L262() else D64();
  L264():
    sub1 = ld sub;
    check L266() else D65();
  L265():
    r264 = dyn base24(<sym sub>);
    goto L59(r264);
  D64():
    deopt 326 [r262];
  D65():
    deopt 331 [sub1];
  L48():
    st `ci.text` = "";
    sym17 = ldf max;
    base17 = ldf max in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L228() else L229();
  L60(c78):
    c90 = `as.logical`(c78);
    if c90 then L277() else L62();
  L191():
    sym10 = ldf log10;
    base10 = ldf log10 in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L192() else L193();
  L262():
    st main = r262;
    goto L58();
  L266():
    sub2 = force? sub1;
    checkMissing(sub2);
    c75 = `==`(sub2, NULL);
    goto L59(c75);
  L267():
    sym25 = ldf `is.numeric`;
    base25 = ldf `is.numeric` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L268() else L269();
  L49(r146, r147):
    r149 = `*`(r146, r147);
    st `conf.lim` = r149;
    sym11 = ldf max;
    base11 = ldf max in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L196() else L197();
  L53(r206):
    conf_lim10 = ld `conf.lim`;
    check L236() else D54();
  L61(c81, r267):
    c87 = `as.logical`(r267);
    c88 = `&&`(c81, c87);
    goto L60(c88);
  L62():
    goto L63();
  L63():
    title = ldf title;
    check L281() else D70();
  L192():
    conf_lim = ld `conf.lim`;
    check L194() else D38();
  L193():
    r145 = dyn base10(<sym conf.lim>);
    goto L49(10.0, r145);
  L228():
    x43 = ld x;
    check L230() else D52();
  L229():
    r205 = dyn base17(<lang `$`(x, spec)>);
    goto L53(r205);
  L268():
    x71 = ld x;
    check L270() else D66();
  L269():
    r266 = dyn base25(<lang `$`(x, bandwidth)>);
    goto L61(c76, r266);
  L277():
    paste4 = ldf paste0;
    check L278() else D68();
  D38():
    deopt 222 [10.0, conf_lim];
  D52():
    deopt 280 [x43];
  D54():
    deopt 284 [r206, conf_lim10];
  D66():
    deopt 336 [c76, x71];
  D68():
    deopt 343 [];
  D70():
    deopt 352 [];
  L50(r151):
    conf_lim2 = ld `conf.lim`;
    check L204() else D42();
  L194():
    conf_lim1 = force? conf_lim;
    checkMissing(conf_lim1);
    log20 = ldf log10 in base;
    r148 = dyn log20(conf_lim1);
    check L195() else D39();
  L196():
    x27 = ld x;
    check L198() else D40();
  L197():
    r150 = dyn base11(<lang `$`(x, spec)>);
    goto L50(r150);
  L230():
    x44 = force? x43;
    checkMissing(x44);
    c62 = `is.object`(x44);
    if c62 then L232() else L233(x44);
  L236():
    conf_lim11 = force? conf_lim10;
    checkMissing(conf_lim11);
    c63 = `is.object`(conf_lim11);
    if c63 then L237() else L238(r206, conf_lim11);
  L270():
    x72 = force? x71;
    checkMissing(x72);
    c82 = `is.object`(x72);
    if c82 then L272() else L273(c76, x72);
  L278():
    p40 = prom<V +>{
      format1 = ldf format;
      p39 = prom<V +>{
        x75 = ld x;
        x76 = force? x75;
        checkMissing(x76);
        c91 = `is.object`(x76);
        if c91 then L1() else L2(x76);
      L0(dx59):
        return dx59;
      L1():
        dr58 = tryDispatchBuiltin.1("$", x76);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L3() else L2(dr58);
      L2(x78):
        r270 = `$`(x78, <sym bandwidth>);
        goto L0(r270);
      L3():
        dx58 = getTryDispatchBuiltinValue(dr58);
        goto L0(dx58);
      };
      r272 = dyn format1[, digits](p39, 3.0);
      return r272;
    };
    p41 = prom<V +>{
      ci_text = ld `ci.text`;
      ci_text1 = force? ci_text;
      checkMissing(ci_text1);
      return ci_text1;
    };
    r275 = dyn paste4("bandwidth = ", p40, p41);
    check L279() else D69();
  L281():
    p42 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p43 = prom<V +>{
      sub3 = ld sub;
      sub4 = force? sub3;
      checkMissing(sub4);
      return sub4;
    };
    r279 = dyn title[main, sub](p42, p43);
    check L282() else D71();
  D39():
    deopt 225 [10.0, r148];
  D40():
    deopt 230 [x27];
  D42():
    deopt 234 [r151, conf_lim2];
  D69():
    deopt 347 [r275];
  D71():
    deopt 357 [r279];
  L54(r212, dx43):
    r214 = `/`(r212, dx43);
    st `conf.y` = r214;
    sym18 = ldf max;
    base18 = ldf max in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L240() else L241();
  L195():
    goto L49(10.0, r148);
  L198():
    x28 = force? x27;
    checkMissing(x28);
    c56 = `is.object`(x28);
    if c56 then L200() else L201(x28);
  L204():
    conf_lim3 = force? conf_lim2;
    checkMissing(conf_lim3);
    c57 = `is.object`(conf_lim3);
    if c57 then L205() else L206(r151, conf_lim3);
  L231(dx41):
    max2 = ldf max in base;
    r208 = dyn max2(dx41);
    check L235() else D53();
  L232():
    dr40 = tryDispatchBuiltin.1("$", x44);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L234() else L233(dr40);
  L233(x46):
    r207 = `$`(x46, <sym spec>);
    goto L231(r207);
  L237():
    dr42 = tryDispatchBuiltin.1("[", conf_lim11);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L239() else L238(r206, dr42);
  L238(r210, conf_lim13):
    __1 = ldf `[` in base;
    r213 = dyn __1(conf_lim13, 2);
    goto L54(r210, r213);
  L271(c86, dx57):
    is_numeric1 = ldf `is.numeric` in base;
    r269 = dyn is_numeric1(dx57);
    check L275() else D67();
  L272():
    dr56 = tryDispatchBuiltin.1("$", x72);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L274() else L273(c76, dr56);
  L273(c84, x74):
    r268 = `$`(x74, <sym bandwidth>);
    goto L271(c84, r268);
  L279():
    st sub = r275;
    goto L63();
  L282():
    goto L42();
  D53():
    deopt 284 [r208];
  D67():
    deopt 340 [c86, r269];
  L51(r157, dx33):
    r159 = `-`(r157, dx33);
    st `conf.y` = r159;
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L208() else L209();
  L55(r216):
    x51 = ld x;
    check L248() else D57();
  L199(dx31):
    max = ldf max in base;
    r153 = dyn max(dx31);
    check L203() else D41();
  L200():
    dr30 = tryDispatchBuiltin.1("$", x28);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L202() else L201(dr30);
  L201(x30):
    r152 = `$`(x30, <sym spec>);
    goto L199(r152);
  L205():
    dr32 = tryDispatchBuiltin.1("[", conf_lim3);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L207() else L206(r151, dr32);
  L206(r155, conf_lim5):
    __ = ldf `[` in base;
    r158 = dyn __(conf_lim5, 2);
    goto L51(r155, r158);
  L234():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L231(dx40);
  L235():
    goto L53(r208);
  L239():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L54(r206, dx42);
  L240():
    x47 = ld x;
    check L242() else D55();
  L241():
    r215 = dyn base18(<lang `$`(x, freq)>);
    goto L55(r215);
  L274():
    dx56 = getTryDispatchBuiltinValue(dr56);
    goto L271(c76, dx56);
  L275():
    goto L61(c86, r269);
  D41():
    deopt 234 [r153];
  D55():
    deopt 293 [x47];
  D57():
    deopt 297 [r216, x51];
  L52(r161):
    x35 = ld x;
    check L216() else D45();
  L202():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L199(dx30);
  L203():
    goto L50(r153);
  L207():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L51(r151, dx32);
  L208():
    x31 = ld x;
    check L210() else D43();
  L209():
    r160 = dyn base12(<lang `$`(x, freq)>);
    goto L52(r160);
  L242():
    x48 = force? x47;
    checkMissing(x48);
    c64 = `is.object`(x48);
    if c64 then L244() else L245(x48);
  L248():
    x52 = force? x51;
    checkMissing(x52);
    c65 = `is.object`(x52);
    if c65 then L250() else L251(r216, x52);
  D43():
    deopt 243 [x31];
  D45():
    deopt 247 [r161, x35];
  L210():
    x32 = force? x31;
    checkMissing(x32);
    c58 = `is.object`(x32);
    if c58 then L212() else L213(x32);
  L216():
    x36 = force? x35;
    checkMissing(x36);
    c59 = `is.object`(x36);
    if c59 then L218() else L219(r161, x36);
  L243(dx45):
    max3 = ldf max in base;
    r218 = dyn max3(dx45);
    check L247() else D56();
  L244():
    dr44 = tryDispatchBuiltin.1("$", x48);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L246() else L245(dr44);
  L245(x50):
    r217 = `$`(x50, <sym freq>);
    goto L243(r217);
  L249(r222, dx47):
    r224 = `-`(r222, dx47);
    st `conf.x` = r224;
    lines2 = ldf lines;
    check L253() else D58();
  L250():
    dr46 = tryDispatchBuiltin.1("$", x52);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L252() else L251(r216, dr46);
  L251(r220, x54):
    r223 = `$`(x54, <sym bandwidth>);
    goto L249(r220, r223);
  D56():
    deopt 297 [r218];
  D58():
    deopt 303 [];
  L211(dx35):
    max1 = ldf max in base;
    r163 = dyn max1(dx35);
    check L215() else D44();
  L212():
    dr34 = tryDispatchBuiltin.1("$", x32);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L214() else L213(dr34);
  L213(x34):
    r162 = `$`(x34, <sym freq>);
    goto L211(r162);
  L217(r167, dx37):
    r169 = `-`(r167, dx37);
    st `conf.x` = r169;
    lines = ldf lines;
    check L221() else D46();
  L218():
    dr36 = tryDispatchBuiltin.1("$", x36);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L220() else L219(r161, dr36);
  L219(r165, x38):
    r168 = `$`(x38, <sym bandwidth>);
    goto L217(r165, r168);
  L246():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L243(dx44);
  L247():
    goto L55(r218);
  L252():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L249(r216, dx46);
  L253():
    p30 = prom<V +>{
      sym19 = ldf rep;
      base19 = ldf rep in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r226):
      return r226;
    L1():
      rep2 = ldf rep in base;
      r227 = dyn rep2(<sym conf.x>, 2.0);
      goto L0(r227);
    L2():
      r225 = dyn base19(<sym conf.x>, 2.0);
      goto L0(r225);
    };
    p31 = prom<V +>{
      conf_y2 = ld `conf.y`;
      conf_y3 = force? conf_y2;
      checkMissing(conf_y3);
      conf_lim14 = ld `conf.lim`;
      conf_lim15 = force? conf_lim14;
      checkMissing(conf_lim15);
      r229 = `*`(conf_y3, conf_lim15);
      return r229;
    };
    p32 = prom<V +>{
      ci_col5 = ld `ci.col`;
      ci_col6 = force? ci_col5;
      checkMissing(ci_col6);
      return ci_col6;
    };
    r232 = dyn lines2[, , col](p30, p31, p32);
    check L254() else D59();
  D44():
    deopt 247 [r163];
  D46():
    deopt 253 [];
  D59():
    deopt 308 [r232];
  L214():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L211(dx34);
  L215():
    goto L52(r163);
  L220():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L217(r161, dx36);
  L221():
    p20 = prom<V +>{
      sym13 = ldf rep;
      base13 = ldf rep in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r171):
      return r171;
    L1():
      rep = ldf rep in base;
      r172 = dyn rep(<sym conf.x>, 2.0);
      goto L0(r172);
    L2():
      r170 = dyn base13(<sym conf.x>, 2.0);
      goto L0(r170);
    };
    p21 = prom<V +>{
      conf_y = ld `conf.y`;
      conf_y1 = force? conf_y;
      checkMissing(conf_y1);
      conf_lim6 = ld `conf.lim`;
      conf_lim7 = force? conf_lim6;
      checkMissing(conf_lim7);
      r174 = `+`(conf_y1, conf_lim7);
      return r174;
    };
    p22 = prom<V +>{
      ci_col1 = ld `ci.col`;
      ci_col2 = force? ci_col1;
      checkMissing(ci_col2);
      return ci_col2;
    };
    r177 = dyn lines[, , col](p20, p21, p22);
    check L222() else D47();
  L254():
    lines3 = ldf lines;
    check L255() else D60();
  D47():
    deopt 258 [r177];
  D60():
    deopt 310 [];
  L222():
    lines1 = ldf lines;
    check L223() else D48();
  L255():
    p33 = prom<V +>{
      conf_x9 = ld `conf.x`;
      conf_x10 = force? conf_x9;
      checkMissing(conf_x10);
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(conf_x13, r234):
      x55 = ld x;
      x56 = force? x55;
      checkMissing(x56);
      c67 = `is.object`(x56);
      if c67 then L4() else L5(conf_x13, r234, x56);
    L1():
      c66 = ldf c in base;
      r235 = dyn c66(-0.5, 0.5);
      goto L0(conf_x10, r235);
    L2():
      r233 = dyn base20(<lang `-`(0.5)>, 0.5);
      goto L0(conf_x10, r233);
    L3(conf_x17, r239, dx49):
      r241 = `*`(r239, dx49);
      r242 = `+`(conf_x17, r241);
      return r242;
    L4():
      dr48 = tryDispatchBuiltin.1("$", x56);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L6() else L5(conf_x13, r234, dr48);
    L5(conf_x15, r237, x58):
      r240 = `$`(x58, <sym bandwidth>);
      goto L3(conf_x15, r237, r240);
    L6():
      dx48 = getTryDispatchBuiltinValue(dr48);
      goto L3(conf_x13, r234, dx48);
    };
    p34 = prom<V +>{
      sym21 = ldf rep;
      base21 = ldf rep in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r245):
      return r245;
    L1():
      rep3 = ldf rep in base;
      r246 = dyn rep3(<sym conf.y>, 2.0);
      goto L0(r246);
    L2():
      r244 = dyn base21(<sym conf.y>, 2.0);
      goto L0(r244);
    };
    p35 = prom<V +>{
      ci_col7 = ld `ci.col`;
      ci_col8 = force? ci_col7;
      checkMissing(ci_col8);
      return ci_col8;
    };
    r249 = dyn lines3[, , col](p33, p34, p35);
    check L256() else D61();
  D48():
    deopt 260 [];
  D61():
    deopt 315 [r249];
  L223():
    p23 = prom<V +>{
      conf_x = ld `conf.x`;
      conf_x1 = force? conf_x;
      checkMissing(conf_x1);
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(conf_x4, r179):
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      c61 = `is.object`(x40);
      if c61 then L4() else L5(conf_x4, r179, x40);
    L1():
      c60 = ldf c in base;
      r180 = dyn c60(-0.5, 0.5);
      goto L0(conf_x1, r180);
    L2():
      r178 = dyn base14(<lang `-`(0.5)>, 0.5);
      goto L0(conf_x1, r178);
    L3(conf_x8, r184, dx39):
      r186 = `*`(r184, dx39);
      r187 = `+`(conf_x8, r186);
      return r187;
    L4():
      dr38 = tryDispatchBuiltin.1("$", x40);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L6() else L5(conf_x4, r179, dr38);
    L5(conf_x6, r182, x42):
      r185 = `$`(x42, <sym bandwidth>);
      goto L3(conf_x6, r182, r185);
    L6():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L3(conf_x4, r179, dx38);
    };
    p24 = prom<V +>{
      sym15 = ldf rep;
      base15 = ldf rep in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r190):
      return r190;
    L1():
      rep1 = ldf rep in base;
      r191 = dyn rep1(<sym conf.y>, 2.0);
      goto L0(r191);
    L2():
      r189 = dyn base15(<sym conf.y>, 2.0);
      goto L0(r189);
    };
    p25 = prom<V +>{
      ci_col3 = ld `ci.col`;
      ci_col4 = force? ci_col3;
      checkMissing(ci_col4);
      return ci_col4;
    };
    r194 = dyn lines1[, , col](p23, p24, p25);
    check L224() else D49();
  L256():
    goto L47();
  D49():
    deopt 265 [r194];
  L224():
    paste0 = ldf paste0;
    check L225() else D50();
  D50():
    deopt 267 [];
  L225():
    p26 = prom<V +>{
      sym16 = ldf round;
      base16 = ldf round in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r196):
      return r196;
    L1():
      round = ldf round in base;
      r197 = dyn round(<lang `*`(100.0, ci)>, 2.0);
      goto L0(r197);
    L2():
      r195 = dyn base16(<lang `*`(100.0, ci)>, 2.0);
      goto L0(r195);
    };
    p29 = prom<V +>{
      paste1 = ldf paste;
      p28 = prom<V +>{
        format = ldf format;
        p27 = prom<V +>{
          conf_lim8 = ld `conf.lim`;
          conf_lim9 = force? conf_lim8;
          checkMissing(conf_lim9);
          return conf_lim9;
        };
        r200 = dyn format[, digits](p27, 3.0);
        return r200;
      };
      r202 = dyn paste1[, collapse](p28, ",");
      return r202;
    };
    r204 = dyn paste0(", ", p26, "% C.I. is (", p29, ")dB");
    check L226() else D51();
  D51():
    deopt 273 [r204];
  L226():
    st `ci.text` = r204;
    goto L47();
  }
}
fun inner1727959667(`spec.obj`, coverage) {
  (reg spec_obj:*, reg coverage:*) -+> V { var `spec.obj`:*, var coverage:*, reg coverage_isMissing:L, reg coverage_orDefault:*, reg coverage1:*, reg coverage2:V, reg r:V, reg c:L, reg c1:V, reg coverage3:*, reg coverage4:V, reg r1:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r2:V, reg coverage5:*, reg coverage6:V, reg r4:V, reg spec_obj1:*, reg spec_obj2:V, reg c7:L, reg spec_obj4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg tail:*, reg tail1:V, reg pchisq:cls, reg df:*, reg df1:V, reg p:p(V +), reg df2:*, reg df3:V, reg p1:p(V +), reg r8:V, reg r9:V, reg r10:V, reg tail2:*, reg tail3:V, reg pchisq1:cls, reg df4:*, reg df5:V, reg p2:p(V +), reg df6:*, reg df7:V, reg p3:p(V +), reg r13:V, reg r14:V, reg qchisq:cls, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg upper_quantile:*, reg upper_quantile1:V, reg lower_quantile:*, reg lower_quantile1:V, reg c8:cls, reg r17:V, reg p4:p(V +), reg df8:*, reg df9:V, reg p5:p(V +), reg r20:V, reg df10:*, reg df11:V, reg r21:V, reg r22:V |
    mkenv;
    st `spec.obj` = spec_obj;
    coverage_isMissing = missing.0(coverage);
    if coverage_isMissing then L0(0.95) else L0(coverage);
  L0(coverage_orDefault):
    st coverage = coverage_orDefault;
    coverage1 = ld coverage;
    check L4() else D0();
  D0():
    deopt 0 [coverage1];
  L4():
    coverage2 = force? coverage1;
    checkMissing(coverage2);
    r = `<`(coverage2, 0.0);
    c = `as.logical`(r);
    if c then L1(c) else L5();
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L8() else L2();
  L5():
    coverage3 = ld coverage;
    check L6() else D1();
  D1():
    deopt 4 [c, coverage3];
  L2():
    goto L3();
  L3():
    coverage5 = ld coverage;
    check L12() else D4();
  L6():
    coverage4 = force? coverage3;
    checkMissing(coverage4);
    r1 = `>=`(coverage4, 1.0);
    c3 = `as.logical`(r1);
    c4 = `||`(c, c3);
    goto L1(c4);
  L8():
    stop = ldf stop;
    check L9() else D2();
  D2():
    deopt 10 [];
  D4():
    deopt 16 [1.0, coverage5];
  L9():
    r2 = dyn stop("coverage probability out of range [0,1)");
    check L10() else D3();
  L12():
    coverage6 = force? coverage5;
    checkMissing(coverage6);
    r4 = `-`(1.0, coverage6);
    st tail = r4;
    spec_obj1 = ld `spec.obj`;
    check L13() else D5();
  D3():
    deopt 12 [r2];
  D5():
    deopt 20 [spec_obj1];
  L10():
    goto L3();
  L13():
    spec_obj2 = force? spec_obj1;
    checkMissing(spec_obj2);
    c7 = `is.object`(spec_obj2);
    if c7 then L15() else L16(spec_obj2);
  L14(dx1):
    st df = dx1;
    tail = ld tail;
    check L18() else D6();
  L15():
    dr = tryDispatchBuiltin.1("$", spec_obj2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(spec_obj4):
    r5 = `$`(spec_obj4, <sym df>);
    goto L14(r5);
  D6():
    deopt 25 [1.0, tail];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L18():
    tail1 = force? tail;
    checkMissing(tail1);
    pchisq = ldf pchisq;
    check L19() else D7();
  D7():
    deopt 27 [1.0, tail1];
  L19():
    p = prom<V +>{
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      return df1;
    };
    p1 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      return df3;
    };
    r8 = dyn pchisq[, , `lower.tail`](p, p1, FALSE);
    check L20() else D8();
  D8():
    deopt 32 [1.0, tail1, r8];
  L20():
    r9 = `*`(tail1, r8);
    r10 = `-`(1.0, r9);
    st `upper.quantile` = r10;
    tail2 = ld tail;
    check L21() else D9();
  D9():
    deopt 36 [tail2];
  L21():
    tail3 = force? tail2;
    checkMissing(tail3);
    pchisq1 = ldf pchisq;
    check L22() else D10();
  D10():
    deopt 38 [tail3];
  L22():
    p2 = prom<V +>{
      df4 = ld df;
      df5 = force? df4;
      checkMissing(df5);
      return df5;
    };
    p3 = prom<V +>{
      df6 = ld df;
      df7 = force? df6;
      checkMissing(df7);
      return df7;
    };
    r13 = dyn pchisq1(p2, p3);
    check L23() else D11();
  D11():
    deopt 41 [tail3, r13];
  L23():
    r14 = `*`(tail3, r13);
    st `lower.quantile` = r14;
    qchisq = ldf qchisq;
    check L24() else D12();
  D12():
    deopt 46 [1.0];
  L24():
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r16):
      return r16;
    L1():
      upper_quantile = ld `upper.quantile`;
      upper_quantile1 = force? upper_quantile;
      checkMissing(upper_quantile1);
      lower_quantile = ld `lower.quantile`;
      lower_quantile1 = force? lower_quantile;
      checkMissing(lower_quantile1);
      c8 = ldf c in base;
      r17 = dyn c8(upper_quantile1, lower_quantile1);
      goto L0(r17);
    L2():
      r15 = dyn base(<sym upper.quantile>, <sym lower.quantile>);
      goto L0(r15);
    };
    p5 = prom<V +>{
      df8 = ld df;
      df9 = force? df8;
      checkMissing(df9);
      return df9;
    };
    r20 = dyn qchisq(p4, p5);
    check L25() else D13();
  D13():
    deopt 49 [1.0, r20];
  L25():
    df10 = ld df;
    check L26() else D14();
  D14():
    deopt 49 [1.0, r20, df10];
  L26():
    df11 = force? df10;
    checkMissing(df11);
    r21 = `/`(r20, df11);
    r22 = `/`(1.0, r21);
    popenv;
    return r22;
  }
}