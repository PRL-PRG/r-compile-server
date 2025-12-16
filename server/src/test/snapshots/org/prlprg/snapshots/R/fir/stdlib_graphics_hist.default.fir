fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1521726528`;
    st `hist.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1521726528`(x, breaks, freq, probability, `include.lowest`, right, fuzz, density, angle, col, border, main, xlim, ylim, xlab, ylab, axes, plot, labels, nclass, `warn.unused`, `...`) {
  (reg x:*, reg breaks:*, reg freq:*, reg probability:*, reg include_lowest:*, reg right:*, reg fuzz:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg main:*, reg xlim:*, reg ylim:*, reg xlab:*, reg ylab:*, reg axes:*, reg plot:*, reg labels:*, reg nclass:*, reg warn_unused:*, reg ddd:dots) -+> V { var x:*, var breaks:*, reg breaks_isMissing:L, reg breaks_orDefault:*, var freq:*, reg freq_isMissing:L, reg freq_orDefault:*, var probability:*, reg probability_isMissing:L, reg probability_orDefault:*, reg freq1:*, reg freq2:V, reg r:V, reg p:p(V +), var `include.lowest`:*, reg include_lowest_isMissing:L, reg include_lowest_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var fuzz:*, reg fuzz_isMissing:L, reg fuzz_orDefault:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, reg paste:cls, reg xname:*, reg xname1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg breaks1:*, reg breaks2:V, reg range:cls, reg r7:V, reg p3:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg xname2:*, reg xname3:V, reg p4:p(V +), var ylab:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var nclass:*, reg nclass_isMissing:L, reg nclass_orDefault:*, var `warn.unused`:*, reg warn_unused_isMissing:L, reg warn_unused_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r12:V, reg r13:V, reg c:L, reg stop:cls, reg r14:V, reg deparse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg substitute:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg x9:V, reg r24:V, reg x10:*, reg x11:V, reg is_finite:cls, reg r25:V, reg __:cls, reg r26:V, reg length:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg n:*, reg n1:V, reg as_integer:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg n2:*, reg n3:V, reg is_na:cls, reg r33:V, reg c2:L, reg stop1:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg missing:cls, reg r38:V, reg r39:V, reg use_br:*, reg use_br1:V, reg c3:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg missing1:cls, reg r42:V, reg r43:V, reg c4:L, reg warning:cls, reg r44:V, reg r45:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg nclass1:*, reg nclass2:V, reg c5:V, reg r49:V, reg c6:L, reg c8:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg c11:L, reg r51:V, reg nclass3:*, reg nclass4:V, reg length1:cls, reg r52:V, reg r53:V, reg c12:L, reg c13:V, reg c15:L, reg nclass5:*, reg nclass6:V, reg use_br2:*, reg use_br3:V, reg c16:L, reg c18:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg c21:L, reg r55:V, reg breaks3:*, reg breaks4:V, reg length2:cls, reg r56:V, reg r57:V, reg c22:L, reg c23:V, reg use_br4:*, reg use_br5:V, reg c25:L, reg sort:cls, reg breaks5:*, reg breaks6:V, reg p6:p(V +), reg r59:V, reg include_lowest1:*, reg include_lowest2:V, reg r61:V, reg c26:L, reg warning1:cls, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg r65:V, reg breaks7:*, reg breaks8:V, reg c27:L, reg c28:L, reg match_arg:cls, reg tolower:cls, reg breaks9:*, reg breaks10:V, reg p7:p(V +), reg r67:V, reg p8:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg c29:cls, reg r71:V, reg p9:p(V +), reg r73:V, reg breaks11:*, reg breaks12:V, reg c30:L, reg c31:L, reg c32:L, reg c33:L, reg c34:L, reg c35:L, reg c36:L, reg i_ddd:dots, reg i:V, reg c37:L, reg c38:L, reg c39:L, reg c40:L, reg c41:L, reg stop2:cls, reg r75:V, reg nclass_Sturges:cls, reg x12:*, reg x13:V, reg p10:p(V +), reg r77:V, reg nclass_FD:cls, reg x14:*, reg x15:V, reg p11:p(V +), reg r79:V, reg nclass_scott:cls, reg x16:*, reg x17:V, reg p12:p(V +), reg r81:V, reg stop3:cls, reg r82:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg r85:V, reg breaks13:*, reg breaks14:V, reg is_function:cls, reg r86:V, reg c42:L, reg breaks15:cls, reg x18:*, reg x19:V, reg p13:p(V +), reg r88:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r89:V, reg r90:V, reg breaks16:*, reg breaks17:V, reg length3:cls, reg r91:V, reg r92:V, reg c43:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg breaks18:*, reg breaks19:V, reg is_numeric1:cls, reg r95:V, reg r96:V, reg c44:L, reg c45:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r97:V, reg c49:L, reg r98:V, reg breaks20:*, reg breaks21:V, reg is_finite1:cls, reg r99:V, reg r100:V, reg c50:L, reg c51:V, reg c53:L, reg c54:V, reg breaks22:*, reg breaks23:V, reg r101:V, reg c56:L, reg c57:V, reg c59:L, reg stop4:cls, reg r102:V, reg breaks24:*, reg breaks25:V, reg r104:V, reg c60:L, reg warning2:cls, reg gettextf:cls, reg breaks26:*, reg breaks27:V, reg p14:p(V +), reg r106:V, reg p15:p(V +), reg r108:V, reg pretty:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r110:V, reg r111:V, reg x20:*, reg x21:V, reg range1:cls, reg r112:V, reg p16:p(V +), reg breaks28:*, reg breaks29:V, reg p17:p(V +), reg r115:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r116:V, reg r117:V, reg breaks30:*, reg breaks31:V, reg length4:cls, reg r118:V, reg nB:*, reg nB1:V, reg r119:V, reg c61:L, reg stop5:cls, reg gettextf1:cls, reg format:cls, reg breaks32:*, reg breaks33:V, reg p18:p(V +), reg r121:V, reg p19:p(V +), reg r123:V, reg p20:p(V +), reg r125:V, reg r126:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r127:V, reg r128:V, reg breaks34:*, reg breaks35:V, reg is_numeric2:cls, reg r129:V, reg r130:V, reg c62:L, reg c63:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r131:V, reg c67:L, reg r132:V, reg breaks36:*, reg breaks37:V, reg length5:cls, reg r133:V, reg r134:V, reg c68:L, reg c69:V, reg c71:L, reg stop6:cls, reg gettextf2:cls, reg format1:cls, reg breaks38:*, reg breaks39:V, reg p21:p(V +), reg r136:V, reg p22:p(V +), reg r138:V, reg p23:p(V +), reg r140:V, reg sort1:cls, reg breaks40:*, reg breaks41:V, reg p24:p(V +), reg r143:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r144:V, reg r145:V, reg breaks42:*, reg breaks43:V, reg length6:cls, reg r146:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r147:V, reg r148:V, reg nB2:*, reg nB3:V, reg as_integer1:cls, reg r149:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r150:V, reg r151:V, reg nB4:*, reg nB5:V, reg is_na1:cls, reg r152:V, reg c72:L, reg stop7:cls, reg r153:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r155:V, reg r156:V, reg diff:cls, reg breaks44:*, reg breaks45:V, reg p25:p(V +), reg r158:V, reg as_double:cls, reg r159:V, reg use_br6:*, reg use_br7:V, reg r160:V, reg c73:L, reg c74:V, reg diff1:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r161:V, reg r162:V, reg h:*, reg h1:V, reg range2:cls, reg r163:V, reg p26:p(V +), reg r165:V, reg mean:cls, reg h2:*, reg h3:V, reg p27:p(V +), reg r167:V, reg r168:V, reg r169:V, reg c76:L, reg c77:V, reg use_br8:*, reg use_br9:V, reg r170:V, reg c79:L, reg c81:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r171:V, reg c84:L, reg r172:V, reg h4:*, reg h5:V, reg r173:V, reg any:cls, reg r174:V, reg c85:L, reg c86:V, reg c88:L, reg stop8:cls, reg r175:V, reg freq3:*, reg freq4:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r177:V, reg r178:V, reg freq5:*, reg freq6:V, reg c89:V, reg c90:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r179:V, reg r180:V, reg missing2:cls, reg r181:V, reg r182:V, reg c91:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r183:V, reg r184:V, reg probability1:*, reg probability2:V, reg as_logical:cls, reg r185:V, reg r186:V, reg r187:V, reg equidist:*, reg equidist1:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r189:V, reg r190:V, reg missing3:cls, reg r191:V, reg r192:V, reg c92:L, reg c94:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r193:V, reg c97:L, reg r194:V, reg probability3:*, reg probability4:V, reg freq7:*, reg freq8:V, reg r195:V, reg any1:cls, reg r196:V, reg c98:L, reg c99:V, reg c101:L, reg stop9:cls, reg r197:V, reg stopifnot:cls, reg fuzz1:*, reg fuzz2:V, reg r198:V, reg p28:p(V +), reg r200:V, reg fuzz3:*, reg fuzz4:V, reg nB6:*, reg nB7:V, reg r201:V, reg c102:L, reg __1:cls, reg r202:V, reg r203:cls, reg h6:*, reg h7:V, reg p29:p(V +), reg r205:V, reg fuzz7:V, reg r206:V, reg nB8:*, reg nB9:V, reg r207:V, reg c103:L, reg diff2:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r208:V, reg r209:V, reg x22:*, reg x23:V, reg range3:cls, reg r210:V, reg p30:p(V +), reg r212:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r213:V, reg h8:*, reg h9:V, reg c104:L, reg fuzz13:V, reg h11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg fuzz15:V, reg dx3:V, reg h12:*, reg h13:V, reg r214:V, reg __2:cls, reg r215:V, reg min:cls, reg r216:V, reg r217:V, reg right1:*, reg right2:V, reg c105:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r218:V, reg r219:V, reg include_lowest3:*, reg include_lowest4:V, reg c106:L, reg diddle:*, reg diddle1:V, reg r220:V, reg r221:V, reg diddle2:*, reg diddle3:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r222:V, reg r223:V, reg diddle4:*, reg diddle5:V, reg nB10:*, reg nB11:V, reg r224:V, reg rep_int:cls, reg r225:V, reg c107:cls, reg r226:V, reg r227:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r228:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r229:V, reg r230:V, reg diddle6:*, reg diddle7:V, reg r231:V, reg nB12:*, reg nB13:V, reg r232:V, reg rep_int1:cls, reg r233:V, reg include_lowest5:*, reg include_lowest6:V, reg c108:L, reg diddle8:*, reg diddle9:V, reg diddle10:V, reg diddle11:*, reg diddle12:V, reg r234:V, reg c109:cls, reg r235:V, reg breaks46:*, reg breaks47:V, reg fuzz16:*, reg fuzz17:V, reg r236:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r237:V, reg r238:V, reg C_BinCount:*, reg C_BinCount1:V, reg x24:*, reg x25:V, reg fuzzybreaks:*, reg fuzzybreaks1:V, reg right3:*, reg right4:V, reg include_lowest7:*, reg include_lowest8:V, reg vargs:dots, reg r239:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r240:V, reg r241:V, reg counts:*, reg counts1:V, reg r242:V, reg any2:cls, reg r243:V, reg c110:L, reg stop10:cls, reg r244:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r246:V, reg r247:V, reg counts2:*, reg counts3:V, reg sum:cls, reg r248:V, reg n4:*, reg n5:V, reg r249:V, reg c111:L, reg stop11:cls, reg r250:V, reg counts4:*, reg counts5:V, reg n6:*, reg n7:V, reg h14:*, reg h15:V, reg r252:V, reg r253:V, reg breaks48:*, reg breaks49:V, reg c112:L, reg r255:R, reg breaks51:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r257:R, reg dx5:V, reg __3:cls, reg r258:V, reg breaks52:*, reg breaks53:V, reg c113:L, reg r260:R, reg dx7:V, reg breaks55:V, reg dr6:V, reg dc3:L, reg dx9:V, reg r262:R, reg dx10:V, reg dx11:V, reg nB14:*, reg nB15:V, reg r263:V, reg __4:cls, reg r264:V, reg r265:V, reg r266:V, reg structure:cls, reg sym42:cls, reg base42:cls, reg guard42:L, reg r267:V, reg r268:V, reg breaks56:*, reg breaks57:V, reg counts6:*, reg counts7:V, reg dens:*, reg dens1:V, reg mids:*, reg mids1:V, reg xname4:*, reg xname5:V, reg equidist2:*, reg equidist3:V, reg list:cls, reg r269:V, reg p31:p(V +), reg r271:V, reg plot1:*, reg plot2:V, reg c114:L, reg plot3:cls, reg r272:*, reg r273:V, reg p32:p(V +), reg freq9:*, reg freq10:V, reg p33:p(V +), reg col1:*, reg col2:V, reg p34:p(V +), reg border1:*, reg border2:V, reg p35:p(V +), reg angle1:*, reg angle2:V, reg p36:p(V +), reg density1:*, reg density2:V, reg p37:p(V +), reg main1:*, reg main2:V, reg p38:p(V +), reg xlim1:*, reg xlim2:V, reg p39:p(V +), reg ylim1:*, reg ylim2:V, reg p40:p(V +), reg xlab1:*, reg xlab2:V, reg p41:p(V +), reg ylab1:*, reg ylab2:V, reg p42:p(V +), reg axes1:*, reg axes2:V, reg p43:p(V +), reg labels1:*, reg labels2:V, reg p44:p(V +), reg ddd1:dots?, reg r287:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r288:V, reg r289:V, reg r290:*, reg r291:V, reg invisible:cls, reg r292:V, reg warn_unused1:*, reg warn_unused2:V, reg c115:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r293:V, reg r294:V, reg formals:cls, reg r295:V, reg names:cls, reg r296:V, reg nf:*, reg nf1:V, reg c116:L, reg nf3:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r297:V, reg nf6:V, reg r298:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r299:V, reg nf9:V, reg r300:V, reg nf10:*, reg nf11:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r301:V, reg nf14:V, reg r302:V, reg c117:cls, reg r303:V, reg match:cls, reg r304:V, reg is_na2:cls, reg r305:V, reg __5:cls, reg r306:V, reg lapply:cls, reg nf15:*, reg nf16:V, reg p45:p(V +), reg r308:cls, reg p46:p(V +), reg r310:V, reg vapply:cls, reg missE:*, reg missE1:V, reg p47:p(V +), reg eval:*, reg eval1:V, reg p48:p(V +), reg environment:cls, reg r313:V, reg p49:p(V +), reg r315:V, reg r316:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r317:V, reg r318:V, reg not_miss:*, reg not_miss1:V, reg any3:cls, reg r319:V, reg c118:L, reg warning3:cls, reg sprintf:cls, reg ngettext:cls, reg sym49:cls, reg base49:cls, reg guard49:L, reg r320:V, reg r321:V, reg not_miss2:*, reg not_miss3:V, reg sum1:cls, reg r322:V, reg p50:p(V +), reg r324:V, reg p51:p(V +), reg paste1:cls, reg sQuote:cls, reg nf17:*, reg nf18:V, reg c119:L, reg nf20:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg not_miss4:*, reg not_miss5:V, reg __6:cls, reg r326:V, reg p52:p(V +), reg r328:V, reg p53:p(V +), reg r330:V, reg p54:p(V +), reg r332:V, reg p55:p(V +), reg r334:V, reg r335:V, reg r337:*, reg r338:V |
    mkenv;
    st x = x;
    breaks_isMissing = missing.0(breaks);
    if breaks_isMissing then L0("Sturges") else L0(breaks);
  L0(breaks_orDefault):
    st breaks = breaks_orDefault;
    freq_isMissing = missing.0(freq);
    if freq_isMissing then L1(NULL) else L1(freq);
  L1(freq_orDefault):
    st freq = freq_orDefault;
    probability_isMissing = missing.0(probability);
    if probability_isMissing then L2() else L3(probability);
  L2():
    p = prom<V +>{
      freq1 = ld freq;
      freq2 = force? freq1;
      checkMissing(freq2);
      r = `!`(freq2);
      return r;
    };
    goto L3(p);
  L3(probability_orDefault):
    st probability = probability_orDefault;
    include_lowest_isMissing = missing.0(include_lowest);
    if include_lowest_isMissing then L4(TRUE) else L4(include_lowest);
  L4(include_lowest_orDefault):
    st `include.lowest` = include_lowest_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L5(TRUE) else L5(right);
  L5(right_orDefault):
    st right = right_orDefault;
    fuzz_isMissing = missing.0(fuzz);
    if fuzz_isMissing then L6(1.0E-7) else L6(fuzz);
  L6(fuzz_orDefault):
    st fuzz = fuzz_orDefault;
    density_isMissing = missing.0(density);
    if density_isMissing then L7(NULL) else L7(density);
  L7(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L8(45.0) else L8(angle);
  L8(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L9("lightgray") else L9(col);
  L9(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L10(NULL) else L10(border);
  L10(border_orDefault):
    st border = border_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L11() else L12(main);
  L11():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        xname = ld xname;
        xname1 = force? xname;
        checkMissing(xname1);
        return xname1;
      };
      r3 = dyn paste("Histogram of", p1);
      return r3;
    };
    goto L12(p2);
  L12(main_orDefault):
    st main = main_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L13() else L14(xlim);
  L13():
    p3 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      breaks1 = ld breaks;
      breaks2 = force? breaks1;
      checkMissing(breaks2);
      range = ldf range in base;
      r7 = dyn range(breaks2);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym breaks>);
      goto L0(r5);
    };
    goto L14(p3);
  L14(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L15(NULL) else L15(ylim);
  L15(ylim_orDefault):
    st ylim = ylim_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L16() else L17(xlab);
  L16():
    p4 = prom<V +>{
      xname2 = ld xname;
      xname3 = force? xname2;
      checkMissing(xname3);
      return xname3;
    };
    goto L17(p4);
  L17(xlab_orDefault):
    st xlab = xlab_orDefault;
    st ylab = ylab;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L18(TRUE) else L18(axes);
  L18(axes_orDefault):
    st axes = axes_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L19(TRUE) else L19(plot);
  L19(plot_orDefault):
    st plot = plot_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L20(FALSE) else L20(labels);
  L20(labels_orDefault):
    st labels = labels_orDefault;
    nclass_isMissing = missing.0(nclass);
    if nclass_isMissing then L21(NULL) else L21(nclass);
  L21(nclass_orDefault):
    st nclass = nclass_orDefault;
    warn_unused_isMissing = missing.0(warn_unused);
    if warn_unused_isMissing then L22(TRUE) else L22(warn_unused);
  L22(warn_unused_orDefault):
    st `warn.unused` = warn_unused_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L135() else L136();
  L23(r11):
    r13 = `!`(r11);
    c = `as.logical`(r13);
    if c then L139() else L24();
  L135():
    x1 = ld x;
    check L137() else D0();
  L136():
    r10 = dyn base1(<sym x>);
    goto L23(r10);
  D0():
    deopt 2 [x1];
  L24():
    goto L25();
  L25():
    deparse1 = ldf deparse1;
    check L143() else D4();
  L137():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r12 = dyn is_numeric(x2);
    check L138() else D1();
  L139():
    stop = ldf stop;
    check L140() else D2();
  D1():
    deopt 5 [r12];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L138():
    goto L23(r12);
  L140():
    r14 = dyn stop("'x' must be numeric");
    check L141() else D3();
  L143():
    p5 = prom<V +>{
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      substitute = ldf substitute in base;
      r18 = dyn substitute(<sym x>);
      goto L0(r18);
    L2():
      r16 = dyn base2(<sym x>);
      goto L0(r16);
    };
    r20 = dyn deparse1[, collapse](p5, "\n");
    check L144() else D5();
  D3():
    deopt 10 [r14];
  D5():
    deopt 18 [r20];
  L141():
    goto L25();
  L144():
    st xname = r20;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L145() else L146();
  L26(r22):
    st n = r22;
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L156() else L157();
  L145():
    x3 = ld x;
    check L147() else D6();
  L146():
    r21 = dyn base3(<lang `<-`(x, `[`(x, is.finite(x)))>);
    goto L26(r21);
  D6():
    deopt 22 [x3];
  L29(r29):
    st n = r29;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L160() else L161();
  L147():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L148() else L149(x4);
  L156():
    n = ld n;
    check L158() else D10();
  L157():
    r28 = dyn base5(<sym n>);
    goto L29(r28);
  D10():
    deopt 37 [n];
  L27(dx1):
    st x = dx1;
    length = ldf length in base;
    r27 = dyn length(dx1);
    check L155() else D9();
  L30(r32):
    c2 = `as.logical`(r32);
    if c2 then L164() else L31();
  L148():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L150() else L149(dr);
  L149(x6):
    sym4 = ldf `is.finite`;
    base4 = ldf `is.finite` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L151() else L152();
  L158():
    n1 = force? n;
    checkMissing(n1);
    as_integer = ldf `as.integer` in base;
    r30 = dyn as_integer(n1);
    check L159() else D11();
  L160():
    n2 = ld n;
    check L162() else D12();
  L161():
    r31 = dyn base6(<sym n>);
    goto L30(r31);
  D9():
    deopt 33 [r27];
  D11():
    deopt 40 [r30];
  D12():
    deopt 44 [n2];
  L28(x9, r24):
    __ = ldf `[` in base;
    r26 = dyn __(x9, r24);
    goto L27(r26);
  L31():
    goto L32();
  L32():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L168() else L169();
  L150():
    dx = getTryDispatchBuiltinValue(dr);
    goto L27(dx);
  L151():
    x10 = ld x;
    check L153() else D7();
  L152():
    r23 = dyn base4(<sym x>);
    goto L28(x6, r23);
  L155():
    goto L26(r27);
  L159():
    goto L29(r30);
  L162():
    n3 = force? n2;
    checkMissing(n3);
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(n3);
    check L163() else D13();
  L164():
    stop1 = ldf stop;
    check L165() else D14();
  D7():
    deopt 26 [x6, x10];
  D13():
    deopt 47 [r33];
  D14():
    deopt 49 [];
  L33(r37):
    r39 = `!`(r37);
    st `use.br` = r39;
    use_br = ld `use.br`;
    check L170() else D16();
  L153():
    x11 = force? x10;
    checkMissing(x11);
    is_finite = ldf `is.finite` in base;
    r25 = dyn is_finite(x11);
    check L154() else D8();
  L163():
    goto L30(r33);
  L165():
    r34 = dyn stop1("invalid length(x)");
    check L166() else D15();
  L168():
    missing = ldf missing in base;
    r38 = dyn missing(<sym breaks>);
    goto L33(r38);
  L169():
    r36 = dyn base7(<sym breaks>);
    goto L33(r36);
  D8():
    deopt 29 [x6, r25];
  D15():
    deopt 51 [r34];
  D16():
    deopt 59 [use_br];
  L154():
    goto L28(x6, r25);
  L166():
    goto L32();
  L170():
    use_br1 = force? use_br;
    checkMissing(use_br1);
    c3 = `as.logical`(use_br1);
    if c3 then L171() else L34();
  L34():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L179() else L180();
  L38():
    use_br2 = ld `use.br`;
    check L191() else D23();
  L171():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L172() else L173();
  D23():
    deopt 90 [use_br2];
  L35(r41):
    r43 = `!`(r41);
    c4 = `as.logical`(r43);
    if c4 then L174() else L36();
  L39(r48):
    r49 = `!`(r48);
    c6 = `as.logical`(r49);
    if c6 then L182() else L40(c6);
  L172():
    missing1 = ldf missing in base;
    r42 = dyn missing1(<sym nclass>);
    goto L35(r42);
  L173():
    r40 = dyn base8(<sym nclass>);
    goto L35(r40);
  L179():
    nclass1 = ld nclass;
    check L181() else D19();
  L180():
    r47 = dyn base9(<sym nclass>);
    goto L39(r47);
  L191():
    use_br3 = force? use_br2;
    checkMissing(use_br3);
    c16 = `as.logical`(use_br3);
    if c16 then L192() else L43(c16);
  D19():
    deopt 72 [nclass1];
  L36():
    goto L37(NULL);
  L37(r45):
    goto L38();
  L40(c8):
    c15 = `as.logical`(c8);
    if c15 then L188() else L42();
  L43(c18):
    st `use.br` = c18;
    use_br4 = ld `use.br`;
    check L198() else D26();
  L174():
    warning = ldf warning;
    check L175() else D17();
  L181():
    nclass2 = force? nclass1;
    checkMissing(nclass2);
    c5 = `==`(nclass2, NULL);
    goto L39(c5);
  L182():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L183() else L184();
  L192():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L193() else L194();
  D17():
    deopt 66 [];
  D26():
    deopt 103 [use_br4];
  L41(c11, r51):
    r53 = `==`(r51, 1);
    c12 = `as.logical`(r53);
    c13 = `&&`(c11, c12);
    goto L40(c13);
  L42():
    goto L38();
  L44(c21, r55):
    st nB = r55;
    r57 = `>`(r55, 1);
    c22 = `as.logical`(r57);
    c23 = `&&`(c21, c22);
    goto L43(c23);
  L175():
    r44 = dyn warning("'nclass' not used when 'breaks' is specified");
    check L176() else D18();
  L183():
    nclass3 = ld nclass;
    check L185() else D20();
  L184():
    r50 = dyn base10(<sym nclass>);
    goto L41(c6, r50);
  L188():
    nclass5 = ld nclass;
    check L189() else D22();
  L193():
    breaks3 = ld breaks;
    check L195() else D24();
  L194():
    r54 = dyn base11(<sym breaks>);
    goto L44(c16, r54);
  L198():
    use_br5 = force? use_br4;
    checkMissing(use_br5);
    c25 = `as.logical`(use_br5);
    if c25 then L199() else L45();
  D18():
    deopt 68 [r44];
  D20():
    deopt 78 [c6, nclass3];
  D22():
    deopt 85 [nclass5];
  D24():
    deopt 94 [c16, breaks3];
  L45():
    include_lowest1 = ld `include.lowest`;
    check L203() else D29();
  L46():
    sym23 = ldf `as.integer`;
    base23 = ldf `as.integer` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L312() else L313();
  L176():
    goto L37(r44);
  L185():
    nclass4 = force? nclass3;
    checkMissing(nclass4);
    length1 = ldf length in base;
    r52 = dyn length1(nclass4);
    check L186() else D21();
  L189():
    nclass6 = force? nclass5;
    checkMissing(nclass6);
    st breaks = nclass6;
    goto L38();
  L195():
    breaks4 = force? breaks3;
    checkMissing(breaks4);
    length2 = ldf length in base;
    r56 = dyn length2(breaks4);
    check L196() else D25();
  L199():
    sort = ldf sort;
    check L200() else D27();
  D21():
    deopt 81 [c6, r52];
  D25():
    deopt 97 [c16, r56];
  D27():
    deopt 106 [];
  D29():
    deopt 110 [include_lowest1];
  L80(r148):
    st nB = r148;
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L316() else L317();
  L186():
    goto L41(c6, r52);
  L196():
    goto L44(c16, r56);
  L200():
    p6 = prom<V +>{
      breaks5 = ld breaks;
      breaks6 = force? breaks5;
      checkMissing(breaks6);
      return breaks6;
    };
    r59 = dyn sort(p6);
    check L201() else D28();
  L203():
    include_lowest2 = force? include_lowest1;
    checkMissing(include_lowest2);
    r61 = `!`(include_lowest2);
    c26 = `as.logical`(r61);
    if c26 then L204() else L47();
  L312():
    nB2 = ld nB;
    check L314() else D78();
  L313():
    r147 = dyn base23(<sym nB>);
    goto L80(r147);
  D28():
    deopt 108 [r59];
  D78():
    deopt 288 [nB2];
  L47():
    goto L48();
  L48():
    sym12 = ldf `is.character`;
    base12 = ldf `is.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L208() else L209();
  L81(r151):
    c72 = `as.logical`(r151);
    if c72 then L320() else L82();
  L201():
    st breaks = r59;
    goto L46();
  L204():
    st `include.lowest` = TRUE;
    warning1 = ldf warning;
    check L205() else D30();
  L314():
    nB3 = force? nB2;
    checkMissing(nB3);
    as_integer1 = ldf `as.integer` in base;
    r149 = dyn as_integer1(nB3);
    check L315() else D79();
  L316():
    nB4 = ld nB;
    check L318() else D80();
  L317():
    r150 = dyn base24(<sym nB>);
    goto L81(r150);
  D30():
    deopt 117 [];
  D79():
    deopt 291 [r149];
  D80():
    deopt 295 [nB4];
  L49(r65):
    c28 = `as.logical`(r65);
    if c28 then L211() else L50();
  L82():
    goto L83();
  L83():
    sym25 = ldf `as.double`;
    base25 = ldf `as.double` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L324() else L325();
  L205():
    r62 = dyn warning1("'include.lowest' ignored as 'breaks' is not a vector");
    check L206() else D31();
  L208():
    breaks7 = ld breaks;
    check L210() else D32();
  L209():
    r64 = dyn base12(<sym breaks>);
    goto L49(r64);
  L315():
    goto L80(r149);
  L318():
    nB5 = force? nB4;
    checkMissing(nB5);
    is_na1 = ldf `is.na` in base;
    r152 = dyn is_na1(nB5);
    check L319() else D81();
  L320():
    stop7 = ldf stop;
    check L321() else D82();
  D31():
    deopt 119 [r62];
  D32():
    deopt 123 [breaks7];
  D81():
    deopt 298 [r152];
  D82():
    deopt 300 [];
  L50():
    sym14 = ldf `is.function`;
    base14 = ldf `is.function` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L245() else L246();
  L58():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L253() else L254();
  L84(r156):
    st h = r156;
    use_br6 = ld `use.br`;
    check L329() else D87();
  L206():
    goto L48();
  L210():
    breaks8 = force? breaks7;
    checkMissing(breaks8);
    c27 = `is.character`(breaks8);
    goto L49(c27);
  L211():
    match_arg = ldf `match.arg`;
    check L212() else D33();
  L319():
    goto L81(r152);
  L321():
    r153 = dyn stop7("invalid length(breaks)");
    check L322() else D83();
  L324():
    diff = ldf diff;
    check L326() else D84();
  L325():
    r155 = dyn base25(<lang diff(breaks)>);
    goto L84(r155);
  D33():
    deopt 127 [];
  D83():
    deopt 302 [r153];
  D84():
    deopt 308 [];
  D87():
    deopt 314 [use_br6];
  L59(r85):
    c42 = `as.logical`(r85);
    if c42 then L249() else L60();
  L61(r90):
    r92 = `==`(r90, 1.0);
    c43 = `as.logical`(r92);
    if c43 then L257() else L62();
  L212():
    p8 = prom<V +>{
      tolower = ldf tolower;
      p7 = prom<V +>{
        breaks9 = ld breaks;
        breaks10 = force? breaks9;
        checkMissing(breaks10);
        return breaks10;
      };
      r67 = dyn tolower(p7);
      return r67;
    };
    p9 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      c29 = ldf c in base;
      r71 = dyn c29("sturges", "fd", "freedman-diaconis", "scott");
      goto L0(r71);
    L2():
      r69 = dyn base13("sturges", "fd", "freedman-diaconis", "scott");
      goto L0(r69);
    };
    r73 = dyn match_arg(p8, p9);
    check L213() else D34();
  L245():
    breaks13 = ld breaks;
    check L247() else D45();
  L246():
    r84 = dyn base14(<sym breaks>);
    goto L59(r84);
  L253():
    breaks16 = ld breaks;
    check L255() else D49();
  L254():
    r89 = dyn base15(<sym breaks>);
    goto L61(r89);
  L322():
    goto L83();
  L326():
    p25 = prom<V +>{
      breaks44 = ld breaks;
      breaks45 = force? breaks44;
      checkMissing(breaks45);
      return breaks45;
    };
    r158 = dyn diff(p25);
    check L327() else D85();
  L329():
    use_br7 = force? use_br6;
    checkMissing(use_br7);
    r160 = `!`(use_br7);
    c73 = `as.logical`(r160);
    if c73 then L85(c73) else L330();
  D34():
    deopt 130 [r73];
  D45():
    deopt 159 [breaks13];
  D49():
    deopt 172 [breaks16];
  D85():
    deopt 310 [r158];
  L60():
    goto L58();
  L62():
    sym20 = ldf `is.numeric`;
    base20 = ldf `is.numeric` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L292() else L293();
  L85(c74):
    st equidist = c74;
    use_br8 = ld `use.br`;
    check L336() else D92();
  L213():
    st breaks = r73;
    breaks11 = ld breaks;
    check L214() else D35();
  L247():
    breaks14 = force? breaks13;
    checkMissing(breaks14);
    is_function = ldf `is.function` in base;
    r86 = dyn is_function(breaks14);
    check L248() else D46();
  L249():
    breaks15 = ldf breaks;
    check L250() else D47();
  L255():
    breaks17 = force? breaks16;
    checkMissing(breaks17);
    length3 = ldf length in base;
    r91 = dyn length3(breaks17);
    check L256() else D50();
  L257():
    sym16 = ldf `is.numeric`;
    base16 = ldf `is.numeric` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L258() else L259();
  L327():
    as_double = ldf `as.double` in base;
    r159 = dyn as_double(r158);
    check L328() else D86();
  L330():
    diff1 = ldf diff;
    check L331() else D88();
  D35():
    deopt 132 [breaks11];
  D46():
    deopt 162 [r86];
  D47():
    deopt 164 [];
  D50():
    deopt 175 [r91];
  D86():
    deopt 312 [r159];
  D88():
    deopt 318 [c73];
  D92():
    deopt 329 [use_br8];
  L63(r94):
    r96 = `!`(r94);
    c44 = `as.logical`(r96);
    if c44 then L64(c44) else L262();
  L74(r128):
    r130 = `!`(r128);
    c62 = `as.logical`(r130);
    if c62 then L75(c62) else L296();
  L214():
    breaks12 = force? breaks11;
    checkMissing(breaks12);
    c30 = `is.vector`(breaks12, "any");
    if c30 then L215() else L216();
  L248():
    goto L59(r86);
  L250():
    p13 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r88 = dyn breaks15(p13);
    check L251() else D48();
  L256():
    goto L61(r91);
  L258():
    breaks18 = ld breaks;
    check L260() else D51();
  L259():
    r93 = dyn base16(<sym breaks>);
    goto L63(r93);
  L292():
    breaks34 = ld breaks;
    check L294() else D68();
  L293():
    r127 = dyn base20(<sym breaks>);
    goto L74(r127);
  L328():
    goto L84(r159);
  L331():
    p26 = prom<V +>{
      sym26 = ldf range;
      base26 = ldf range in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r162):
      return r162;
    L1():
      h = ld h;
      h1 = force? h;
      checkMissing(h1);
      range2 = ldf range in base;
      r163 = dyn range2(h1);
      goto L0(r163);
    L2():
      r161 = dyn base26(<sym h>);
      goto L0(r161);
    };
    r165 = dyn diff1(p26);
    check L332() else D89();
  L336():
    use_br9 = force? use_br8;
    checkMissing(use_br9);
    r170 = `!`(use_br9);
    c79 = `as.logical`(r170);
    if c79 then L337() else L86(c79);
  D48():
    deopt 166 [r88];
  D51():
    deopt 180 [breaks18];
  D68():
    deopt 249 [breaks34];
  D89():
    deopt 320 [c73, r165];
  L64(c45):
    c53 = `as.logical`(c45);
    if c53 then L66(c53) else L268();
  L75(c63):
    c71 = `as.logical`(c63);
    if c71 then L302() else L77();
  L86(c81):
    c88 = `as.logical`(c81);
    if c88 then L343() else L88();
  L215():
    c31 = inherits(breaks12, "factor", FALSE);
    if c31 then L217() else L218();
  L216():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L251():
    st breaks = r88;
    goto L58();
  L260():
    breaks19 = force? breaks18;
    checkMissing(breaks19);
    is_numeric1 = ldf `is.numeric` in base;
    r95 = dyn is_numeric1(breaks19);
    check L261() else D52();
  L262():
    sym17 = ldf `is.finite`;
    base17 = ldf `is.finite` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L263() else L264();
  L294():
    breaks35 = force? breaks34;
    checkMissing(breaks35);
    is_numeric2 = ldf `is.numeric` in base;
    r129 = dyn is_numeric2(breaks35);
    check L295() else D69();
  L296():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L297() else L298();
  L332():
    mean = ldf mean;
    check L333() else D90();
  L337():
    sym27 = ldf any;
    base27 = ldf any in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L338() else L339();
  D52():
    deopt 183 [r95];
  D69():
    deopt 252 [r129];
  D90():
    deopt 322 [c73, r165, 1.0E-7];
  L65(c49, r98):
    r100 = `!`(r98);
    c50 = `as.logical`(r100);
    c51 = `||`(c49, c50);
    goto L64(c51);
  L66(c54):
    c59 = `as.logical`(c54);
    if c59 then L271() else L67();
  L76(c67, r132):
    r134 = `<=`(r132, 1.0);
    c68 = `as.logical`(r134);
    c69 = `||`(c67, c68);
    goto L75(c69);
  L77():
    goto L78();
  L78():
    sort1 = ldf sort;
    check L306() else D74();
  L87(c84, r172):
    c85 = `as.logical`(r172);
    c86 = `&&`(c84, c85);
    goto L86(c86);
  L88():
    goto L89();
  L89():
    freq3 = ld freq;
    check L347() else D97();
  L217():
    c32 = `is.character`(breaks12);
    if c32 then L219() else L220();
  L218():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L217();
  L261():
    goto L63(r95);
  L263():
    breaks20 = ld breaks;
    check L265() else D53();
  L264():
    r97 = dyn base17(<sym breaks>);
    goto L65(c44, r97);
  L268():
    breaks22 = ld breaks;
    check L269() else D55();
  L295():
    goto L74(r129);
  L297():
    breaks36 = ld breaks;
    check L299() else D70();
  L298():
    r131 = dyn base21(<sym breaks>);
    goto L76(c62, r131);
  L302():
    stop6 = ldf stop;
    check L303() else D72();
  L333():
    p27 = prom<V +>{
      h2 = ld h;
      h3 = force? h2;
      checkMissing(h3);
      return h3;
    };
    r167 = dyn mean(p27);
    check L334() else D91();
  L338():
    h4 = ld h;
    check L340() else D93();
  L339():
    r171 = dyn base27(<lang `<=`(h, 0.0)>);
    goto L87(c79, r171);
  L343():
    stop8 = ldf stop;
    check L344() else D95();
  D53():
    deopt 187 [c44, breaks20];
  D55():
    deopt 193 [c53, breaks22];
  D70():
    deopt 256 [c62, breaks36];
  D72():
    deopt 264 [];
  D74():
    deopt 272 [];
  D91():
    deopt 324 [c73, r165, 1.0E-7, r167];
  D93():
    deopt 334 [c79, h4];
  D95():
    deopt 342 [];
  D97():
    deopt 347 [freq3];
  L51():
    nclass_Sturges = ldf `nclass.Sturges`;
    check L232() else D37();
  L52():
    nclass_FD = ldf `nclass.FD`;
    check L235() else D39();
  L53():
    nclass_scott = ldf `nclass.scott`;
    check L238() else D41();
  L54():
    stop3 = ldf stop;
    check L241() else D43();
  L57(r75):
    st breaks = r75;
    goto L58();
  L67():
    goto L68();
  L68():
    breaks24 = ld breaks;
    check L275() else D58();
  L219():
    c33 = `==`.6(breaks12, "sturges");
    if c33 then L51() else L221();
  L220():
    i_ddd = dots[breaks12];
    i = `as.integer`(i_ddd);
    c37 = `==`.5(i, 1);
    if c37 then L51() else L225();
  L265():
    breaks21 = force? breaks20;
    checkMissing(breaks21);
    is_finite1 = ldf `is.finite` in base;
    r99 = dyn is_finite1(breaks21);
    check L266() else D54();
  L269():
    breaks23 = force? breaks22;
    checkMissing(breaks23);
    r101 = `<`(breaks23, 1);
    c56 = `as.logical`(r101);
    c57 = `||`(c53, c56);
    goto L66(c57);
  L271():
    stop4 = ldf stop;
    check L272() else D56();
  L299():
    breaks37 = force? breaks36;
    checkMissing(breaks37);
    length5 = ldf length in base;
    r133 = dyn length5(breaks37);
    check L300() else D71();
  L303():
    p23 = prom<V +>{
      gettextf2 = ldf gettextf;
      p22 = prom<V +>{
        format1 = ldf format;
        p21 = prom<V +>{
          breaks38 = ld breaks;
          breaks39 = force? breaks38;
          checkMissing(breaks39);
          return breaks39;
        };
        r136 = dyn format1(p21);
        return r136;
      };
      r138 = dyn gettextf2("Invalid breakpoints produced by 'breaks(x)': %s", p22);
      return r138;
    };
    r140 = dyn stop6[, domain](p23, NA_LGL);
    check L304() else D73();
  L306():
    p24 = prom<V +>{
      breaks40 = ld breaks;
      breaks41 = force? breaks40;
      checkMissing(breaks41);
      return breaks41;
    };
    r143 = dyn sort1(p24);
    check L307() else D75();
  L334():
    r168 = `*`(1.0E-7, r167);
    r169 = `<`(r165, r168);
    c76 = `as.logical`(r169);
    c77 = `||`(c73, c76);
    goto L85(c77);
  L340():
    h5 = force? h4;
    checkMissing(h5);
    r173 = `<=`(h5, 0.0);
    any = ldf any in base;
    r174 = dyn any(r173);
    check L341() else D94();
  L344():
    r175 = dyn stop8("'breaks' are not strictly increasing");
    check L345() else D96();
  L347():
    freq4 = force? freq3;
    checkMissing(freq4);
    st freq1 = freq4;
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L348() else L349();
  D37():
    deopt 140 [];
  D39():
    deopt 144 [];
  D41():
    deopt 148 [];
  D43():
    deopt 152 [];
  D54():
    deopt 190 [c44, r99];
  D56():
    deopt 199 [];
  D58():
    deopt 204 [breaks24];
  D71():
    deopt 259 [c62, r133];
  D73():
    deopt 268 [r140];
  D75():
    deopt 274 [r143];
  D94():
    deopt 339 [c79, r174];
  D96():
    deopt 344 [r175];
  L90(r178):
    c90 = `as.logical`(r178);
    if c90 then L351() else L91();
  L221():
    c34 = `==`.6(breaks12, "freedman-diaconis");
    if c34 then L52() else L222();
  L225():
    c38 = `==`.5(i, 2);
    if c38 then L55() else L226();
  L232():
    p10 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r77 = dyn nclass_Sturges(p10);
    check L233() else D38();
  L235():
    p11 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r79 = dyn nclass_FD(p11);
    check L236() else D40();
  L238():
    p12 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r81 = dyn nclass_scott(p12);
    check L239() else D42();
  L241():
    r82 = dyn stop3("unknown 'breaks' algorithm");
    check L242() else D44();
  L266():
    goto L65(c44, r99);
  L272():
    r102 = dyn stop4("invalid number of 'breaks'");
    check L273() else D57();
  L275():
    breaks25 = force? breaks24;
    checkMissing(breaks25);
    r104 = `>`(breaks25, 1000000.0);
    c60 = `as.logical`(r104);
    if c60 then L276() else L69();
  L300():
    goto L76(c62, r133);
  L304():
    goto L78();
  L307():
    st breaks = r143;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L308() else L309();
  L341():
    goto L87(c79, r174);
  L345():
    goto L89();
  L348():
    freq5 = ld freq;
    check L350() else D98();
  L349():
    r177 = dyn base28(<sym freq>);
    goto L90(r177);
  D38():
    deopt 142 [r77];
  D40():
    deopt 146 [r79];
  D42():
    deopt 150 [r81];
  D44():
    deopt 154 [r82];
  D57():
    deopt 201 [r102];
  D98():
    deopt 351 [freq5];
  L55():
    stop2 = ldf stop;
    check L230() else D36();
  L56():
    goto L57(NULL);
  L69():
    goto L70();
  L70():
    pretty = ldf pretty;
    check L280() else D61();
  L79(r145):
    st nB = r145;
    st `use.br` = TRUE;
    goto L46();
  L91():
    sym31 = ldf missing;
    base31 = ldf missing in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L362() else L363();
  L96():
    stopifnot = ldf stopifnot;
    check L375() else D107();
  L222():
    c35 = `==`.6(breaks12, "fd");
    if c35 then L52() else L223();
  L226():
    c39 = `==`.5(i, 3);
    if c39 then L52() else L227();
  L233():
    goto L57(r77);
  L236():
    goto L57(r79);
  L239():
    goto L57(r81);
  L242():
    goto L57(r82);
  L273():
    goto L68();
  L276():
    warning2 = ldf warning;
    check L277() else D59();
  L308():
    breaks42 = ld breaks;
    check L310() else D76();
  L309():
    r144 = dyn base22(<sym breaks>);
    goto L79(r144);
  L350():
    freq6 = force? freq5;
    checkMissing(freq6);
    c89 = `==`(freq6, NULL);
    goto L90(c89);
  L351():
    sym29 = ldf missing;
    base29 = ldf missing in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L352() else L353();
  D36():
    deopt 135 [];
  D59():
    deopt 209 [];
  D61():
    deopt 220 [];
  D76():
    deopt 278 [breaks42];
  D107():
    deopt 388 [];
  L92(r180):
    r182 = `!`(r180);
    c91 = `as.logical`(r182);
    if c91 then L354() else L93();
  L97(r190):
    r192 = `!`(r190);
    c92 = `as.logical`(r192);
    if c92 then L364() else L98(c92);
  L223():
    c36 = `==`.6(breaks12, "scott");
    if c36 then L53() else L224();
  L227():
    c40 = `==`.5(i, 4);
    if c40 then L53() else L228();
  L230():
    dyn stop2("empty alternative in numeric switch");
    goto L56();
  L277():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        breaks26 = ld breaks;
        breaks27 = force? breaks26;
        checkMissing(breaks27);
        return breaks27;
      };
      r106 = dyn gettextf("'breaks = %g' is too large and set to 1e6", p14);
      return r106;
    };
    r108 = dyn warning2[, domain](p15, NA_LGL);
    check L278() else D60();
  L280():
    p16 = prom<V +>{
      sym18 = ldf range;
      base18 = ldf range in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r111):
      return r111;
    L1():
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      range1 = ldf range in base;
      r112 = dyn range1(x21);
      goto L0(r112);
    L2():
      r110 = dyn base18(<sym x>);
      goto L0(r110);
    };
    p17 = prom<V +>{
      breaks28 = ld breaks;
      breaks29 = force? breaks28;
      checkMissing(breaks29);
      return breaks29;
    };
    r115 = dyn pretty[, n, `min.n`](p16, p17, 1.0);
    check L281() else D62();
  L310():
    breaks43 = force? breaks42;
    checkMissing(breaks43);
    length6 = ldf length in base;
    r146 = dyn length6(breaks43);
    check L311() else D77();
  L352():
    missing2 = ldf missing in base;
    r181 = dyn missing2(<sym probability>);
    goto L92(r181);
  L353():
    r179 = dyn base29(<sym probability>);
    goto L92(r179);
  L362():
    missing3 = ldf missing in base;
    r191 = dyn missing3(<sym probability>);
    goto L97(r191);
  L363():
    r189 = dyn base31(<sym probability>);
    goto L97(r189);
  L375():
    p28 = prom<V +>{
      fuzz1 = ld fuzz;
      fuzz2 = force? fuzz1;
      checkMissing(fuzz2);
      r198 = `>=`(fuzz2, 0.0);
      return r198;
    };
    r200 = dyn stopifnot[`fuzz must be non-negative`](p28);
    check L376() else D108();
  D60():
    deopt 213 [r108];
  D62():
    deopt 226 [r115];
  D77():
    deopt 281 [r146];
  D108():
    deopt 391 [r200];
  L93():
    equidist = ld equidist;
    check L360() else D101();
  L95(r187):
    st freq1 = r187;
    goto L96();
  L98(c94):
    c101 = `as.logical`(c94);
    if c101 then L371() else L100();
  L224():
    goto L54();
  L228():
    c41 = `==`.5(i, 5);
    if c41 then L54() else L229();
  L278():
    st breaks = 1000000;
    goto L70();
  L281():
    st breaks = r115;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L282() else L283();
  L311():
    goto L79(r146);
  L354():
    sym30 = ldf `as.logical`;
    base30 = ldf `as.logical` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L355() else L356();
  L364():
    sym32 = ldf any;
    base32 = ldf any in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L365() else L366();
  L376():
    fuzz3 = ld fuzz;
    check L377() else D109();
  D101():
    deopt 365 [equidist];
  D109():
    deopt 392 [fuzz3];
  L71(r117):
    st nB = r117;
    nB = ld nB;
    check L286() else D65();
  L94(r184):
    r186 = `!`(r184);
    goto L95(r186);
  L99(c97, r194):
    c98 = `as.logical`(r194);
    c99 = `&&`(c97, c98);
    goto L98(c99);
  L100():
    goto L96();
  L229():
    goto L56();
  L282():
    breaks30 = ld breaks;
    check L284() else D63();
  L283():
    r116 = dyn base19(<sym breaks>);
    goto L71(r116);
  L355():
    probability1 = ld probability;
    check L357() else D99();
  L356():
    r183 = dyn base30(<sym probability>);
    goto L94(r183);
  L360():
    equidist1 = force? equidist;
    checkMissing(equidist1);
    goto L95(equidist1);
  L365():
    probability3 = ld probability;
    check L367() else D102();
  L366():
    r193 = dyn base32(<lang `==`(probability, freq)>);
    goto L99(c92, r193);
  L371():
    stop9 = ldf stop;
    check L372() else D105();
  L377():
    fuzz4 = force? fuzz3;
    checkMissing(fuzz4);
    nB6 = ld nB;
    check L378() else D110();
  D63():
    deopt 230 [breaks30];
  D65():
    deopt 235 [nB];
  D99():
    deopt 360 [probability1];
  D102():
    deopt 374 [c92, probability3];
  D105():
    deopt 382 [];
  D110():
    deopt 393 [fuzz4, nB6];
  L284():
    breaks31 = force? breaks30;
    checkMissing(breaks31);
    length4 = ldf length in base;
    r118 = dyn length4(breaks31);
    check L285() else D64();
  L286():
    nB1 = force? nB;
    checkMissing(nB1);
    r119 = `<=`(nB1, 1.0);
    c61 = `as.logical`(r119);
    if c61 then L287() else L72();
  L357():
    probability2 = force? probability1;
    checkMissing(probability2);
    as_logical = ldf `as.logical` in base;
    r185 = dyn as_logical(probability2);
    check L358() else D100();
  L367():
    probability4 = force? probability3;
    checkMissing(probability4);
    freq7 = ld freq;
    check L368() else D103();
  L372():
    r197 = dyn stop9("'probability' is an alias for '!freq', however they differ.");
    check L373() else D106();
  L378():
    nB7 = force? nB6;
    checkMissing(nB7);
    r201 = `>`(nB7, 5.0);
    c102 = `as.logical`(r201);
    if c102 then L379() else L101();
  D64():
    deopt 233 [r118];
  D100():
    deopt 363 [r185];
  D103():
    deopt 375 [c92, probability4, freq7];
  D106():
    deopt 384 [r197];
  L72():
    goto L73(NULL);
  L73(r126):
    goto L46();
  L101():
    nB8 = ld nB;
    check L384() else D114();
  L102(fuzz7, r206):
    r217 = `*`(fuzz7, r206);
    st diddle = r217;
    right1 = ld right;
    check L397() else D120();
  L285():
    goto L71(r118);
  L287():
    stop5 = ldf stop;
    check L288() else D66();
  L358():
    goto L94(r185);
  L368():
    freq8 = force? freq7;
    checkMissing(freq8);
    r195 = `==`(probability4, freq8);
    any1 = ldf any in base;
    r196 = dyn any1(r195);
    check L369() else D104();
  L373():
    goto L96();
  L379():
    __1 = ldf `::`;
    check L380() else D111();
  D66():
    deopt 240 [];
  D104():
    deopt 379 [c92, r196];
  D111():
    deopt 398 [fuzz4];
  D114():
    deopt 405 [fuzz4, nB8];
  D120():
    deopt 426 [right1];
  L288():
    p20 = prom<V +>{
      gettextf1 = ldf gettextf;
      p19 = prom<V +>{
        format = ldf format;
        p18 = prom<V +>{
          breaks32 = ld breaks;
          breaks33 = force? breaks32;
          checkMissing(breaks33);
          return breaks33;
        };
        r121 = dyn format(p18);
        return r121;
      };
      r123 = dyn gettextf1("hist.default: pretty() error, breaks=%s", p19);
      return r123;
    };
    r125 = dyn stop5[, domain](p20, NA_LGL);
    check L289() else D67();
  L369():
    goto L99(c92, r196);
  L380():
    r202 = dyn __1("stats", "median");
    check L381() else D112();
  L384():
    nB9 = force? nB8;
    checkMissing(nB9);
    r207 = `<=`(nB9, 3.0);
    c103 = `as.logical`(r207);
    if c103 then L385() else L103();
  L397():
    right2 = force? right1;
    checkMissing(right2);
    c105 = `as.logical`(right2);
    if c105 then L398() else L105();
  D67():
    deopt 244 [r125];
  D112():
    deopt 401 [fuzz4, r202];
  L103():
    sym34 = ldf min;
    base34 = ldf min in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L389() else L390();
  L105():
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L413() else L414();
  L110(r227):
    st fuzz = r227;
    breaks46 = ld breaks;
    check L426() else D135();
  L289():
    goto L73(r125);
  L381():
    checkFun.0(r202);
    r203 = r202 as cls;
    p29 = prom<V +>{
      h6 = ld h;
      h7 = force? h6;
      checkMissing(h7);
      return h7;
    };
    r205 = dyn r203(p29);
    check L382() else D113();
  L385():
    diff2 = ldf diff;
    check L386() else D115();
  L398():
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L399() else L400();
  D113():
    deopt 404 [fuzz4, r205];
  D115():
    deopt 410 [fuzz4];
  D135():
    deopt 472 [breaks46];
  L106(r219):
    goto L110(r219);
  L382():
    goto L102(fuzz4, r205);
  L386():
    p30 = prom<V +>{
      sym33 = ldf range;
      base33 = ldf range in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r209):
      return r209;
    L1():
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      range3 = ldf range in base;
      r210 = dyn range3(x23);
      goto L0(r210);
    L2():
      r208 = dyn base33(<sym x>);
      goto L0(r208);
    };
    r212 = dyn diff2(p30);
    check L387() else D116();
  L389():
    h8 = ld h;
    check L391() else D117();
  L390():
    r213 = dyn base34(<lang `[`(h, `>`(h, 0.0))>);
    goto L102(fuzz4, r213);
  L399():
    include_lowest3 = ld `include.lowest`;
    check L401() else D121();
  L400():
    r218 = dyn base35(<lang if(include.lowest, `-`(diddle), diddle)>, <lang rep.int(diddle, `-`(nB, 1))>);
    goto L106(r218);
  L413():
    sym38 = ldf `rep.int`;
    base38 = ldf `rep.int` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L415() else L416();
  L414():
    r228 = dyn base37(<lang rep.int(`-`(diddle), `-`(nB, 1))>, <lang if(include.lowest, diddle, `-`(diddle))>);
    goto L110(r228);
  L426():
    breaks47 = force? breaks46;
    checkMissing(breaks47);
    fuzz16 = ld fuzz;
    check L427() else D136();
  D116():
    deopt 412 [fuzz4, r212];
  D117():
    deopt 415 [fuzz4, h8];
  D121():
    deopt 430 [include_lowest3];
  D136():
    deopt 473 [breaks47, fuzz16];
  L111(r230):
    include_lowest5 = ld `include.lowest`;
    check L420() else D131();
  L387():
    goto L102(fuzz4, r212);
  L391():
    h9 = force? h8;
    checkMissing(h9);
    c104 = `is.object`(h9);
    if c104 then L392() else L393(fuzz4, h9);
  L401():
    include_lowest4 = force? include_lowest3;
    checkMissing(include_lowest4);
    c106 = `as.logical`(include_lowest4);
    if c106 then L402() else L107();
  L415():
    diddle6 = ld diddle;
    check L417() else D128();
  L416():
    r229 = dyn base38(<lang `-`(diddle)>, <lang `-`(nB, 1)>);
    goto L111(r229);
  L427():
    fuzz17 = force? fuzz16;
    checkMissing(fuzz17);
    r236 = `+`(breaks47, fuzz17);
    st fuzzybreaks = r236;
    sym39 = ldf `.Call`;
    base39 = ldf `.Call` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L428() else L429();
  D128():
    deopt 453 [diddle6];
  D131():
    deopt 462 [include_lowest5];
  L104(fuzz15, dx3):
    min = ldf min in base;
    r216 = dyn min(dx3);
    check L396() else D119();
  L107():
    diddle2 = ld diddle;
    check L405() else D123();
  L108(r221):
    sym36 = ldf `rep.int`;
    base36 = ldf `rep.int` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L406() else L407();
  L114(r238):
    st counts = r238;
    sym40 = ldf any;
    base40 = ldf any in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L435() else L436();
  L392():
    dr2 = tryDispatchBuiltin.1("[", h9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L394() else L393(fuzz4, dr2);
  L393(fuzz13, h11):
    h12 = ld h;
    check L395() else D118();
  L402():
    diddle = ld diddle;
    check L403() else D122();
  L417():
    diddle7 = force? diddle6;
    checkMissing(diddle7);
    r231 = `-`(<missing>, diddle7);
    nB12 = ld nB;
    check L418() else D129();
  L420():
    include_lowest6 = force? include_lowest5;
    checkMissing(include_lowest6);
    c108 = `as.logical`(include_lowest6);
    if c108 then L421() else L112();
  L428():
    C_BinCount = ld C_BinCount;
    check L430() else D137();
  L429():
    r237 = dyn base39(<sym C_BinCount>, <sym x>, <sym fuzzybreaks>, <sym right>, <sym include.lowest>);
    goto L114(r237);
  D118():
    deopt 417 [fuzz13, h11, h12];
  D119():
    deopt 423 [fuzz15, r216];
  D122():
    deopt 432 [diddle];
  D123():
    deopt 435 [diddle2];
  D129():
    deopt 456 [nB12];
  D137():
    deopt 478 [C_BinCount];
  L109(r223):
    c107 = ldf c in base;
    r226 = dyn c107(r221, r223);
    check L411() else D127();
  L112():
    diddle11 = ld diddle;
    check L424() else D133();
  L113(diddle10):
    c109 = ldf c in base;
    r235 = dyn c109(r230, diddle10);
    check L425() else D134();
  L115(r241):
    c110 = `as.logical`(r241);
    if c110 then L439() else L116();
  L394():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L104(fuzz4, dx2);
  L395():
    h13 = force? h12;
    checkMissing(h13);
    r214 = `>`(h13, 0.0);
    __2 = ldf `[` in base;
    r215 = dyn __2(h11, r214);
    goto L104(fuzz13, r215);
  L396():
    goto L102(fuzz15, r216);
  L403():
    diddle1 = force? diddle;
    checkMissing(diddle1);
    r220 = `-`(<missing>, diddle1);
    goto L108(r220);
  L405():
    diddle3 = force? diddle2;
    checkMissing(diddle3);
    goto L108(diddle3);
  L406():
    diddle4 = ld diddle;
    check L408() else D124();
  L407():
    r222 = dyn base36(<sym diddle>, <lang `-`(nB, 1)>);
    goto L109(r222);
  L418():
    nB13 = force? nB12;
    checkMissing(nB13);
    r232 = `-`(nB13, 1);
    rep_int1 = ldf `rep.int` in base;
    r233 = dyn rep_int1(r231, r232);
    check L419() else D130();
  L421():
    diddle8 = ld diddle;
    check L422() else D132();
  L430():
    C_BinCount1 = force? C_BinCount;
    checkMissing(C_BinCount1);
    x24 = ld x;
    check L431() else D138();
  L435():
    counts = ld counts;
    check L437() else D142();
  L436():
    r240 = dyn base40(<lang `<`(counts, 0)>);
    goto L115(r240);
  D124():
    deopt 439 [diddle4];
  D127():
    deopt 448 [r226];
  D130():
    deopt 461 [r233];
  D132():
    deopt 464 [diddle8];
  D133():
    deopt 466 [diddle11];
  D134():
    deopt 470 [r235];
  D138():
    deopt 479 [C_BinCount1, x24];
  D142():
    deopt 488 [counts];
  L116():
    goto L117();
  L117():
    sym41 = ldf sum;
    base41 = ldf sum in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L443() else L444();
  L408():
    diddle5 = force? diddle4;
    checkMissing(diddle5);
    nB10 = ld nB;
    check L409() else D125();
  L411():
    goto L106(r226);
  L419():
    goto L111(r233);
  L422():
    diddle9 = force? diddle8;
    checkMissing(diddle9);
    goto L113(diddle9);
  L424():
    diddle12 = force? diddle11;
    checkMissing(diddle12);
    r234 = `-`(<missing>, diddle12);
    goto L113(r234);
  L425():
    goto L110(r235);
  L431():
    x25 = force? x24;
    checkMissing(x25);
    fuzzybreaks = ld fuzzybreaks;
    check L432() else D139();
  L437():
    counts1 = force? counts;
    checkMissing(counts1);
    r242 = `<`(counts1, 0);
    any2 = ldf any in base;
    r243 = dyn any2(r242);
    check L438() else D143();
  L439():
    stop10 = ldf stop;
    check L440() else D144();
  D125():
    deopt 441 [nB10];
  D139():
    deopt 480 [C_BinCount1, x25, fuzzybreaks];
  D143():
    deopt 493 [r243];
  D144():
    deopt 495 [];
  L118(r247):
    n4 = ld n;
    check L447() else D148();
  L409():
    nB11 = force? nB10;
    checkMissing(nB11);
    r224 = `-`(nB11, 1);
    rep_int = ldf `rep.int` in base;
    r225 = dyn rep_int(diddle5, r224);
    check L410() else D126();
  L432():
    fuzzybreaks1 = force? fuzzybreaks;
    checkMissing(fuzzybreaks1);
    right3 = ld right;
    check L433() else D140();
  L438():
    goto L115(r243);
  L440():
    r244 = dyn stop10[, domain]("negative 'counts'. Internal Error.", NA_LGL);
    check L441() else D145();
  L443():
    counts2 = ld counts;
    check L445() else D146();
  L444():
    r246 = dyn base41(<sym counts>);
    goto L118(r246);
  D126():
    deopt 446 [r225];
  D140():
    deopt 481 [C_BinCount1, x25, fuzzybreaks1, right3];
  D145():
    deopt 499 [r244];
  D146():
    deopt 504 [counts2];
  D148():
    deopt 507 [r247, n4];
  L410():
    goto L109(r225);
  L433():
    right4 = force? right3;
    checkMissing(right4);
    include_lowest7 = ld `include.lowest`;
    check L434() else D141();
  L441():
    goto L117();
  L445():
    counts3 = force? counts2;
    checkMissing(counts3);
    sum = ldf sum in base;
    r248 = dyn sum(counts3);
    check L446() else D147();
  L447():
    n5 = force? n4;
    checkMissing(n5);
    r249 = `<`(r247, n5);
    c111 = `as.logical`(r249);
    if c111 then L448() else L119();
  D141():
    deopt 482 [C_BinCount1, x25, fuzzybreaks1, right4, include_lowest7];
  D147():
    deopt 507 [r248];
  L119():
    goto L120();
  L120():
    counts4 = ld counts;
    check L452() else D151();
  L434():
    include_lowest8 = force? include_lowest7;
    checkMissing(include_lowest8);
    vargs = dots[x25, fuzzybreaks1, right4, include_lowest8];
    r239 = `.Call`(C_BinCount1, vargs, <missing>);
    goto L114(r239);
  L446():
    goto L118(r248);
  L448():
    stop11 = ldf stop;
    check L449() else D149();
  D149():
    deopt 511 [];
  D151():
    deopt 516 [counts4];
  L449():
    r250 = dyn stop11("some 'x' not counted; maybe 'breaks' do not span range of 'x'");
    check L450() else D150();
  L452():
    counts5 = force? counts4;
    checkMissing(counts5);
    n6 = ld n;
    check L453() else D152();
  D150():
    deopt 513 [r250];
  D152():
    deopt 517 [counts5, n6];
  L450():
    goto L120();
  L453():
    n7 = force? n6;
    checkMissing(n7);
    h14 = ld h;
    check L454() else D153();
  D153():
    deopt 518 [counts5, n7, h14];
  L454():
    h15 = force? h14;
    checkMissing(h15);
    r252 = `*`(n7, h15);
    r253 = `/`(counts5, r252);
    st dens = r253;
    breaks48 = ld breaks;
    check L455() else D154();
  D154():
    deopt 524 [0.5, breaks48];
  L455():
    breaks49 = force? breaks48;
    checkMissing(breaks49);
    c112 = `is.object`(breaks49);
    if c112 then L456() else L457(0.5, breaks49);
  L121(r257, dx5):
    breaks52 = ld breaks;
    check L459() else D155();
  L456():
    dr4 = tryDispatchBuiltin.1("[", breaks49);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L458() else L457(0.5, dr4);
  L457(r255, breaks51):
    __3 = ldf `[` in base;
    r258 = dyn __3(breaks51, -1);
    goto L121(r255, r258);
  D155():
    deopt 528 [r257, dx5, breaks52];
  L458():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L121(0.5, dx4);
  L459():
    breaks53 = force? breaks52;
    checkMissing(breaks53);
    c113 = `is.object`(breaks53);
    if c113 then L460() else L461(r257, dx5, breaks53);
  L122(r262, dx10, dx11):
    r265 = `+`(dx10, dx11);
    r266 = `*`(r262, r265);
    st mids = r266;
    structure = ldf structure;
    check L464() else D157();
  L460():
    dr6 = tryDispatchBuiltin.1("[", breaks53);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L462() else L461(r257, dx5, dr6);
  L461(r260, dx7, breaks55):
    nB14 = ld nB;
    check L463() else D156();
  D156():
    deopt 530 [r260, dx7, breaks55, nB14];
  D157():
    deopt 538 [];
  L462():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L122(r257, dx5, dx9);
  L463():
    nB15 = force? nB14;
    checkMissing(nB15);
    r263 = `-`(<missing>, nB15);
    __4 = ldf `[` in base;
    r264 = dyn __4(breaks55, r263);
    goto L122(r260, dx7, r264);
  L464():
    p31 = prom<V +>{
      sym42 = ldf list;
      base42 = ldf list in base;
      guard42 = `==`.4(sym42, base42);
      if guard42 then L1() else L2();
    L0(r268):
      return r268;
    L1():
      breaks56 = ld breaks;
      breaks57 = force? breaks56;
      checkMissing(breaks57);
      counts6 = ld counts;
      counts7 = force? counts6;
      checkMissing(counts7);
      dens = ld dens;
      dens1 = force? dens;
      checkMissing(dens1);
      mids = ld mids;
      mids1 = force? mids;
      checkMissing(mids1);
      xname4 = ld xname;
      xname5 = force? xname4;
      checkMissing(xname5);
      equidist2 = ld equidist;
      equidist3 = force? equidist2;
      checkMissing(equidist3);
      list = ldf list in base;
      r269 = dyn list(breaks57, counts7, dens1, mids1, xname5, equidist3);
      goto L0(r269);
    L2():
      r267 = dyn base42[breaks, counts, density, mids, xname, equidist](<sym breaks>, <sym counts>, <sym dens>, <sym mids>, <sym xname>, <sym equidist>);
      goto L0(r267);
    };
    r271 = dyn structure[, class](p31, "histogram");
    check L465() else D158();
  D158():
    deopt 542 [r271];
  L465():
    st r = r271;
    plot1 = ld plot;
    check L466() else D159();
  D159():
    deopt 544 [plot1];
  L466():
    plot2 = force? plot1;
    checkMissing(plot2);
    c114 = `as.logical`(plot2);
    if c114 then L467() else L123();
  L123():
    warn_unused1 = ld `warn.unused`;
    check L475() else D164();
  L467():
    plot3 = ldf plot;
    check L468() else D160();
  D160():
    deopt 547 [];
  D164():
    deopt 581 [warn_unused1];
  L468():
    p32 = prom<V +>{
      r272 = ld r;
      r273 = force? r272;
      checkMissing(r273);
      return r273;
    };
    p33 = prom<V +>{
      freq9 = ld freq1;
      freq10 = force? freq9;
      checkMissing(freq10);
      return freq10;
    };
    p34 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p35 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    p36 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      return angle2;
    };
    p37 = prom<V +>{
      density1 = ld density;
      density2 = force? density1;
      checkMissing(density2);
      return density2;
    };
    p38 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p39 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p40 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p41 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p42 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p43 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    p44 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r287 = dyn plot3[, freq, col, border, angle, density, main, xlim, ylim, xlab, ylab, axes, labels, `...`](p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, ddd1);
    check L469() else D161();
  L475():
    warn_unused2 = force? warn_unused1;
    checkMissing(warn_unused2);
    c115 = `as.logical`(warn_unused2);
    if c115 then L476() else L125();
  D161():
    deopt 574 [r287];
  L125():
    goto L134();
  L134():
    r337 = ld r;
    check L509() else D181();
  L469():
    sym43 = ldf invisible;
    base43 = ldf invisible in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L470() else L471();
  L476():
    sym44 = ldf names;
    base44 = ldf names in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L477() else L478();
  D181():
    deopt 650 [r337];
  L124(r289):
    popenv;
    return r289;
  L126(r294):
    st nf = r294;
    nf = ld nf;
    check L482() else D168();
  L470():
    r290 = ld r;
    check L472() else D162();
  L471():
    r288 = dyn base43(<sym r>);
    goto L124(r288);
  L477():
    formals = ldf formals;
    check L479() else D165();
  L478():
    r293 = dyn base44(<lang formals()>);
    goto L126(r293);
  L509():
    r338 = force? r337;
    checkMissing(r338);
    popenv;
    return r338;
  D162():
    deopt 577 [r290];
  D165():
    deopt 586 [];
  D168():
    deopt 591 [nf];
  L472():
    r291 = force? r290;
    checkMissing(r291);
    invisible = ldf invisible in base;
    r292 = dyn invisible(r291);
    check L473() else D163();
  L479():
    r295 = dyn formals();
    check L480() else D166();
  L482():
    nf1 = force? nf;
    checkMissing(nf1);
    c116 = `is.object`(nf1);
    if c116 then L483() else L484(nf1);
  D163():
    deopt 580 [r292];
  D166():
    deopt 587 [r295];
  L127(dx13):
    st nf = dx13;
    lapply = ldf lapply;
    check L496() else D173();
  L473():
    goto L124(r292);
  L480():
    names = ldf names in base;
    r296 = dyn names(r295);
    check L481() else D167();
  L483():
    dr8 = tryDispatchBuiltin.1("[", nf1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L485() else L484(dr8);
  L484(nf3):
    sym45 = ldf `is.na`;
    base45 = ldf `is.na` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L486() else L487();
  D167():
    deopt 589 [r296];
  D173():
    deopt 619 [];
  L128(nf6, r298):
    __5 = ldf `[` in base;
    r306 = dyn __5(nf6, r298);
    goto L127(r306);
  L481():
    goto L126(r296);
  L485():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L127(dx12);
  L486():
    sym46 = ldf match;
    base46 = ldf match in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L488() else L489();
  L487():
    r297 = dyn base45(<lang match(nf, c("x", "breaks", "nclass", "plot", "include.lowest", "right", "fuzz"))>);
    goto L128(nf3, r297);
  L496():
    p45 = prom<V +>{
      nf15 = ld nf;
      nf16 = force? nf15;
      checkMissing(nf16);
      return nf16;
    };
    p46 = prom<V +>{
      r308 = clos inner2119503979;
      return r308;
    };
    r310 = dyn lapply(p45, p46);
    check L497() else D174();
  D174():
    deopt 622 [r310];
  L129(nf9, r300):
    is_na2 = ldf `is.na` in base;
    r305 = dyn is_na2(r300);
    check L495() else D172();
  L488():
    nf10 = ld nf;
    check L490() else D169();
  L489():
    r299 = dyn base46(<sym nf>, <lang c("x", "breaks", "nclass", "plot", "include.lowest", "right", "fuzz")>);
    goto L129(nf3, r299);
  L497():
    st missE = r310;
    vapply = ldf vapply;
    check L498() else D175();
  D169():
    deopt 597 [nf3, nf10];
  D172():
    deopt 615 [nf9, r305];
  D175():
    deopt 625 [];
  L490():
    nf11 = force? nf10;
    checkMissing(nf11);
    sym47 = ldf c;
    base47 = ldf c in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L491() else L492();
  L495():
    goto L128(nf9, r305);
  L498():
    p47 = prom<V +>{
      missE = ld missE;
      missE1 = force? missE;
      checkMissing(missE1);
      return missE1;
    };
    p48 = prom<V +>{
      eval = ld eval;
      eval1 = force? eval;
      checkMissing(eval1);
      return eval1;
    };
    p49 = prom<V +>{
      environment = ldf environment;
      r313 = dyn environment();
      return r313;
    };
    r315 = dyn vapply[, , , envir](p47, p48, NA_LGL, p49);
    check L499() else D176();
  D176():
    deopt 631 [r315];
  L130(nf14, r302):
    match = ldf match in base;
    r304 = dyn match(nf11, r302, NA_INT, NULL);
    check L494() else D171();
  L491():
    c117 = ldf c in base;
    r303 = dyn c117("x", "breaks", "nclass", "plot", "include.lowest", "right", "fuzz");
    check L493() else D170();
  L492():
    r301 = dyn base47("x", "breaks", "nclass", "plot", "include.lowest", "right", "fuzz");
    goto L130(nf3, r301);
  L499():
    r316 = `!`(r315);
    st `not.miss` = r316;
    sym48 = ldf any;
    base48 = ldf any in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L500() else L501();
  D170():
    deopt 609 [nf3, r303];
  D171():
    deopt 613 [nf14, r304];
  L131(r318):
    c118 = `as.logical`(r318);
    if c118 then L504() else L132();
  L493():
    goto L130(nf3, r303);
  L494():
    goto L129(nf14, r304);
  L500():
    not_miss = ld `not.miss`;
    check L502() else D177();
  L501():
    r317 = dyn base48(<sym not.miss>);
    goto L131(r317);
  D177():
    deopt 636 [not_miss];
  L132():
    goto L133(NULL);
  L133(r335):
    goto L134();
  L502():
    not_miss1 = force? not_miss;
    checkMissing(not_miss1);
    any3 = ldf any in base;
    r319 = dyn any3(not_miss1);
    check L503() else D178();
  L504():
    warning3 = ldf warning;
    check L505() else D179();
  D178():
    deopt 639 [r319];
  D179():
    deopt 641 [];
  L503():
    goto L131(r319);
  L505():
    p55 = prom<V +>{
      sprintf = ldf sprintf;
      p51 = prom<V +>{
        ngettext = ldf ngettext;
        p50 = prom<V +>{
          sym49 = ldf sum;
          base49 = ldf sum in base;
          guard49 = `==`.4(sym49, base49);
          if guard49 then L1() else L2();
        L0(r321):
          return r321;
        L1():
          not_miss2 = ld `not.miss`;
          not_miss3 = force? not_miss2;
          checkMissing(not_miss3);
          sum1 = ldf sum in base;
          r322 = dyn sum1(not_miss3);
          goto L0(r322);
        L2():
          r320 = dyn base49(<sym not.miss>);
          goto L0(r320);
        };
        r324 = dyn ngettext(p50, "argument %s is not made use of", "arguments %s are not made use of");
        return r324;
      };
      p54 = prom<V +>{
        paste1 = ldf paste;
        p53 = prom<V +>{
          sQuote = ldf sQuote;
          p52 = prom<V +>{
            nf17 = ld nf;
            nf18 = force? nf17;
            checkMissing(nf18);
            c119 = `is.object`(nf18);
            if c119 then L1() else L2(nf18);
          L0(dx15):
            return dx15;
          L1():
            dr10 = tryDispatchBuiltin.1("[", nf18);
            dc5 = getTryDispatchBuiltinDispatched(dr10);
            if dc5 then L3() else L2(dr10);
          L2(nf20):
            not_miss4 = ld `not.miss`;
            not_miss5 = force? not_miss4;
            __6 = ldf `[` in base;
            r326 = dyn __6(nf20, not_miss5);
            goto L0(r326);
          L3():
            dx14 = getTryDispatchBuiltinValue(dr10);
            goto L0(dx14);
          };
          r328 = dyn sQuote(p52);
          return r328;
        };
        r330 = dyn paste1[, collapse](p53, ", ");
        return r330;
      };
      r332 = dyn sprintf(p51, p54);
      return r332;
    };
    r334 = dyn warning3[, domain](p55, NA_LGL);
    check L506() else D180();
  D180():
    deopt 645 [r334];
  L506():
    goto L133(r334);
  }
}
fun inner2119503979(n) {
  (reg n:*) -+> V { var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V |
    mkenv;
    st n = n;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<lang missing(.)>, <lang list(.=as.name(n))>);
    goto L0(r2);
  L2():
    r = dyn base(<lang missing(.)>, <lang list(.=as.name(n))>);
    goto L0(r);
  }
}