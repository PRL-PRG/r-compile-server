fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner276078993;
    st `hist.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner276078993(x, breaks, `...`, xlab, plot, freq, `start.on.monday`, format, right) {
  (reg x:*, reg breaks:*, reg ddd:dots, reg xlab:*, reg plot:*, reg freq:*, reg start_on_monday:*, reg format:*, reg right:*) -+> V { var x:*, var breaks:*, var `...`:dots?, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var freq:*, reg freq_isMissing:L, reg freq_orDefault:*, var `start.on.monday`:*, reg start_on_monday_isMissing:L, reg start_on_monday_orDefault:*, var format:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg inherits:cls, reg r8:V, reg r9:V, reg c:L, reg stop:cls, reg r10:V, reg force:cls, reg xlab1:*, reg xlab2:V, reg p2:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg c1:L, reg stop1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg breaks1:*, reg breaks2:V, reg inherits1:cls, reg r21:V, reg c2:L, reg as_Date:cls, reg breaks3:*, reg breaks4:V, reg p3:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg diff:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg breaks5:*, reg breaks6:V, reg unclass:cls, reg r30:V, reg p4:p(V +), reg r32:V, reg abs:cls, reg r33:V, reg min:cls, reg r34:V, reg d:*, reg d1:V, reg r35:V, reg c3:L, reg d2:*, reg d3:V, reg r37:V, reg c4:L, reg d4:*, reg d5:V, reg r39:V, reg c5:L, reg d6:*, reg d7:V, reg r41:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg breaks7:*, reg breaks8:V, reg is_numeric:cls, reg r46:V, reg c7:L, reg c9:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg c12:L, reg r48:V, reg breaks9:*, reg breaks10:V, reg length:cls, reg r49:V, reg r50:V, reg c13:L, reg c14:V, reg num_br:*, reg num_br1:V, reg c16:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg breaks11:*, reg breaks12:V, reg c17:L, reg c18:L, reg c20:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg c23:L, reg r54:V, reg breaks13:*, reg breaks14:V, reg length1:cls, reg r55:V, reg r56:V, reg c24:L, reg c25:V, reg c27:L, reg pmatch:cls, reg breaks15:*, reg breaks16:V, reg p5:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg c28:cls, reg r60:V, reg p6:p(V +), reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg valid:*, reg valid1:V, reg is_na:cls, reg r65:V, reg c29:L, reg stop2:cls, reg r66:V, reg as_POSIXlt:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg x3:*, reg x4:V, reg min1:cls, reg r70:V, reg p7:p(V +), reg r72:V, reg valid2:*, reg valid3:V, reg r73:V, reg c30:L, reg l:*, reg c31:L, reg r75:I, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r77:I, reg dx1:V, reg r78:V, reg valid4:*, reg valid5:V, reg r80:V, reg c32:L, reg start:*, reg start1:V, reg c33:L, reg start3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r81:V, reg start4:*, reg start5:V, reg c34:L, reg dx5:V, reg start7:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg r82:V, reg r83:V, reg l3:*, reg c35:L, reg r85:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r88:V, reg start_on_monday1:*, reg start_on_monday2:V, reg c36:L, reg start8:*, reg start9:V, reg c37:L, reg start11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r89:V, reg start12:*, reg start13:V, reg c38:L, reg dx15:V, reg start15:V, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg dx19:V, reg r90:V, reg r91:V, reg c39:L, reg dx22:V, reg r92:I, reg r93:V, reg l6:*, reg c40:L, reg r95:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx23:V, reg r97:V, reg dx24:V, reg r98:V, reg valid6:*, reg valid7:V, reg r101:V, reg c41:L, reg l9:*, reg c42:L, reg r103:I, reg l11:*, reg dr14:V, reg dc7:L, reg dx25:V, reg dx26:V, reg r106:V, reg as_POSIXlt1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r107:V, reg r108:V, reg x5:*, reg x6:V, reg max:cls, reg r109:V, reg p8:p(V +), reg r111:V, reg as_POSIXlt2:cls, reg end:*, reg end1:V, reg r112:V, reg p9:p(V +), reg r114:V, reg l12:*, reg c43:L, reg r116:I, reg l14:*, reg dr16:V, reg dc8:L, reg dx27:V, reg dx28:V, reg r119:V, reg l15:*, reg c44:L, reg r121:I, reg l17:*, reg dr18:V, reg dc9:L, reg dx29:V, reg dx30:V, reg r124:V, reg as_Date1:cls, reg seq:cls, reg start16:*, reg start17:V, reg p10:p(V +), reg end2:*, reg end3:V, reg p11:p(V +), reg r127:V, reg p12:p(V +), reg r129:V, reg right1:*, reg right2:V, reg c45:L, reg breaks17:*, reg breaks18:V, reg r130:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r132:V, reg r133:V, reg missing1:cls, reg r134:V, reg c46:L, reg r135:V, reg r136:V, reg valid8:*, reg valid9:V, reg r137:V, reg c47:L, reg l18:*, reg c48:L, reg r139:I, reg l20:*, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg r142:V, reg l21:*, reg c49:L, reg r144:I, reg l23:*, reg dr22:V, reg dc11:L, reg dx33:V, reg dx34:V, reg r147:V, reg as_POSIXlt3:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r148:V, reg r149:V, reg x7:*, reg x8:V, reg max1:cls, reg r150:V, reg p13:p(V +), reg r152:V, reg as_POSIXlt4:cls, reg end4:*, reg end5:V, reg r153:V, reg p14:p(V +), reg r155:V, reg l24:*, reg c50:L, reg r157:I, reg l26:*, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg r160:V, reg l27:*, reg c51:L, reg r162:I, reg l29:*, reg dr26:V, reg dc13:L, reg dx37:V, reg dx38:V, reg r165:V, reg l30:*, reg c52:L, reg r167:I, reg l32:*, reg dr28:V, reg dc14:L, reg dx39:V, reg dx40:V, reg r170:V, reg as_Date2:cls, reg seq1:cls, reg start18:*, reg start19:V, reg p15:p(V +), reg end6:*, reg end7:V, reg p16:p(V +), reg r173:V, reg p17:p(V +), reg r175:V, reg right3:*, reg right4:V, reg c53:L, reg breaks19:*, reg breaks20:V, reg r176:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r178:V, reg r179:V, reg missing2:cls, reg r180:V, reg c54:L, reg r181:V, reg valid10:*, reg valid11:V, reg r182:V, reg c55:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r183:V, reg r184:V, reg rep:cls, reg r185:V, reg qtr:*, reg qtr1:V, reg c56:L, reg qtr3:V, reg dr30:V, reg dc15:L, reg dx41:V, reg dx42:V, reg start20:*, reg start21:V, reg c57:L, reg qtr5:V, reg start23:V, reg dr32:V, reg dc16:L, reg dx43:V, reg qtr7:V, reg dx44:V, reg r186:V, reg r187:V, reg __:cls, reg r188:V, reg l33:*, reg c58:L, reg dx46:V, reg l35:*, reg dr34:V, reg dc17:L, reg dx48:V, reg dx50:V, reg r189:V, reg l36:*, reg c59:L, reg r191:I, reg l38:*, reg dr36:V, reg dc18:L, reg dx51:V, reg dx52:V, reg r194:V, reg as_POSIXlt5:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r195:V, reg r196:V, reg x9:*, reg x10:V, reg max2:cls, reg r197:V, reg p18:p(V +), reg r199:V, reg as_POSIXlt6:cls, reg end8:*, reg end9:V, reg r200:V, reg p19:p(V +), reg r202:V, reg qtr8:*, reg qtr9:V, reg c60:L, reg qtr11:V, reg dr38:V, reg dc19:L, reg dx53:V, reg dx54:V, reg end10:*, reg end11:V, reg c61:L, reg qtr13:V, reg end13:V, reg dr40:V, reg dc20:L, reg dx55:V, reg qtr15:V, reg dx56:V, reg r203:V, reg r204:V, reg __1:cls, reg r205:V, reg l39:*, reg c62:L, reg dx58:V, reg l41:*, reg dr42:V, reg dc21:L, reg dx60:V, reg dx62:V, reg r206:V, reg l42:*, reg c63:L, reg r208:I, reg l44:*, reg dr44:V, reg dc22:L, reg dx63:V, reg dx64:V, reg r211:V, reg l45:*, reg c64:L, reg r213:I, reg l47:*, reg dr46:V, reg dc23:L, reg dx65:V, reg dx66:V, reg r216:V, reg as_Date3:cls, reg seq2:cls, reg start24:*, reg start25:V, reg p20:p(V +), reg end14:*, reg end15:V, reg p21:p(V +), reg r219:V, reg p22:p(V +), reg r221:V, reg right5:*, reg right6:V, reg c65:L, reg breaks21:*, reg breaks22:V, reg r222:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r224:V, reg r225:V, reg missing3:cls, reg r226:V, reg c66:L, reg r227:V, reg as_Date4:cls, reg start26:*, reg start27:V, reg p23:p(V +), reg r229:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r230:V, reg r231:V, reg x11:*, reg x12:V, reg max3:cls, reg r232:V, reg seq3:cls, reg start28:*, reg start29:V, reg p24:p(V +), reg maxx:*, reg maxx1:V, reg incr:*, reg incr1:V, reg r234:V, reg p25:p(V +), reg breaks23:*, reg breaks24:V, reg p26:p(V +), reg r237:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r238:V, reg r239:V, reg breaks25:*, reg breaks26:V, reg length2:cls, reg r240:V, reg r241:V, reg c67:L, reg breaks27:*, reg breaks28:V, reg c68:L, reg breaks30:V, reg dr48:V, reg dc24:L, reg dx67:V, reg dx68:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r242:V, reg breaks33:V, reg r243:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r246:V, reg breaks36:V, reg r247:I, reg r248:V, reg which:cls, reg breaks37:*, reg breaks38:V, reg maxx2:*, reg maxx3:V, reg r249:V, reg p27:p(V +), reg r251:V, reg max4:cls, reg r252:V, reg r253:V, reg r254:I, reg __2:cls, reg r255:V, reg stop3:cls, reg r256:V, reg hist_default:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r257:V, reg r258:V, reg x13:*, reg x14:V, reg unclass1:cls, reg r259:V, reg p28:p(V +), reg sym26:cls, reg base26:cls, reg guard26:L, reg r261:V, reg r262:V, reg breaks39:*, reg breaks40:V, reg unclass2:cls, reg r263:V, reg p29:p(V +), reg right7:*, reg right8:V, reg p30:p(V +), reg ddd1:dots?, reg r266:V, reg l48:*, reg c69:L, reg r268:L, reg l50:*, reg dr50:V, reg dc25:L, reg dx69:V, reg dx70:V, reg r271:V, reg xlab3:*, reg xlab4:V, reg l51:*, reg c70:L, reg xlab6:V, reg l53:*, reg dr52:V, reg dc26:L, reg dx71:V, reg dx72:V, reg r272:V, reg plot1:*, reg plot2:V, reg c71:L, reg r273:cls, reg myplot:cls, reg res:*, reg res1:V, reg p31:p(V +), reg xlab9:*, reg xlab10:V, reg p32:p(V +), reg freq1:*, reg freq2:V, reg p33:p(V +), reg format1:*, reg format2:V, reg p34:p(V +), reg breaks41:*, reg breaks42:V, reg p35:p(V +), reg ddd2:dots?, reg r279:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r281:V, reg r282:V, reg res2:*, reg res3:V, reg invisible:cls, reg r283:V |
    mkenv;
    st x = x;
    st breaks = breaks;
    st `...` = ddd;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L0() else L1(xlab);
  L0():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym x>);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L1(p1);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L2(TRUE) else L2(plot);
  L2(plot_orDefault):
    st plot = plot_orDefault;
    freq_isMissing = missing.0(freq);
    if freq_isMissing then L3(FALSE) else L3(freq);
  L3(freq_orDefault):
    st freq = freq_orDefault;
    start_on_monday_isMissing = missing.0(start_on_monday);
    if start_on_monday_isMissing then L4(TRUE) else L4(start_on_monday);
  L4(start_on_monday_orDefault):
    st `start.on.monday` = start_on_monday_orDefault;
    st format = format;
    right_isMissing = missing.0(right);
    if right_isMissing then L5(TRUE) else L5(right);
  L5(right_orDefault):
    st right = right_orDefault;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L75() else L76();
  L6(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L79() else L7();
  L75():
    x1 = ld x;
    check L77() else D0();
  L76():
    r6 = dyn base1(<sym x>, "Date");
    goto L6(r6);
  D0():
    deopt 2 [x1];
  L7():
    goto L8();
  L8():
    force = ldf force;
    check L83() else D4();
  L77():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r8 = dyn inherits(x2, "Date", FALSE);
    check L78() else D1();
  L79():
    stop = ldf stop;
    check L80() else D2();
  D1():
    deopt 7 [r8];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L78():
    goto L6(r8);
  L80():
    r10 = dyn stop("wrong method");
    check L81() else D3();
  L83():
    p2 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    r13 = dyn force(p2);
    check L84() else D5();
  D3():
    deopt 12 [r10];
  D5():
    deopt 18 [r13];
  L81():
    goto L8();
  L84():
    st incr = 1.0;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L85() else L86();
  L9(r15):
    c1 = `as.logical`(r15);
    if c1 then L87() else L10();
  L85():
    missing = ldf missing in base;
    r16 = dyn missing(<sym breaks>);
    goto L9(r16);
  L86():
    r14 = dyn base2(<sym breaks>);
    goto L9(r14);
  L10():
    goto L11();
  L11():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L91() else L92();
  L87():
    stop1 = ldf stop;
    check L88() else D6();
  D6():
    deopt 26 [];
  L12(r20):
    c2 = `as.logical`(r20);
    if c2 then L95() else L13();
  L88():
    r17 = dyn stop1("Must specify 'breaks' in hist(<Date>)");
    check L89() else D7();
  L91():
    breaks1 = ld breaks;
    check L93() else D8();
  L92():
    r19 = dyn base3(<sym breaks>, "Date");
    goto L12(r19);
  D7():
    deopt 28 [r17];
  D8():
    deopt 33 [breaks1];
  L13():
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L119() else L120();
  L24():
    hist_default = ldf `hist.default`;
    check L348() else D88();
  L89():
    goto L11();
  L93():
    breaks2 = force? breaks1;
    checkMissing(breaks2);
    inherits1 = ldf inherits in base;
    r21 = dyn inherits1(breaks2, "Date", FALSE);
    check L94() else D9();
  L95():
    as_Date = ldf `as.Date`;
    check L96() else D10();
  D9():
    deopt 38 [r21];
  D10():
    deopt 40 [];
  D88():
    deopt 444 [];
  L25(r45):
    c7 = `as.logical`(r45);
    if c7 then L123() else L26(c7);
  L94():
    goto L12(r21);
  L96():
    p3 = prom<V +>{
      breaks3 = ld breaks;
      breaks4 = force? breaks3;
      checkMissing(breaks4);
      return breaks4;
    };
    r23 = dyn as_Date(p3);
    check L97() else D11();
  L119():
    breaks7 = ld breaks;
    check L121() else D20();
  L120():
    r44 = dyn base7(<sym breaks>);
    goto L25(r44);
  L348():
    p28 = prom<V +>{
      sym25 = ldf unclass;
      base25 = ldf unclass in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r258):
      return r258;
    L1():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      unclass1 = ldf unclass in base;
      r259 = dyn unclass1(x14);
      goto L0(r259);
    L2():
      r257 = dyn base25(<sym x>);
      goto L0(r257);
    };
    p29 = prom<V +>{
      sym26 = ldf unclass;
      base26 = ldf unclass in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r262):
      return r262;
    L1():
      breaks39 = ld breaks;
      breaks40 = force? breaks39;
      checkMissing(breaks40);
      unclass2 = ldf unclass in base;
      r263 = dyn unclass2(breaks40);
      goto L0(r263);
    L2():
      r261 = dyn base26(<sym breaks>);
      goto L0(r261);
    };
    p30 = prom<V +>{
      right7 = ld right;
      right8 = force? right7;
      checkMissing(right8);
      return right8;
    };
    ddd1 = ld `...`;
    r266 = dyn hist_default[, , plot, `warn.unused`, right, `...`](p28, p29, FALSE, FALSE, p30, ddd1);
    check L349() else D89();
  D11():
    deopt 42 [r23];
  D20():
    deopt 98 [breaks7];
  D89():
    deopt 454 [r266];
  L26(c9):
    st `num.br` = c9;
    num_br = ld `num.br`;
    check L129() else D24();
  L97():
    st breaks = r23;
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  L121():
    breaks8 = force? breaks7;
    checkMissing(breaks8);
    is_numeric = ldf `is.numeric` in base;
    r46 = dyn is_numeric(breaks8);
    check L122() else D21();
  L123():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L124() else L125();
  L349():
    st res = r266;
    l48 = ld res;
    c69 = `is.object`(l48);
    if c69 then L351() else L352(TRUE, l48);
  D21():
    deopt 101 [r46];
  D24():
    deopt 112 [num_br];
  L14(r25):
    st d = r25;
    d = ld d;
    check L106() else D16();
  L27(c12, r48):
    r50 = `==`(r48, 1);
    c13 = `as.logical`(r50);
    c14 = `&&`(c12, c13);
    goto L26(c14);
  L98():
    sym5 = ldf abs;
    base5 = ldf abs in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L99():
    r24 = dyn base4(<lang abs(diff(unclass(breaks)))>);
    goto L14(r24);
  L122():
    goto L25(r46);
  L124():
    breaks9 = ld breaks;
    check L126() else D22();
  L125():
    r47 = dyn base8(<sym breaks>);
    goto L27(c7, r47);
  L129():
    num_br1 = force? num_br;
    checkMissing(num_br1);
    c16 = `as.logical`(num_br1);
    if c16 then L130() else L28();
  L350(dx70):
    st res = dx70;
    xlab3 = ld xlab;
    check L354() else D90();
  L351():
    dr50 = tryDispatchBuiltin.0("$<-", l48, TRUE);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L353() else L352(TRUE, dr50);
  L352(r268, l50):
    r271 = `$<-`(l50, <sym equidist>, TRUE);
    goto L350(r271);
  D16():
    deopt 57 [d];
  D22():
    deopt 104 [c7, breaks9];
  D90():
    deopt 461 [xlab3];
  L15(r27):
    min = ldf min in base;
    r34 = dyn min(r27);
    check L105() else D15();
  L28():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L132() else L133();
  L100():
    diff = ldf diff;
    check L102() else D12();
  L101():
    r26 = dyn base5(<lang diff(unclass(breaks))>);
    goto L15(r26);
  L106():
    d1 = force? d;
    checkMissing(d1);
    r35 = `>`(d1, 1.0);
    c3 = `as.logical`(r35);
    if c3 then L107() else L16();
  L126():
    breaks10 = force? breaks9;
    checkMissing(breaks10);
    length = ldf length in base;
    r49 = dyn length(breaks10);
    check L127() else D23();
  L130():
    goto L24();
  L353():
    dx69 = getTryDispatchBuiltinValue(dr50);
    goto L350(dx69);
  L354():
    xlab4 = force? xlab3;
    checkMissing(xlab4);
    l51 = ld res;
    c70 = `is.object`(l51);
    if c70 then L356() else L357(xlab4, l51);
  D12():
    deopt 49 [];
  D15():
    deopt 55 [r34];
  D23():
    deopt 107 [c7, r49];
  L16():
    goto L17();
  L17():
    d2 = ld d;
    check L109() else D17();
  L29(r52):
    c18 = `as.logical`(r52);
    if c18 then L135() else L30(c18);
  L102():
    p4 = prom<V +>{
      sym6 = ldf unclass;
      base6 = ldf unclass in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      breaks5 = ld breaks;
      breaks6 = force? breaks5;
      checkMissing(breaks6);
      unclass = ldf unclass in base;
      r30 = dyn unclass(breaks6);
      goto L0(r30);
    L2():
      r28 = dyn base6(<sym breaks>);
      goto L0(r28);
    };
    r32 = dyn diff(p4);
    check L103() else D13();
  L105():
    goto L14(r34);
  L107():
    st incr = 1.0;
    goto L17();
  L127():
    goto L27(c7, r49);
  L132():
    breaks11 = ld breaks;
    check L134() else D25();
  L133():
    r51 = dyn base9(<sym breaks>);
    goto L29(r51);
  L355(dx72):
    st res = dx72;
    plot1 = ld plot;
    check L359() else D91();
  L356():
    dr52 = tryDispatchBuiltin.0("$<-", l51, xlab4);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L358() else L357(xlab4, dr52);
  L357(xlab6, l53):
    r272 = `$<-`(l53, <sym xname>, xlab4);
    goto L355(r272);
  D13():
    deopt 51 [r32];
  D17():
    deopt 66 [d2];
  D25():
    deopt 117 [breaks11];
  D91():
    deopt 466 [plot1];
  L30(c20):
    c27 = `as.logical`(c20);
    if c27 then L141() else L32();
  L103():
    abs = ldf abs in base;
    r33 = dyn abs(r32);
    check L104() else D14();
  L109():
    d3 = force? d2;
    checkMissing(d3);
    r37 = `>`(d3, 7.0);
    c4 = `as.logical`(r37);
    if c4 then L110() else L18();
  L134():
    breaks12 = force? breaks11;
    checkMissing(breaks12);
    c17 = `is.character`(breaks12);
    goto L29(c17);
  L135():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L136() else L137();
  L358():
    dx71 = getTryDispatchBuiltinValue(dr52);
    goto L355(dx71);
  L359():
    plot2 = force? plot1;
    checkMissing(plot2);
    c71 = `as.logical`(plot2);
    if c71 then L360() else L72();
  D14():
    deopt 53 [r33];
  L18():
    goto L19();
  L19():
    d4 = ld d;
    check L112() else D18();
  L31(c23, r54):
    r56 = `==`(r54, 1);
    c24 = `as.logical`(r56);
    c25 = `&&`(c23, c24);
    goto L30(c25);
  L32():
    stop3 = ldf stop;
    check L346() else D86();
  L72():
    goto L73();
  L73():
    sym27 = ldf invisible;
    base27 = ldf invisible in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L364() else L365();
  L104():
    goto L15(r33);
  L110():
    st incr = 7.0;
    goto L19();
  L136():
    breaks13 = ld breaks;
    check L138() else D26();
  L137():
    r53 = dyn base10(<sym breaks>);
    goto L31(c18, r53);
  L141():
    pmatch = ldf pmatch;
    check L142() else D28();
  L360():
    r273 = clos inner3757286720;
    st myplot = r273;
    myplot = ldf myplot;
    check L361() else D92();
  D18():
    deopt 75 [d4];
  D26():
    deopt 122 [c18, breaks13];
  D28():
    deopt 130 [];
  D86():
    deopt 440 [];
  D92():
    deopt 472 [];
  L74(r282):
    popenv;
    return r282;
  L112():
    d5 = force? d4;
    checkMissing(d5);
    r39 = `>`(d5, 28.0);
    c5 = `as.logical`(r39);
    if c5 then L113() else L20();
  L138():
    breaks14 = force? breaks13;
    checkMissing(breaks14);
    length1 = ldf length in base;
    r55 = dyn length1(breaks14);
    check L139() else D27();
  L142():
    p5 = prom<V +>{
      breaks15 = ld breaks;
      breaks16 = force? breaks15;
      checkMissing(breaks16);
      return breaks16;
    };
    p6 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      c28 = ldf c in base;
      r60 = dyn c28("days", "weeks", "months", "years", "quarters");
      goto L0(r60);
    L2():
      r58 = dyn base11("days", "weeks", "months", "years", "quarters");
      goto L0(r58);
    };
    r62 = dyn pmatch(p5, p6);
    check L143() else D29();
  L346():
    r256 = dyn stop3("invalid specification of 'breaks'");
    check L347() else D87();
  L361():
    p31 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p32 = prom<V +>{
      xlab9 = ld xlab;
      xlab10 = force? xlab9;
      checkMissing(xlab10);
      return xlab10;
    };
    p33 = prom<V +>{
      freq1 = ld freq;
      freq2 = force? freq1;
      checkMissing(freq2);
      return freq2;
    };
    p34 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    p35 = prom<V +>{
      breaks41 = ld breaks;
      breaks42 = force? breaks41;
      checkMissing(breaks42);
      return breaks42;
    };
    ddd2 = ld `...`;
    r279 = dyn myplot[, , , , , `...`](p31, p32, p33, p34, p35, ddd2);
    check L362() else D93();
  L364():
    res2 = ld res;
    check L366() else D94();
  L365():
    r281 = dyn base27(<sym res>);
    goto L74(r281);
  D27():
    deopt 125 [c18, r55];
  D29():
    deopt 133 [r62];
  D87():
    deopt 442 [r256];
  D93():
    deopt 479 [r279];
  D94():
    deopt 484 [res2];
  L20():
    goto L21();
  L21():
    d6 = ld d;
    check L115() else D19();
  L113():
    st incr = 28.0;
    goto L21();
  L139():
    goto L31(c18, r55);
  L143():
    st valid = r62;
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L144() else L145();
  L347():
    goto L24();
  L362():
    goto L73();
  L366():
    res3 = force? res2;
    checkMissing(res3);
    invisible = ldf invisible in base;
    r283 = dyn invisible(res3);
    check L367() else D95();
  D19():
    deopt 84 [d6];
  D95():
    deopt 487 [r283];
  L33(r64):
    c29 = `as.logical`(r64);
    if c29 then L148() else L34();
  L115():
    d7 = force? d6;
    checkMissing(d7);
    r41 = `>`(d7, 366.0);
    c6 = `as.logical`(r41);
    if c6 then L116() else L22();
  L144():
    valid = ld valid;
    check L146() else D30();
  L145():
    r63 = dyn base12(<sym valid>);
    goto L33(r63);
  L367():
    goto L74(r283);
  D30():
    deopt 137 [valid];
  L22():
    goto L23();
  L23():
    st `num.br` = FALSE;
    goto L24();
  L34():
    goto L35();
  L35():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L152() else D34();
  L116():
    st incr = 366.0;
    goto L23();
  L146():
    valid1 = force? valid;
    checkMissing(valid1);
    is_na = ldf `is.na` in base;
    r65 = dyn is_na(valid1);
    check L147() else D31();
  L148():
    stop2 = ldf stop;
    check L149() else D32();
  D31():
    deopt 140 [r65];
  D32():
    deopt 142 [];
  D34():
    deopt 148 [];
  L147():
    goto L33(r65);
  L149():
    r66 = dyn stop2("invalid specification of 'breaks'");
    check L150() else D33();
  L152():
    p7 = prom<V +>{
      sym13 = ldf min;
      base13 = ldf min in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      min1 = ldf min in base;
      r70 = dyn min1(x4, TRUE);
      goto L0(r70);
    L2():
      r68 = dyn base13[, `na.rm`](<sym x>, TRUE);
      goto L0(r68);
    };
    r72 = dyn as_POSIXlt(p7);
    check L153() else D35();
  D33():
    deopt 144 [r66];
  D35():
    deopt 150 [r72];
  L150():
    goto L35();
  L153():
    st start = r72;
    st incr = 1.0;
    valid2 = ld valid;
    check L154() else D36();
  D36():
    deopt 155 [valid2];
  L154():
    valid3 = force? valid2;
    checkMissing(valid3);
    r73 = `>`(valid3, 1);
    c30 = `as.logical`(r73);
    if c30 then L155() else L36();
  L36():
    goto L37();
  L37():
    valid4 = ld valid;
    check L161() else D37();
  L155():
    l = ld start;
    c31 = `is.object`(l);
    if c31 then L157() else L158(-1, l);
  D37():
    deopt 166 [valid4];
  L156(r77, dx1):
    st start = dx1;
    goto L37();
  L157():
    dr = tryDispatchBuiltin.0("$<-", l, -1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L159() else L158(-1, dr);
  L158(r75, l2):
    r78 = `$<-`(l2, <sym isdst>, -1);
    goto L156(r75, r78);
  L161():
    valid5 = force? valid4;
    checkMissing(valid5);
    r80 = `==`(valid5, 2);
    c32 = `as.logical`(r80);
    if c32 then L162() else L38();
  L38():
    goto L43();
  L43():
    valid6 = ld valid;
    check L197() else D43();
  L159():
    dx = getTryDispatchBuiltinValue(dr);
    goto L156(-1, dx);
  L162():
    start = ld start;
    check L163() else D38();
  D38():
    deopt 170 [start];
  D43():
    deopt 203 [valid6];
  L163():
    start1 = force? start;
    checkMissing(start1);
    c33 = `is.object`(start1);
    if c33 then L165() else L166(start1);
  L197():
    valid7 = force? valid6;
    checkMissing(valid7);
    r101 = `==`(valid7, 3);
    c41 = `as.logical`(r101);
    if c41 then L198() else L44();
  L44():
    valid8 = ld valid;
    check L226() else D52();
  L50(r136):
    goto L24();
  L164(dx3):
    start4 = ld start;
    check L168() else D39();
  L165():
    dr2 = tryDispatchBuiltin.1("$", start1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L167() else L166(dr2);
  L166(start3):
    r81 = `$`(start3, <sym mday>);
    goto L164(r81);
  L198():
    l9 = ld start;
    c42 = `is.object`(l9);
    if c42 then L200() else L201(1, l9);
  D39():
    deopt 172 [dx3, start4];
  D52():
    deopt 254 [valid8];
  L167():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L164(dx2);
  L168():
    start5 = force? start4;
    checkMissing(start5);
    c34 = `is.object`(start5);
    if c34 then L170() else L171(dx3, start5);
  L199(dx26):
    st start = dx26;
    as_POSIXlt1 = ldf `as.POSIXlt`;
    check L203() else D44();
  L200():
    dr14 = tryDispatchBuiltin.0("$<-", l9, 1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L202() else L201(1, dr14);
  L201(r103, l11):
    r106 = `$<-`(l11, <sym mday>, 1);
    goto L199(r106);
  L226():
    valid9 = force? valid8;
    checkMissing(valid9);
    r137 = `==`(valid9, 4);
    c47 = `as.logical`(r137);
    if c47 then L227() else L51();
  D44():
    deopt 213 [];
  L51():
    valid10 = ld valid;
    check L263() else D61();
  L169(dx8, dx9):
    r83 = `-`(dx8, dx9);
    l3 = ld start;
    c35 = `is.object`(l3);
    if c35 then L174() else L175(r83, l3);
  L170():
    dr4 = tryDispatchBuiltin.1("$", start5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L172() else L171(dx3, dr4);
  L171(dx5, start7):
    r82 = `$`(start7, <sym wday>);
    goto L169(dx5, r82);
  L202():
    dx25 = getTryDispatchBuiltinValue(dr14);
    goto L199(dx25);
  L203():
    p8 = prom<V +>{
      sym14 = ldf max;
      base14 = ldf max in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r108):
      return r108;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      max = ldf max in base;
      r109 = dyn max(x6, TRUE);
      goto L0(r109);
    L2():
      r107 = dyn base14[, `na.rm`](<sym x>, TRUE);
      goto L0(r107);
    };
    r111 = dyn as_POSIXlt1(p8);
    check L204() else D45();
  L227():
    l18 = ld start;
    c48 = `is.object`(l18);
    if c48 then L229() else L230(0, l18);
  D45():
    deopt 215 [r111];
  D61():
    deopt 315 [valid10];
  L172():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L169(dx3, dx7);
  L173(dx11):
    st start = dx11;
    start_on_monday1 = ld `start.on.monday`;
    check L177() else D40();
  L174():
    dr6 = tryDispatchBuiltin.0("$<-", l3, r83);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L176() else L175(r83, dr6);
  L175(r85, l5):
    r88 = `$<-`(l5, <sym mday>, r83);
    goto L173(r88);
  L204():
    st end = r111;
    as_POSIXlt2 = ldf `as.POSIXlt`;
    check L205() else D46();
  L228(dx32):
    st start = dx32;
    l21 = ld start;
    c49 = `is.object`(l21);
    if c49 then L233() else L234(1, l21);
  L229():
    dr20 = tryDispatchBuiltin.0("$<-", l18, 0);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L231() else L230(0, dr20);
  L230(r139, l20):
    r142 = `$<-`(l20, <sym mon>, 0);
    goto L228(r142);
  L263():
    valid11 = force? valid10;
    checkMissing(valid11);
    r182 = `==`(valid11, 5);
    c55 = `as.logical`(r182);
    if c55 then L264() else L57();
  D40():
    deopt 179 [start_on_monday1];
  D46():
    deopt 218 [];
  L57():
    as_Date4 = ldf `as.Date`;
    check L320() else D74();
  L176():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L173(dx10);
  L177():
    start_on_monday2 = force? start_on_monday1;
    checkMissing(start_on_monday2);
    c36 = `as.logical`(start_on_monday2);
    if c36 then L178() else L39();
  L205():
    p9 = prom<V +>{
      end = ld end;
      end1 = force? end;
      checkMissing(end1);
      r112 = `+`(end1, 2678400.0);
      return r112;
    };
    r114 = dyn as_POSIXlt2(p9);
    check L206() else D47();
  L231():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L228(dx31);
  L232(dx34):
    st start = dx34;
    as_POSIXlt3 = ldf `as.POSIXlt`;
    check L236() else D53();
  L233():
    dr22 = tryDispatchBuiltin.0("$<-", l21, 1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L235() else L234(1, dr22);
  L234(r144, l23):
    r147 = `$<-`(l23, <sym mday>, 1);
    goto L232(r147);
  L264():
    sym18 = ldf rep;
    base18 = ldf rep in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L265() else L266();
  D47():
    deopt 220 [r114];
  D53():
    deopt 269 [];
  D74():
    deopt 393 [];
  L39():
    goto L42();
  L42():
    st incr = 7.0;
    goto L43();
  L58(r184):
    st qtr = r184;
    qtr = ld qtr;
    check L267() else D62();
  L178():
    start8 = ld start;
    check L179() else D41();
  L206():
    st end = r114;
    l12 = ld end;
    c43 = `is.object`(l12);
    if c43 then L208() else L209(1, l12);
  L235():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L232(dx33);
  L236():
    p13 = prom<V +>{
      sym16 = ldf max;
      base16 = ldf max in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r149):
      return r149;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      max1 = ldf max in base;
      r150 = dyn max1(x8, TRUE);
      goto L0(r150);
    L2():
      r148 = dyn base16[, `na.rm`](<sym x>, TRUE);
      goto L0(r148);
    };
    r152 = dyn as_POSIXlt3(p13);
    check L237() else D54();
  L265():
    rep = ldf rep in base;
    r185 = dyn rep(<lang c(0, 3, 6, 9)>, 3);
    goto L58(r185);
  L266():
    r183 = dyn base18[, each](<lang c(0, 3, 6, 9)>, 3);
    goto L58(r183);
  L320():
    p23 = prom<V +>{
      start26 = ld start;
      start27 = force? start26;
      checkMissing(start27);
      return start27;
    };
    r229 = dyn as_Date4(p23);
    check L321() else D75();
  D41():
    deopt 181 [start8];
  D54():
    deopt 271 [r152];
  D62():
    deopt 323 [qtr];
  D75():
    deopt 395 [r229];
  L179():
    start9 = force? start8;
    checkMissing(start9);
    c37 = `is.object`(start9);
    if c37 then L181() else L182(start9);
  L207(dx28):
    st end = dx28;
    l15 = ld end;
    c44 = `is.object`(l15);
    if c44 then L212() else L213(-1, l15);
  L208():
    dr16 = tryDispatchBuiltin.0("$<-", l12, 1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L210() else L209(1, dr16);
  L209(r116, l14):
    r119 = `$<-`(l14, <sym mday>, 1);
    goto L207(r119);
  L237():
    st end = r152;
    as_POSIXlt4 = ldf `as.POSIXlt`;
    check L238() else D55();
  L267():
    qtr1 = force? qtr;
    checkMissing(qtr1);
    c56 = `is.object`(qtr1);
    if c56 then L268() else L269(qtr1);
  L321():
    st start = r229;
    sym21 = ldf max;
    base21 = ldf max in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L322() else L323();
  D55():
    deopt 274 [];
  L59(dx42):
    l33 = ld start;
    c58 = `is.object`(l33);
    if c58 then L277() else L278(dx42, l33);
  L66(r231):
    st maxx = r231;
    seq3 = ldf seq;
    check L326() else D78();
  L180(dx13):
    start12 = ld start;
    check L184() else D42();
  L181():
    dr8 = tryDispatchBuiltin.1("$", start9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L183() else L182(dr8);
  L182(start11):
    r89 = `$`(start11, <sym mday>);
    goto L180(r89);
  L210():
    dx27 = getTryDispatchBuiltinValue(dr16);
    goto L207(dx27);
  L211(dx30):
    st end = dx30;
    as_Date1 = ldf `as.Date`;
    check L215() else D48();
  L212():
    dr18 = tryDispatchBuiltin.0("$<-", l15, -1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L214() else L213(-1, dr18);
  L213(r121, l17):
    r124 = `$<-`(l17, <sym isdst>, -1);
    goto L211(r124);
  L238():
    p14 = prom<V +>{
      end4 = ld end;
      end5 = force? end4;
      checkMissing(end5);
      r153 = `+`(end5, 3.16224E7);
      return r153;
    };
    r155 = dyn as_POSIXlt4(p14);
    check L239() else D56();
  L268():
    dr30 = tryDispatchBuiltin.1("[", qtr1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L270() else L269(dr30);
  L269(qtr3):
    start20 = ld start;
    check L271() else D63();
  L322():
    x11 = ld x;
    check L324() else D76();
  L323():
    r230 = dyn base21[, `na.rm`](<sym x>, TRUE);
    goto L66(r230);
  D42():
    deopt 183 [dx13, start12];
  D48():
    deopt 233 [];
  D56():
    deopt 276 [r155];
  D63():
    deopt 325 [qtr3, start20];
  D76():
    deopt 399 [x11];
  D78():
    deopt 407 [];
  L183():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L180(dx12);
  L184():
    start13 = force? start12;
    checkMissing(start13);
    c38 = `is.object`(start13);
    if c38 then L186() else L187(dx13, start13);
  L214():
    dx29 = getTryDispatchBuiltinValue(dr18);
    goto L211(dx29);
  L215():
    p12 = prom<V +>{
      seq = ldf seq;
      p10 = prom<V +>{
        start16 = ld start;
        start17 = force? start16;
        checkMissing(start17);
        return start17;
      };
      p11 = prom<V +>{
        end2 = ld end;
        end3 = force? end2;
        checkMissing(end3);
        return end3;
      };
      r127 = dyn seq(p10, p11, "months");
      return r127;
    };
    r129 = dyn as_Date1(p12);
    check L216() else D49();
  L239():
    st end = r155;
    l24 = ld end;
    c50 = `is.object`(l24);
    if c50 then L241() else L242(0, l24);
  L270():
    dx41 = getTryDispatchBuiltinValue(dr30);
    goto L59(dx41);
  L271():
    start21 = force? start20;
    checkMissing(start21);
    c57 = `is.object`(start21);
    if c57 then L273() else L274(qtr3, start21);
  L276(dx50):
    st start = dx50;
    l36 = ld start;
    c59 = `is.object`(l36);
    if c59 then L281() else L282(1, l36);
  L277():
    dr34 = tryDispatchBuiltin.0("$<-", l33, dx42);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L279() else L278(dx42, dr34);
  L278(dx46, l35):
    r189 = `$<-`(l35, <sym mon>, dx42);
    goto L276(r189);
  L324():
    x12 = force? x11;
    checkMissing(x12);
    max3 = ldf max in base;
    r232 = dyn max3(x12, TRUE);
    check L325() else D77();
  L326():
    p24 = prom<V +>{
      start28 = ld start;
      start29 = force? start28;
      checkMissing(start29);
      return start29;
    };
    p25 = prom<V +>{
      maxx = ld maxx;
      maxx1 = force? maxx;
      checkMissing(maxx1);
      incr = ld incr;
      incr1 = force? incr;
      checkMissing(incr1);
      r234 = `+`(maxx1, incr1);
      return r234;
    };
    p26 = prom<V +>{
      breaks23 = ld breaks;
      breaks24 = force? breaks23;
      checkMissing(breaks24);
      return breaks24;
    };
    r237 = dyn seq3(p24, p25, p26);
    check L327() else D79();
  D49():
    deopt 235 [r129];
  D77():
    deopt 404 [r232];
  D79():
    deopt 411 [r237];
  L185(dx18, dx19):
    r91 = `>`(dx19, 0);
    c39 = `as.logical`(r91);
    if c39 then L189() else L40();
  L186():
    dr10 = tryDispatchBuiltin.1("$", start13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L188() else L187(dx13, dr10);
  L187(dx15, start15):
    r90 = `$`(start15, <sym wday>);
    goto L185(dx15, r90);
  L216():
    st breaks = r129;
    right1 = ld right;
    check L217() else D50();
  L240(dx36):
    st end = dx36;
    l27 = ld end;
    c51 = `is.object`(l27);
    if c51 then L245() else L246(1, l27);
  L241():
    dr24 = tryDispatchBuiltin.0("$<-", l24, 0);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L243() else L242(0, dr24);
  L242(r157, l26):
    r160 = `$<-`(l26, <sym mon>, 0);
    goto L240(r160);
  L272(qtr7, dx44):
    r187 = `+`(dx44, 1);
    __ = ldf `[` in base;
    r188 = dyn __(qtr7, r187);
    goto L59(r188);
  L273():
    dr32 = tryDispatchBuiltin.1("$", start21);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L275() else L274(qtr3, dr32);
  L274(qtr5, start23):
    r186 = `$`(start23, <sym mon>);
    goto L272(qtr5, r186);
  L279():
    dx48 = getTryDispatchBuiltinValue(dr34);
    goto L276(dx48);
  L280(dx52):
    st start = dx52;
    as_POSIXlt5 = ldf `as.POSIXlt`;
    check L284() else D64();
  L281():
    dr36 = tryDispatchBuiltin.0("$<-", l36, 1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L283() else L282(1, dr36);
  L282(r191, l38):
    r194 = `$<-`(l38, <sym mday>, 1);
    goto L280(r194);
  L325():
    goto L66(r232);
  L327():
    st breaks = r237;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L328() else L329();
  D50():
    deopt 237 [right1];
  D64():
    deopt 340 [];
  L40():
    goto L41(dx18, -6);
  L41(dx22, r92):
    r93 = `+`(dx22, r92);
    l6 = ld start;
    c40 = `is.object`(l6);
    if c40 then L192() else L193(r93, l6);
  L67(r239):
    r241 = `>`(r239, 2);
    c67 = `as.logical`(r241);
    if c67 then L332() else L68();
  L188():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L185(dx13, dx17);
  L189():
    goto L41(dx18, 1);
  L217():
    right2 = force? right1;
    checkMissing(right2);
    c45 = `as.logical`(right2);
    if c45 then L218() else L45();
  L243():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L240(dx35);
  L244(dx38):
    st end = dx38;
    l30 = ld end;
    c52 = `is.object`(l30);
    if c52 then L249() else L250(-1, l30);
  L245():
    dr26 = tryDispatchBuiltin.0("$<-", l27, 1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L247() else L246(1, dr26);
  L246(r162, l29):
    r165 = `$<-`(l29, <sym mday>, 1);
    goto L244(r165);
  L275():
    dx43 = getTryDispatchBuiltinValue(dr32);
    goto L272(qtr3, dx43);
  L283():
    dx51 = getTryDispatchBuiltinValue(dr36);
    goto L280(dx51);
  L284():
    p18 = prom<V +>{
      sym19 = ldf max;
      base19 = ldf max in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r196):
      return r196;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      max2 = ldf max in base;
      r197 = dyn max2(x10, TRUE);
      goto L0(r197);
    L2():
      r195 = dyn base19[, `na.rm`](<sym x>, TRUE);
      goto L0(r195);
    };
    r199 = dyn as_POSIXlt5(p18);
    check L285() else D65();
  L328():
    breaks25 = ld breaks;
    check L330() else D80();
  L329():
    r238 = dyn base22(<sym breaks>);
    goto L67(r238);
  D65():
    deopt 342 [r199];
  D80():
    deopt 415 [breaks25];
  L45():
    goto L46();
  L46():
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L221() else L222();
  L68():
    goto L50(NULL);
  L191(r97, dx24):
    st start = dx24;
    goto L42();
  L192():
    dr12 = tryDispatchBuiltin.0("$<-", l6, r93);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L194() else L193(r93, dr12);
  L193(r95, l8):
    r98 = `$<-`(l8, <sym mday>, r93);
    goto L191(r95, r98);
  L218():
    breaks17 = ld breaks;
    check L219() else D51();
  L247():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L244(dx37);
  L248(dx40):
    st end = dx40;
    as_Date2 = ldf `as.Date`;
    check L252() else D57();
  L249():
    dr28 = tryDispatchBuiltin.0("$<-", l30, -1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L251() else L250(-1, dr28);
  L250(r167, l32):
    r170 = `$<-`(l32, <sym isdst>, -1);
    goto L248(r170);
  L285():
    st end = r199;
    as_POSIXlt6 = ldf `as.POSIXlt`;
    check L286() else D66();
  L330():
    breaks26 = force? breaks25;
    checkMissing(breaks26);
    length2 = ldf length in base;
    r240 = dyn length2(breaks26);
    check L331() else D81();
  L332():
    breaks27 = ld breaks;
    check L333() else D82();
  D51():
    deopt 239 [breaks17];
  D57():
    deopt 294 [];
  D66():
    deopt 345 [];
  D81():
    deopt 418 [r240];
  D82():
    deopt 421 [breaks27];
  L47(r133):
    c46 = `as.logical`(r133);
    if c46 then L223() else L48();
  L194():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L191(r93, dx23);
  L219():
    breaks18 = force? breaks17;
    checkMissing(breaks18);
    r130 = `-`(breaks18, 1.0);
    st breaks = r130;
    goto L46();
  L221():
    missing1 = ldf missing in base;
    r134 = dyn missing1(<sym format>);
    goto L47(r134);
  L222():
    r132 = dyn base15(<sym format>);
    goto L47(r132);
  L251():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L248(dx39);
  L252():
    p17 = prom<V +>{
      seq1 = ldf seq;
      p15 = prom<V +>{
        start18 = ld start;
        start19 = force? start18;
        checkMissing(start19);
        return start19;
      };
      p16 = prom<V +>{
        end6 = ld end;
        end7 = force? end6;
        checkMissing(end7);
        return end7;
      };
      r173 = dyn seq1(p15, p16, "years");
      return r173;
    };
    r175 = dyn as_Date2(p17);
    check L253() else D58();
  L286():
    p19 = prom<V +>{
      end8 = ld end;
      end9 = force? end8;
      checkMissing(end9);
      r200 = `+`(end9, 8035200.0);
      return r200;
    };
    r202 = dyn as_POSIXlt6(p19);
    check L287() else D67();
  L331():
    goto L67(r240);
  L333():
    breaks28 = force? breaks27;
    checkMissing(breaks28);
    c68 = `is.object`(breaks28);
    if c68 then L334() else L335(breaks28);
  D58():
    deopt 296 [r175];
  D67():
    deopt 347 [r202];
  L48():
    goto L49(NULL);
  L49(r135):
    goto L50(r135);
  L69(dx68):
    st breaks = dx68;
    goto L50(dx68);
  L223():
    st format = "%Y-%m-%d";
    goto L49("%Y-%m-%d");
  L253():
    st breaks = r175;
    right3 = ld right;
    check L254() else D59();
  L287():
    st end = r202;
    qtr8 = ld qtr;
    check L288() else D68();
  L334():
    dr48 = tryDispatchBuiltin.1("[", breaks28);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L336() else L335(dr48);
  L335(breaks30):
    sym23 = ldf seq_len;
    base23 = ldf seq_len in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L337() else L338();
  D59():
    deopt 298 [right3];
  D68():
    deopt 349 [qtr8];
  L70(breaks33, r243):
    __2 = ldf `[` in base;
    r255 = dyn __2(breaks33, r243);
    goto L69(r255);
  L254():
    right4 = force? right3;
    checkMissing(right4);
    c53 = `as.logical`(right4);
    if c53 then L255() else L52();
  L288():
    qtr9 = force? qtr8;
    checkMissing(qtr9);
    c60 = `is.object`(qtr9);
    if c60 then L289() else L290(qtr9);
  L336():
    dx67 = getTryDispatchBuiltinValue(dr48);
    goto L69(dx67);
  L337():
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L339() else L340();
  L338():
    r242 = dyn base23(<lang `+`(1, max(which(`<`(breaks, maxx))))>);
    goto L70(breaks30, r242);
  L52():
    goto L53();
  L53():
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L258() else L259();
  L60(dx54):
    l39 = ld end;
    c62 = `is.object`(l39);
    if c62 then L298() else L299(dx54, l39);
  L71(breaks36, r247, r248):
    r253 = `+`(r247, r248);
    r254 = seq_len(r253);
    goto L70(breaks36, r254);
  L255():
    breaks19 = ld breaks;
    check L256() else D60();
  L289():
    dr38 = tryDispatchBuiltin.1("[", qtr9);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L291() else L290(dr38);
  L290(qtr11):
    end10 = ld end;
    check L292() else D69();
  L339():
    which = ldf which;
    check L341() else D83();
  L340():
    r246 = dyn base24(<lang which(`<`(breaks, maxx))>);
    goto L71(breaks30, 1, r246);
  D60():
    deopt 300 [breaks19];
  D69():
    deopt 351 [qtr11, end10];
  D83():
    deopt 428 [breaks30, 1];
  L54(r179):
    c54 = `as.logical`(r179);
    if c54 then L260() else L55();
  L256():
    breaks20 = force? breaks19;
    checkMissing(breaks20);
    r176 = `-`(breaks20, 1.0);
    st breaks = r176;
    goto L53();
  L258():
    missing2 = ldf missing in base;
    r180 = dyn missing2(<sym format>);
    goto L54(r180);
  L259():
    r178 = dyn base17(<sym format>);
    goto L54(r178);
  L291():
    dx53 = getTryDispatchBuiltinValue(dr38);
    goto L60(dx53);
  L292():
    end11 = force? end10;
    checkMissing(end11);
    c61 = `is.object`(end11);
    if c61 then L294() else L295(qtr11, end11);
  L297(dx62):
    st end = dx62;
    l42 = ld end;
    c63 = `is.object`(l42);
    if c63 then L302() else L303(1, l42);
  L298():
    dr42 = tryDispatchBuiltin.0("$<-", l39, dx54);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L300() else L299(dx54, dr42);
  L299(dx58, l41):
    r206 = `$<-`(l41, <sym mon>, dx54);
    goto L297(r206);
  L341():
    p27 = prom<V +>{
      breaks37 = ld breaks;
      breaks38 = force? breaks37;
      checkMissing(breaks38);
      maxx2 = ld maxx;
      maxx3 = force? maxx2;
      checkMissing(maxx3);
      r249 = `<`(breaks38, maxx3);
      return r249;
    };
    r251 = dyn which(p27);
    check L342() else D84();
  D84():
    deopt 430 [breaks30, 1, r251];
  L55():
    goto L56(NULL);
  L56(r181):
    goto L50(r181);
  L260():
    st format = "%Y-%m-%d";
    goto L56("%Y-%m-%d");
  L293(qtr15, dx56):
    r204 = `+`(dx56, 1);
    __1 = ldf `[` in base;
    r205 = dyn __1(qtr15, r204);
    goto L60(r205);
  L294():
    dr40 = tryDispatchBuiltin.1("$", end11);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L296() else L295(qtr11, dr40);
  L295(qtr13, end13):
    r203 = `$`(end13, <sym mon>);
    goto L293(qtr13, r203);
  L300():
    dx60 = getTryDispatchBuiltinValue(dr42);
    goto L297(dx60);
  L301(dx64):
    st end = dx64;
    l45 = ld end;
    c64 = `is.object`(l45);
    if c64 then L306() else L307(-1, l45);
  L302():
    dr44 = tryDispatchBuiltin.0("$<-", l42, 1);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L304() else L303(1, dr44);
  L303(r208, l44):
    r211 = `$<-`(l44, <sym mday>, 1);
    goto L301(r211);
  L342():
    max4 = ldf max in base;
    r252 = dyn max4(r251);
    check L343() else D85();
  D85():
    deopt 432 [breaks30, 1, r252];
  L296():
    dx55 = getTryDispatchBuiltinValue(dr40);
    goto L293(qtr11, dx55);
  L304():
    dx63 = getTryDispatchBuiltinValue(dr44);
    goto L301(dx63);
  L305(dx66):
    st end = dx66;
    as_Date3 = ldf `as.Date`;
    check L309() else D70();
  L306():
    dr46 = tryDispatchBuiltin.0("$<-", l45, -1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L308() else L307(-1, dr46);
  L307(r213, l47):
    r216 = `$<-`(l47, <sym isdst>, -1);
    goto L305(r216);
  L343():
    goto L71(breaks30, 1, r252);
  D70():
    deopt 371 [];
  L308():
    dx65 = getTryDispatchBuiltinValue(dr46);
    goto L305(dx65);
  L309():
    p22 = prom<V +>{
      seq2 = ldf seq;
      p20 = prom<V +>{
        start24 = ld start;
        start25 = force? start24;
        checkMissing(start25);
        return start25;
      };
      p21 = prom<V +>{
        end14 = ld end;
        end15 = force? end14;
        checkMissing(end15);
        return end15;
      };
      r219 = dyn seq2(p20, p21, "3 months");
      return r219;
    };
    r221 = dyn as_Date3(p22);
    check L310() else D71();
  D71():
    deopt 373 [r221];
  L310():
    st breaks = r221;
    right5 = ld right;
    check L311() else D72();
  D72():
    deopt 375 [right5];
  L311():
    right6 = force? right5;
    checkMissing(right6);
    c65 = `as.logical`(right6);
    if c65 then L312() else L61();
  L61():
    goto L62();
  L62():
    sym20 = ldf missing;
    base20 = ldf missing in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L315() else L316();
  L312():
    breaks21 = ld breaks;
    check L313() else D73();
  D73():
    deopt 377 [breaks21];
  L63(r225):
    c66 = `as.logical`(r225);
    if c66 then L317() else L64();
  L313():
    breaks22 = force? breaks21;
    checkMissing(breaks22);
    r222 = `-`(breaks22, 1.0);
    st breaks = r222;
    goto L62();
  L315():
    missing3 = ldf missing in base;
    r226 = dyn missing3(<sym format>);
    goto L63(r226);
  L316():
    r224 = dyn base20(<sym format>);
    goto L63(r224);
  L64():
    goto L65(NULL);
  L65(r227):
    goto L50(r227);
  L317():
    st format = "%Y-%m-%d";
    goto L65("%Y-%m-%d");
  }
}
fun inner3757286720(res, xlab, freq, format, breaks, `include.lowest`, fuzz, density, angle, col, border, lty, labels, axes, xaxt, `...`) {
  (reg res:*, reg xlab:*, reg freq:*, reg format:*, reg breaks:*, reg include_lowest:*, reg fuzz:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg lty:*, reg labels:*, reg axes:*, reg xaxt:*, reg ddd:dots) -+> V { var res:*, var xlab:*, var freq:*, var format:*, var breaks:*, var `include.lowest`:*, var fuzz:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var xaxt:*, reg xaxt_isMissing:L, reg xaxt_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg plot:cls, reg res1:*, reg res2:V, reg p1:p(V +), reg xlab1:*, reg xlab2:V, reg p2:p(V +), reg freq1:*, reg freq2:V, reg p3:p(V +), reg density1:*, reg density2:V, reg p4:p(V +), reg angle1:*, reg angle2:V, reg p5:p(V +), reg col1:*, reg col2:V, reg p6:p(V +), reg border1:*, reg border2:V, reg p7:p(V +), reg lty1:*, reg lty2:V, reg p8:p(V +), reg labels1:*, reg labels2:V, reg p9:p(V +), reg ddd1:dots?, reg r11:V, reg axes1:*, reg axes2:V, reg c:L, reg axis:cls, reg ddd2:dots?, reg r12:V, reg xaxt1:*, reg xaxt2:V, reg r13:V, reg c1:L, reg num_br:*, reg num_br1:V, reg c2:L, reg as_Date:cls, reg res3:*, reg res4:V, reg c3:L, reg res6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg p10:p(V +), reg r16:V, reg axis_Date:cls, reg breaks1:*, reg breaks2:V, reg p11:p(V +), reg format1:*, reg format2:V, reg p12:p(V +), reg ddd3:dots?, reg r20:V |
    mkenv;
    st res = res;
    st xlab = xlab;
    st freq = freq;
    st format = format;
    st breaks = breaks;
    st `include.lowest` = include_lowest;
    st fuzz = fuzz;
    density_isMissing = missing.0(density);
    if density_isMissing then L0(NULL) else L0(density);
  L0(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L1(45.0) else L1(angle);
  L1(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L2("lightgray") else L2(col);
  L2(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L3(NULL) else L3(border);
  L3(border_orDefault):
    st border = border_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L4(NULL) else L4(lty);
  L4(lty_orDefault):
    st lty = lty_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L5(FALSE) else L5(labels);
  L5(labels_orDefault):
    st labels = labels_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L6(TRUE) else L6(axes);
  L6(axes_orDefault):
    st axes = axes_orDefault;
    xaxt_isMissing = missing.0(xaxt);
    if xaxt_isMissing then L7() else L8(xaxt);
  L7():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("xaxt");
      return r;
    };
    goto L8(p);
  L8(xaxt_orDefault):
    st xaxt = xaxt_orDefault;
    st `...` = ddd;
    plot = ldf plot;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p1 = prom<V +>{
      res1 = ld res;
      res2 = force? res1;
      checkMissing(res2);
      return res2;
    };
    p2 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p3 = prom<V +>{
      freq1 = ld freq;
      freq2 = force? freq1;
      checkMissing(freq2);
      return freq2;
    };
    p4 = prom<V +>{
      density1 = ld density;
      density2 = force? density1;
      checkMissing(density2);
      return density2;
    };
    p5 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      return angle2;
    };
    p6 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p7 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    p8 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p9 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r11 = dyn plot[, xlab, axes, freq, density, angle, col, border, lty, labels, `...`](p1, p2, FALSE, p3, p4, p5, p6, p7, p8, p9, ddd1);
    check L14() else D1();
  D1():
    deopt 22 [r11];
  L14():
    axes1 = ld axes;
    check L15() else D2();
  D2():
    deopt 23 [axes1];
  L15():
    axes2 = force? axes1;
    checkMissing(axes2);
    c = `as.logical`(axes2);
    if c then L16() else L9();
  L9():
    invisible.0();
    popenv;
    return NULL;
  L16():
    axis = ldf axis;
    check L17() else D3();
  D3():
    deopt 26 [];
  L17():
    ddd2 = ld `...`;
    r12 = dyn axis[, `...`](2.0, ddd2);
    check L18() else D4();
  D4():
    deopt 29 [r12];
  L18():
    xaxt1 = ld xaxt;
    check L19() else D5();
  D5():
    deopt 30 [xaxt1];
  L19():
    xaxt2 = force? xaxt1;
    checkMissing(xaxt2);
    r13 = `!=`(xaxt2, "n");
    c1 = `as.logical`(r13);
    if c1 then L20() else L10();
  L10():
    invisible.0();
    popenv;
    return NULL;
  L20():
    num_br = ld `num.br`;
    check L21() else D6();
  D6():
    deopt 34 [num_br];
  L21():
    num_br1 = force? num_br;
    checkMissing(num_br1);
    c2 = `as.logical`(num_br1);
    if c2 then L22() else L11();
  L11():
    goto L12();
  L12():
    axis_Date = ldf `axis.Date`;
    check L26() else D9();
  L22():
    as_Date = ldf `as.Date`;
    check L23() else D7();
  D7():
    deopt 37 [];
  D9():
    deopt 46 [];
  L23():
    p10 = prom<V +>{
      res3 = ld res;
      res4 = force? res3;
      checkMissing(res4);
      c3 = `is.object`(res4);
      if c3 then L1() else L2(res4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", res4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(res6):
      r14 = `$`(res6, <sym breaks>);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn as_Date[, origin](p10, "1970-01-01");
    check L24() else D8();
  L26():
    p11 = prom<V +>{
      breaks1 = ld breaks;
      breaks2 = force? breaks1;
      checkMissing(breaks2);
      return breaks2;
    };
    p12 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    ddd3 = ld `...`;
    r20 = dyn axis_Date[, at, format, `...`](1.0, p11, p12, ddd3);
    check L27() else D10();
  D8():
    deopt 41 [r16];
  D10():
    deopt 53 [r20];
  L24():
    st breaks = r16;
    goto L12();
  L27():
    popenv;
    return r20;
  }
}