fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4056810393;
    st `pairs.profile` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4056810393(x, colours, which, `...`) {
  (reg x:*, reg colours:*, reg which:*, reg ddd:dots) -+> V { var x:*, var colours:*, reg colours_isMissing:L, reg colours_orDefault:*, reg p:p(V +), var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg names:cls, reg r3:V, reg p1:p(V +), var `...`:dots?, reg lapply:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r6:V, reg apply:cls, reg do_call:cls, reg parvals:*, reg parvals1:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg range:*, reg range1:V, reg p5:p(V +), reg r11:V, reg colnames:cls, reg rng:*, reg rng1:V, reg p6:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg Pnames:*, reg Pnames1:V, reg length:cls, reg r16:V, reg force:cls, reg which1:*, reg which2:V, reg p7:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg which3:*, reg which4:V, reg c:L, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg which5:*, reg which6:V, reg Pnames2:*, reg Pnames3:V, reg match:cls, reg r23:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg which7:*, reg which8:V, reg is_na:cls, reg r29:V, reg r30:V, reg all:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg stopifnot1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg _in_:cls, reg which9:*, reg which10:V, reg p9:p(V +), reg npar:*, reg npar1:V, reg r37:V, reg p10:p(V +), reg r39:V, reg all1:cls, reg r40:V, reg p11:p(V +), reg r42:V, reg stopifnot2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg which11:*, reg which12:V, reg length1:cls, reg r45:V, reg r46:V, reg p12:p(V +), reg r48:V, reg coef:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg x5:*, reg x6:V, reg attr:cls, reg r51:V, reg p13:p(V +), reg r53:V, reg paste:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg formula:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg x7:*, reg x8:V, reg attr1:cls, reg r58:V, reg p14:p(V +), reg r60:V, reg as_character:cls, reg r61:V, reg c2:L, reg r63:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg r68:V, reg c3:cls, reg r69:V, reg __:cls, reg r70:V, reg p15:p(V +), reg r72:V, reg par:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg c4:cls, reg r75:V, reg p16:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r77:V, reg r78:V, reg c5:cls, reg r79:V, reg p17:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r81:V, reg r82:V, reg c6:cls, reg r83:V, reg p18:p(V +), reg r85:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r86:V, reg on_exit:cls, reg r88:V, reg par1:cls, reg r89:V, reg fin:*, reg fin1:V, reg c7:L, reg fin3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r90:V, reg fin4:*, reg fin5:V, reg c8:L, reg dx5:V, reg fin7:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __2:cls, reg r91:V, reg r92:V, reg r93:V, reg dif:*, reg dif1:V, reg r94:V, reg c9:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r95:V, reg r96:V, reg dif2:*, reg dif3:V, reg dif4:*, reg dif5:V, reg c10:cls, reg r97:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r99:V, reg r100:V, reg dif6:*, reg dif7:V, reg r101:V, reg dif8:*, reg dif9:V, reg r102:V, reg c11:cls, reg r103:V, reg par2:cls, reg par3:cls, reg r104:V, reg adj:*, reg adj1:V, reg r105:V, reg p19:p(V +), reg r107:V, reg nw:*, reg nw1:V, reg r108:V, reg r109:V, reg frame:cls, reg r110:V, reg mtext:cls, reg form:*, reg form1:V, reg p20:p(V +), reg r112:V, reg nw2:*, reg nw3:V, reg r113:V, reg nw4:*, reg nw5:V, reg r114:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x9:V, reg nw6:*, reg nw7:V, reg i5:*, reg i6:V, reg r115:V, reg Pnames4:*, reg Pnames5:V, reg c13:L, reg i8:I, reg Pnames7:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i10:I, reg dx11:V, reg which13:*, reg which14:V, reg c14:L, reg i12:I, reg Pnames9:V, reg which16:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i14:I, reg Pnames11:V, reg dx13:V, reg i15:*, reg i16:V, reg __3:cls, reg r116:V, reg __4:cls, reg r117:V, reg nw8:*, reg nw9:V, reg r118:V, reg s1:V, reg l1:I, reg i17:I, reg i18:I, reg i19:I, reg i20:I, reg c15:L, reg x10:V, reg dev_hold:cls, reg r119:V, reg Pnames12:*, reg Pnames13:V, reg c16:L, reg i27:I, reg i28:I, reg Pnames15:V, reg dr10:V, reg dc5:L, reg dx14:V, reg i31:I, reg i32:I, reg dx15:V, reg which17:*, reg which18:V, reg c17:L, reg i35:I, reg i36:I, reg Pnames17:V, reg which20:V, reg dr12:V, reg dc6:L, reg dx16:V, reg i39:I, reg i40:I, reg Pnames19:V, reg dx17:V, reg j:*, reg j1:V, reg __5:cls, reg r120:V, reg __6:cls, reg r121:V, reg par4:cls, reg del:*, reg del1:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r122:V, reg del4:V, reg r123:V, reg j2:*, reg j3:V, reg r124:V, reg j4:*, reg j5:V, reg ci:*, reg ci1:V, reg ci2:*, reg ci3:V, reg r125:V, reg c18:cls, reg r126:V, reg r127:V, reg p21:p(V +), reg r129:V, reg i41:*, reg i42:V, reg j6:*, reg j7:V, reg r130:V, reg c19:L, reg par5:cls, reg r131:V, reg plot:cls, reg rng2:*, reg rng3:V, reg c20:L, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg pj:*, reg pj1:V, reg __7:cls, reg r132:V, reg p22:p(V +), reg rng6:*, reg rng7:V, reg c21:L, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg pi:*, reg pi1:V, reg __8:cls, reg r134:V, reg p23:p(V +), reg r136:V, reg par6:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r137:V, reg r138:V, reg c22:cls, reg r139:V, reg p24:p(V +), reg r141:V, reg text:cls, reg pi2:*, reg pi3:V, reg p25:p(V +), reg cex:*, reg cex1:V, reg p26:p(V +), reg r144:V, reg par7:cls, reg op:*, reg op1:V, reg p27:p(V +), reg r146:V, reg i47:I, reg i48:I, reg colours1:*, reg colours2:V, reg i49:*, reg i50:V, reg j8:*, reg j9:V, reg r148:V, reg c23:L, reg col:*, reg col1:V, reg c24:L, reg i57:I, reg i58:I, reg col3:V, reg dr18:V, reg dc9:L, reg dx22:V, reg i61:I, reg i62:I, reg dx23:V, reg __9:cls, reg r149:V, reg i63:I, reg i64:I, reg par8:cls, reg r150:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r151:V, reg i69:I, reg i70:I, reg r152:V, reg parvals2:*, reg parvals3:V, reg c25:L, reg i73:I, reg i74:I, reg parvals5:V, reg dr20:V, reg dc10:L, reg dx25:V, reg i77:I, reg i78:I, reg dx26:V, reg pj2:*, reg pj3:V, reg __10:cls, reg r153:V, reg c26:V, reg r154:V, reg c27:L, reg plot1:cls, reg spline:cls, reg parvals6:*, reg parvals7:V, reg c28:L, reg parvals9:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg pj4:*, reg pj5:V, reg __11:cls, reg r155:V, reg c29:L, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg pj6:*, reg pj7:V, reg __12:cls, reg r156:V, reg p28:p(V +), reg parvals10:*, reg parvals11:V, reg c30:L, reg parvals13:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg pj8:*, reg pj9:V, reg __13:cls, reg r158:V, reg c31:L, reg dr28:V, reg dc14:L, reg dx37:V, reg dx38:V, reg pi4:*, reg pi5:V, reg __14:cls, reg r159:V, reg p29:p(V +), reg r161:V, reg p30:p(V +), reg rng10:*, reg rng11:V, reg c32:L, reg dr30:V, reg dc15:L, reg dx39:V, reg dx40:V, reg pj10:*, reg pj11:V, reg __15:cls, reg r163:V, reg p31:p(V +), reg rng14:*, reg rng15:V, reg c33:L, reg dr32:V, reg dc16:L, reg dx41:V, reg dx42:V, reg pi6:*, reg pi7:V, reg __16:cls, reg r165:V, reg p32:p(V +), reg col4:*, reg col5:V, reg c34:L, reg col7:V, reg dr34:V, reg dc17:L, reg dx43:V, reg dx44:V, reg __17:cls, reg r167:V, reg p33:p(V +), reg r169:V, reg par9:cls, reg r170:V, reg pu:*, reg pu1:V, reg c35:L, reg i85:I, reg i86:I, reg r172:R, reg pu3:V, reg dr36:V, reg dc18:L, reg dx45:V, reg i89:I, reg i90:I, reg r174:R, reg dx46:V, reg __18:cls, reg r175:V, reg pu4:*, reg pu5:V, reg c36:L, reg i93:I, reg i94:I, reg r177:R, reg dx48:V, reg pu7:V, reg dr38:V, reg dc19:L, reg dx50:V, reg i97:I, reg i98:I, reg r179:R, reg dx51:V, reg dx52:V, reg __19:cls, reg r180:V, reg r181:V, reg r182:V, reg segments:cls, reg x11:*, reg x12:V, reg p34:p(V +), reg pmax:cls, reg pu8:*, reg pu9:V, reg c37:L, reg pu11:V, reg dr40:V, reg dc20:L, reg dx53:V, reg dx54:V, reg __20:cls, reg r184:V, reg p35:p(V +), reg y:*, reg y1:V, reg smidge:*, reg smidge1:V, reg r186:V, reg p36:p(V +), reg r188:V, reg p37:p(V +), reg x13:*, reg x14:V, reg p38:p(V +), reg pmin:cls, reg pu12:*, reg pu13:V, reg c38:L, reg pu15:V, reg dr42:V, reg dc21:L, reg dx55:V, reg dx56:V, reg __21:cls, reg r191:V, reg p39:p(V +), reg y2:*, reg y3:V, reg smidge2:*, reg smidge3:V, reg r193:V, reg p40:p(V +), reg r195:V, reg p41:p(V +), reg r197:V, reg i99:I, reg i100:I, reg plot2:cls, reg rng18:*, reg rng19:V, reg c39:L, reg dr44:V, reg dc22:L, reg dx57:V, reg dx58:V, reg pj12:*, reg pj13:V, reg __22:cls, reg r199:V, reg p42:p(V +), reg rng22:*, reg rng23:V, reg c40:L, reg dr46:V, reg dc23:L, reg dx59:V, reg dx60:V, reg pi8:*, reg pi9:V, reg __23:cls, reg r201:V, reg p43:p(V +), reg r203:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r204:V, reg i105:I, reg i106:I, reg r205:V, reg parvals14:*, reg parvals15:V, reg c41:L, reg i109:I, reg i110:I, reg parvals17:V, reg dr48:V, reg dc24:L, reg dx61:V, reg i113:I, reg i114:I, reg dx62:V, reg pi10:*, reg pi11:V, reg __24:cls, reg r206:V, reg c42:V, reg r207:V, reg c43:L, reg lines:cls, reg parvals18:*, reg parvals19:V, reg c44:L, reg parvals21:V, reg dr50:V, reg dc25:L, reg dx63:V, reg dx64:V, reg pi12:*, reg pi13:V, reg __25:cls, reg r208:V, reg c45:L, reg dr52:V, reg dc26:L, reg dx67:V, reg dx68:V, reg pj14:*, reg pj15:V, reg __26:cls, reg r209:V, reg p44:p(V +), reg parvals22:*, reg parvals23:V, reg c46:L, reg parvals25:V, reg dr54:V, reg dc27:L, reg dx69:V, reg dx70:V, reg pi14:*, reg pi15:V, reg __27:cls, reg r211:V, reg c47:L, reg dr56:V, reg dc28:L, reg dx73:V, reg dx74:V, reg pi16:*, reg pi17:V, reg __28:cls, reg r212:V, reg p45:p(V +), reg col8:*, reg col9:V, reg c48:L, reg col11:V, reg dr58:V, reg dc29:L, reg dx75:V, reg dx76:V, reg __29:cls, reg r214:V, reg p46:p(V +), reg r216:V, reg par10:cls, reg r217:V, reg pu16:*, reg pu17:V, reg c49:L, reg i121:I, reg i122:I, reg r219:R, reg pu19:V, reg dr60:V, reg dc30:L, reg dx77:V, reg i125:I, reg i126:I, reg r221:R, reg dx78:V, reg __30:cls, reg r222:V, reg pu20:*, reg pu21:V, reg c50:L, reg i129:I, reg i130:I, reg r224:R, reg dx80:V, reg pu23:V, reg dr62:V, reg dc31:L, reg dx82:V, reg i133:I, reg i134:I, reg r226:R, reg dx83:V, reg dx84:V, reg __31:cls, reg r227:V, reg r228:V, reg r229:V, reg segments1:cls, reg pmax1:cls, reg pu24:*, reg pu25:V, reg c51:L, reg pu27:V, reg dr64:V, reg dc32:L, reg dx85:V, reg dx86:V, reg __32:cls, reg r230:V, reg p47:p(V +), reg x15:*, reg x16:V, reg smidge4:*, reg smidge5:V, reg r232:V, reg p48:p(V +), reg r234:V, reg p49:p(V +), reg y4:*, reg y5:V, reg p50:p(V +), reg pmin1:cls, reg pu28:*, reg pu29:V, reg c52:L, reg pu31:V, reg dr66:V, reg dc33:L, reg dx87:V, reg dx88:V, reg __33:cls, reg r237:V, reg p51:p(V +), reg x17:*, reg x18:V, reg smidge6:*, reg smidge7:V, reg r239:V, reg p52:p(V +), reg r241:V, reg p53:p(V +), reg y6:*, reg y7:V, reg p54:p(V +), reg r244:V, reg i135:I, reg i136:I, reg points:cls, reg coefs:*, reg coefs1:V, reg c53:L, reg coefs3:V, reg dr68:V, reg dc34:L, reg dx89:V, reg dx90:V, reg pj16:*, reg pj17:V, reg __34:cls, reg r246:V, reg p55:p(V +), reg coefs4:*, reg coefs5:V, reg c54:L, reg coefs7:V, reg dr70:V, reg dc35:L, reg dx91:V, reg dx92:V, reg pi18:*, reg pi19:V, reg __35:cls, reg r248:V, reg p56:p(V +), reg r250:V, reg i137:*, reg i138:V, reg nw10:*, reg nw11:V, reg r251:V, reg c55:L, reg axis:cls, reg r252:V, reg i143:I, reg i144:I, reg j10:*, reg j11:V, reg r254:V, reg c56:L, reg axis1:cls, reg r255:V, reg i149:I, reg i150:I, reg i151:*, reg i152:V, reg r257:V, reg c57:L, reg axis2:cls, reg r258:V, reg i157:I, reg i158:I, reg j12:*, reg j13:V, reg npar2:*, reg npar3:V, reg r260:V, reg c58:L, reg axis3:cls, reg r261:V, reg i163:I, reg i164:I, reg dev_flush:cls, reg r263:V, reg par11:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r264:V, reg r265:V, reg c59:cls, reg r266:V, reg p57:p(V +), reg r268:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r269:V, reg r270:V, reg x19:*, reg x20:V, reg invisible:cls, reg r271:V |
    mkenv;
    st x = x;
    colours_isMissing = missing.0(colours);
    if colours_isMissing then L0() else L1(colours);
  L0():
    p = prom<V +>{
      return <int 2, 3>;
    };
    goto L1(p);
  L1(colours_orDefault):
    st colours = colours_orDefault;
    which_isMissing = missing.0(which);
    if which_isMissing then L2() else L3(which);
  L2():
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r3 = dyn names(x2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(which_orDefault):
    st which = which_orDefault;
    st `...` = ddd;
    lapply = ldf lapply;
    check L50() else D0();
  D0():
    deopt 1 [];
  L50():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r6 = dyn lapply(p2, "[[", "par.vals");
    check L51() else D1();
  D1():
    deopt 5 [r6];
  L51():
    st parvals = r6;
    apply = ldf apply;
    check L52() else D2();
  D2():
    deopt 8 [];
  L52():
    p4 = prom<V +>{
      do_call = ldf `do.call`;
      p3 = prom<V +>{
        parvals = ld parvals;
        parvals1 = force? parvals;
        checkMissing(parvals1);
        return parvals1;
      };
      r8 = dyn do_call("rbind", p3);
      return r8;
    };
    p5 = prom<V +>{
      range = ld range;
      range1 = force? range;
      checkMissing(range1);
      return range1;
    };
    r11 = dyn apply[, , , `na.rm`](p4, 2, p5, TRUE);
    check L53() else D3();
  D3():
    deopt 14 [r11];
  L53():
    st rng = r11;
    colnames = ldf colnames;
    check L54() else D4();
  D4():
    deopt 17 [];
  L54():
    p6 = prom<V +>{
      rng = ld rng;
      rng1 = force? rng;
      checkMissing(rng1);
      return rng1;
    };
    r13 = dyn colnames(p6);
    check L55() else D5();
  D5():
    deopt 19 [r13];
  L55():
    st Pnames = r13;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L4(r15):
    st npar = r15;
    force = ldf force;
    check L60() else D8();
  L56():
    Pnames = ld Pnames;
    check L58() else D6();
  L57():
    r14 = dyn base1(<sym Pnames>);
    goto L4(r14);
  D6():
    deopt 23 [Pnames];
  D8():
    deopt 29 [];
  L58():
    Pnames1 = force? Pnames;
    checkMissing(Pnames1);
    length = ldf length in base;
    r16 = dyn length(Pnames1);
    check L59() else D7();
  L60():
    p7 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    r18 = dyn force(p7);
    check L61() else D9();
  D7():
    deopt 26 [r16];
  D9():
    deopt 31 [r18];
  L59():
    goto L4(r16);
  L61():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L5(r20):
    c1 = `as.logical`(r20);
    if c1 then L65() else L6();
  L62():
    which3 = ld which;
    check L64() else D10();
  L63():
    r19 = dyn base2(<sym which>);
    goto L5(r19);
  D10():
    deopt 33 [which3];
  L6():
    goto L8();
  L8():
    stopifnot = ldf stopifnot;
    check L72() else D14();
  L64():
    which4 = force? which3;
    checkMissing(which4);
    c = `is.character`(which4);
    goto L5(c);
  L65():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  D14():
    deopt 50 [];
  L7(r22):
    st which = r22;
    goto L8();
  L66():
    which5 = ld which;
    check L68() else D11();
  L67():
    r21 = dyn base3(<sym which>, <sym Pnames>);
    goto L7(r21);
  L72():
    p8 = prom<V +>{
      sym4 = ldf all;
      base4 = ldf all in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r26):
      return r26;
    L2():
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r25 = dyn base4(<lang `!`(is.na(which))>);
      goto L0(r25);
    L1(r28):
      r30 = `!`(r28);
      all = ldf all in base;
      r31 = dyn all(r30);
      goto L0(r31);
    L4():
      which7 = ld which;
      which8 = force? which7;
      checkMissing(which8);
      is_na = ldf `is.na` in base;
      r29 = dyn is_na(which8);
      goto L1(r29);
    L5():
      r27 = dyn base5(<sym which>);
      goto L1(r27);
    };
    r33 = dyn stopifnot(p8);
    check L73() else D15();
  D11():
    deopt 38 [which5];
  D15():
    deopt 52 [r33];
  L68():
    which6 = force? which5;
    checkMissing(which6);
    Pnames2 = ld Pnames;
    check L69() else D12();
  L73():
    stopifnot1 = ldf stopifnot;
    check L74() else D16();
  D12():
    deopt 40 [Pnames2];
  D16():
    deopt 54 [];
  L69():
    Pnames3 = force? Pnames2;
    checkMissing(Pnames3);
    match = ldf match in base;
    r23 = dyn match(which6, Pnames3, NA_INT, NULL);
    check L70() else D13();
  L74():
    p11 = prom<V +>{
      sym6 = ldf all;
      base6 = ldf all in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      _in_ = ldf `%in%`;
      p9 = prom<V +>{
        which9 = ld which;
        which10 = force? which9;
        checkMissing(which10);
        return which10;
      };
      p10 = prom<V +>{
        npar = ld npar;
        npar1 = force? npar;
        checkMissing(npar1);
        r37 = `:`(1.0, npar1);
        return r37;
      };
      r39 = dyn _in_(p9, p10);
      all1 = ldf all in base;
      r40 = dyn all1(r39);
      goto L0(r40);
    L2():
      r34 = dyn base6(<lang `%in%`(which, `:`(1.0, npar))>);
      goto L0(r34);
    };
    r42 = dyn stopifnot1(p11);
    check L75() else D17();
  D13():
    deopt 45 [r23];
  D17():
    deopt 56 [r42];
  L70():
    goto L7(r23);
  L75():
    stopifnot2 = ldf stopifnot;
    check L76() else D18();
  D18():
    deopt 58 [];
  L76():
    p12 = prom<V +>{
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r44):
      st nw = r44;
      r46 = `>=`(r44, 2.0);
      return r46;
    L1():
      which11 = ld which;
      which12 = force? which11;
      checkMissing(which12);
      length1 = ldf length in base;
      r45 = dyn length1(which12);
      goto L0(r45);
    L2():
      r43 = dyn base7(<sym which>);
      goto L0(r43);
    };
    r48 = dyn stopifnot2(p12);
    check L77() else D19();
  D19():
    deopt 60 [r48];
  L77():
    coef = ldf coef;
    check L78() else D20();
  D20():
    deopt 62 [];
  L78():
    p13 = prom<V +>{
      sym8 = ldf attr;
      base8 = ldf attr in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr = ldf attr in base;
      r51 = dyn attr(x6, "original.fit");
      goto L0(r51);
    L2():
      r49 = dyn base8(<sym x>, "original.fit");
      goto L0(r49);
    };
    r53 = dyn coef(p13);
    check L79() else D21();
  D21():
    deopt 64 [r53];
  L79():
    st coefs = r53;
    paste = ldf paste;
    check L80() else D22();
  D22():
    deopt 67 [];
  L80():
    p15 = prom<V +>{
      sym9 = ldf `as.character`;
      base9 = ldf `as.character` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L3() else L4();
    L0(r55):
      c2 = `is.object`(r55);
      if c2 then L5() else L6(r55);
    L3():
      formula = ldf formula;
      p14 = prom<V +>{
        sym10 = ldf attr;
        base10 = ldf attr in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r57):
        return r57;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        attr1 = ldf attr in base;
        r58 = dyn attr1(x8, "original.fit");
        goto L0(r58);
      L2():
        r56 = dyn base10(<sym x>, "original.fit");
        goto L0(r56);
      };
      r60 = dyn formula(p14);
      as_character = ldf `as.character` in base;
      r61 = dyn as_character(r60);
      goto L0(r61);
    L4():
      r54 = dyn base9(<lang formula(attr(x, "original.fit"))>);
      goto L0(r54);
    L1(dx1):
      return dx1;
    L5():
      dr = tryDispatchBuiltin.1("[", r55);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(r63):
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L8() else L9();
    L2(r67, r68):
      __ = ldf `[` in base;
      r70 = dyn __(r67, r68);
      goto L1(r70);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      c3 = ldf c in base;
      r69 = dyn c3(2.0, 1.0, 3.0);
      goto L2(r63, r69);
    L9():
      r66 = dyn base11(2.0, 1.0, 3.0);
      goto L2(r63, r66);
    };
    r72 = dyn paste[, collapse](p15, "");
    check L81() else D23();
  D23():
    deopt 71 [r72];
  L81():
    st form = r72;
    par = ldf par;
    check L82() else D24();
  D24():
    deopt 74 [];
  L82():
    p16 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      c4 = ldf c in base;
      r75 = dyn c4(0.0, 0.0, 0.0, 0.0);
      goto L0(r75);
    L2():
      r73 = dyn base12(0.0, 0.0, 0.0, 0.0);
      goto L0(r73);
    };
    p17 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      c5 = ldf c in base;
      r79 = dyn c5(1.0, 1.0);
      goto L0(r79);
    L2():
      r77 = dyn base13(1.0, 1.0);
      goto L0(r77);
    };
    p18 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      c6 = ldf c in base;
      r83 = dyn c6(3.0, 3.0, 6.0, 3.0);
      goto L0(r83);
    L2():
      r81 = dyn base14(3.0, 3.0, 6.0, 3.0);
      goto L0(r81);
    };
    r85 = dyn par[mar, mfrow, oma, las](p16, p17, p18, 1.0);
    check L83() else D25();
  D25():
    deopt 83 [r85];
  L83():
    st oldpar = r85;
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L84() else L85();
  L9():
    par1 = ldf par;
    check L86() else D26();
  L84():
    on_exit = ldf `on.exit` in base;
    r88 = dyn on_exit(<lang par(oldpar)>);
    goto L9();
  L85():
    r86 = dyn base15(<lang par(oldpar)>);
    goto L9();
  D26():
    deopt 89 [];
  L86():
    r89 = dyn par1("fin");
    check L87() else D27();
  D27():
    deopt 91 [r89];
  L87():
    st fin = r89;
    fin = ld fin;
    check L88() else D28();
  D28():
    deopt 93 [fin];
  L88():
    fin1 = force? fin;
    checkMissing(fin1);
    c7 = `is.object`(fin1);
    if c7 then L89() else L90(fin1);
  L10(dx3):
    fin4 = ld fin;
    check L92() else D29();
  L89():
    dr2 = tryDispatchBuiltin.1("[", fin1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L91() else L90(dr2);
  L90(fin3):
    __1 = ldf `[` in base;
    r90 = dyn __1(fin3, 2);
    goto L10(r90);
  D29():
    deopt 97 [dx3, fin4];
  L91():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L92():
    fin5 = force? fin4;
    checkMissing(fin5);
    c8 = `is.object`(fin5);
    if c8 then L93() else L94(dx3, fin5);
  L11(dx8, dx9):
    r92 = `-`(dx8, dx9);
    r93 = `/`(r92, 2.0);
    st dif = r93;
    dif = ld dif;
    check L96() else D30();
  L93():
    dr4 = tryDispatchBuiltin.1("[", fin5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L95() else L94(dx3, dr4);
  L94(dx5, fin7):
    __2 = ldf `[` in base;
    r91 = dyn __2(fin7, 1);
    goto L11(dx5, r91);
  D30():
    deopt 106 [dif];
  L95():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx3, dx7);
  L96():
    dif1 = force? dif;
    checkMissing(dif1);
    r94 = `>`(dif1, 0.0);
    c9 = `as.logical`(r94);
    if c9 then L97() else L12();
  L12():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L104() else L105();
  L14():
    par2 = ldf par;
    check L109() else D37();
  L97():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L98() else L99();
  D37():
    deopt 135 [];
  L13(r96):
    st adj = r96;
    goto L14();
  L15(r100):
    st adj = r100;
    goto L14();
  L98():
    dif2 = ld dif;
    check L100() else D31();
  L99():
    r95 = dyn base16(<sym dif>, 0.0, <sym dif>, 0.0);
    goto L13(r95);
  L104():
    dif6 = ld dif;
    check L106() else D34();
  L105():
    r99 = dyn base17(0.0, <lang `-`(dif)>, 0.0, <lang `-`(dif)>);
    goto L15(r99);
  L109():
    p19 = prom<V +>{
      par3 = ldf par;
      r104 = dyn par3("omi");
      adj = ld adj;
      adj1 = force? adj;
      checkMissing(adj1);
      r105 = `+`(r104, adj1);
      return r105;
    };
    r107 = dyn par2[omi](p19);
    check L110() else D38();
  D31():
    deopt 112 [dif2];
  D34():
    deopt 124 [dif6];
  D38():
    deopt 138 [r107];
  L100():
    dif3 = force? dif2;
    checkMissing(dif3);
    dif4 = ld dif;
    check L101() else D32();
  L106():
    dif7 = force? dif6;
    checkMissing(dif7);
    r101 = `-`(<missing>, dif7);
    dif8 = ld dif;
    check L107() else D35();
  L110():
    nw = ld nw;
    check L111() else D39();
  D32():
    deopt 115 [dif4];
  D35():
    deopt 128 [dif8];
  D39():
    deopt 141 [1.0, 1.0, nw];
  L101():
    dif5 = force? dif4;
    checkMissing(dif5);
    c10 = ldf c in base;
    r97 = dyn c10(dif3, 0.0, dif5, 0.0);
    check L102() else D33();
  L107():
    dif9 = force? dif8;
    checkMissing(dif9);
    r102 = `-`(<missing>, dif9);
    c11 = ldf c in base;
    r103 = dyn c11(0.0, r101, 0.0, r102);
    check L108() else D36();
  L111():
    nw1 = force? nw;
    checkMissing(nw1);
    r108 = `/`(1.0, nw1);
    r109 = `+`(1.0, r108);
    st cex = r109;
    frame = ldf frame;
    check L112() else D40();
  D33():
    deopt 119 [r97];
  D36():
    deopt 132 [r103];
  D40():
    deopt 147 [];
  L102():
    goto L13(r97);
  L108():
    goto L15(r103);
  L112():
    r110 = dyn frame();
    check L113() else D41();
  D41():
    deopt 148 [r110];
  L113():
    mtext = ldf mtext;
    check L114() else D42();
  D42():
    deopt 150 [];
  L114():
    p20 = prom<V +>{
      form = ld form;
      form1 = force? form;
      checkMissing(form1);
      return form1;
    };
    r112 = dyn mtext[, side, line, cex, outer](p20, 3.0, 3.0, 1.5, TRUE);
    check L115() else D43();
  D43():
    deopt 160 [r112];
  L115():
    nw2 = ld nw;
    check L116() else D44();
  D44():
    deopt 162 [1.0, nw2];
  L116():
    nw3 = force? nw2;
    checkMissing(nw3);
    r113 = `/`(1.0, nw3);
    st del = r113;
    nw4 = ld nw;
    check L117() else D45();
  D45():
    deopt 167 [1, nw4];
  L117():
    nw5 = force? nw4;
    checkMissing(nw5);
    r114 = `:`(1, nw5);
    s = toForSeq(r114);
    l = length(s);
    i = 0;
    goto L16(i);
  L16(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L118() else L48();
  L48():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    nw6 = ld nw;
    check L119() else D46();
  L118():
    par11 = ldf par;
    check L244() else D117();
  D46():
    deopt 170 [i2, nw6];
  D117():
    deopt 434 [];
  L119():
    nw7 = force? nw6;
    checkMissing(nw7);
    i5 = ld i;
    check L120() else D47();
  L244():
    p57 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r265):
      return r265;
    L1():
      c59 = ldf c in base;
      r266 = dyn c59(0.0, 1.0, 0.0, 1.0);
      goto L0(r266);
    L2():
      r264 = dyn base22(0.0, 1.0, 0.0, 1.0);
      goto L0(r264);
    };
    r268 = dyn par11[fig](p57);
    check L245() else D118();
  D47():
    deopt 171 [i2, nw7, i5];
  D118():
    deopt 437 [r268];
  L120():
    i6 = force? i5;
    checkMissing(i6);
    r115 = `-`(nw7, i6);
    st ci = r115;
    Pnames4 = ld Pnames;
    check L121() else D48();
  L245():
    sym23 = ldf invisible;
    base23 = ldf invisible in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L246() else L247();
  D48():
    deopt 175 [i2, Pnames4];
  L49(r270):
    popenv;
    return r270;
  L121():
    Pnames5 = force? Pnames4;
    checkMissing(Pnames5);
    c13 = `is.object`(Pnames5);
    if c13 then L122() else L123(i2, Pnames5);
  L246():
    x19 = ld x;
    check L248() else D119();
  L247():
    r269 = dyn base23(<sym x>);
    goto L49(r269);
  D119():
    deopt 440 [x19];
  L17(i10, dx11):
    st pi = dx11;
    nw8 = ld nw;
    check L130() else D51();
  L122():
    dr6 = tryDispatchBuiltin.1("[", Pnames5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L124() else L123(i2, dr6);
  L123(i8, Pnames7):
    which13 = ld which;
    check L125() else D49();
  L248():
    x20 = force? x19;
    checkMissing(x20);
    invisible = ldf invisible in base;
    r271 = dyn invisible(x20);
    check L249() else D120();
  D49():
    deopt 177 [i8, Pnames7, which13];
  D51():
    deopt 185 [i10, 1, nw8];
  D120():
    deopt 443 [r271];
  L124():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L17(i2, dx10);
  L125():
    which14 = force? which13;
    checkMissing(which14);
    c14 = `is.object`(which14);
    if c14 then L126() else L127(i8, Pnames7, which14);
  L130():
    nw9 = force? nw8;
    checkMissing(nw9);
    r118 = `:`(1, nw9);
    s1 = toForSeq(r118);
    l1 = length(s1);
    i17 = 0;
    goto L19(i10, i17);
  L249():
    goto L49(r271);
  L18(i14, Pnames11, dx13):
    __4 = ldf `[` in base;
    r117 = dyn __4(Pnames11, dx13);
    goto L17(i14, r117);
  L19(i18, i19):
    i20 = `+`.1(i19, 1);
    c15 = `<`.1(l1, i20);
    if c15 then L131() else L47();
  L126():
    dr8 = tryDispatchBuiltin.1("[", which14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L128() else L127(i8, Pnames7, dr8);
  L127(i12, Pnames9, which16):
    i15 = ld i;
    check L129() else D50();
  D50():
    deopt 179 [i12, Pnames9, which16, i15];
  L47():
    x10 = `[[`(s1, i20, NULL, TRUE);
    st j = x10;
    dev_hold = ldf `dev.hold`;
    check L132() else D52();
  L128():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L18(i8, Pnames7, dx12);
  L129():
    i16 = force? i15;
    __3 = ldf `[` in base;
    r116 = dyn __3(which16, i16);
    goto L18(i12, Pnames9, r116);
  L131():
    goto L16(i18);
  D52():
    deopt 189 [i18, i20];
  L132():
    r119 = dyn dev_hold();
    check L133() else D53();
  D53():
    deopt 190 [i18, i20, r119];
  L133():
    Pnames12 = ld Pnames;
    check L134() else D54();
  D54():
    deopt 191 [i18, i20, Pnames12];
  L134():
    Pnames13 = force? Pnames12;
    checkMissing(Pnames13);
    c16 = `is.object`(Pnames13);
    if c16 then L135() else L136(i18, i20, Pnames13);
  L20(i31, i32, dx15):
    st pj = dx15;
    par4 = ldf par;
    check L143() else D57();
  L135():
    dr10 = tryDispatchBuiltin.1("[", Pnames13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L137() else L136(i18, i20, dr10);
  L136(i27, i28, Pnames15):
    which17 = ld which;
    check L138() else D55();
  D55():
    deopt 193 [i27, i28, Pnames15, which17];
  D57():
    deopt 201 [i31, i32];
  L137():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L20(i18, i20, dx14);
  L138():
    which18 = force? which17;
    checkMissing(which18);
    c17 = `is.object`(which18);
    if c17 then L139() else L140(i27, i28, Pnames15, which18);
  L143():
    p21 = prom<V +>{
      del = ld del;
      del1 = force? del;
      checkMissing(del1);
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(del4, r123):
      r127 = `*`(del4, r123);
      return r127;
    L1():
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      r124 = `-`(j3, 1.0);
      j4 = ld j;
      j5 = force? j4;
      checkMissing(j5);
      ci = ld ci;
      ci1 = force? ci;
      checkMissing(ci1);
      ci2 = ld ci;
      ci3 = force? ci2;
      checkMissing(ci3);
      r125 = `+`(ci3, 1.0);
      c18 = ldf c in base;
      r126 = dyn c18(r124, j5, ci1, r125);
      goto L0(del1, r126);
    L2():
      r122 = dyn base18(<lang `-`(j, 1.0)>, <sym j>, <sym ci>, <lang `+`(ci, 1.0)>);
      goto L0(del1, r122);
    };
    r129 = dyn par4[fig](p21);
    check L144() else D58();
  D58():
    deopt 204 [i31, i32, r129];
  L21(i39, i40, Pnames19, dx17):
    __6 = ldf `[` in base;
    r121 = dyn __6(Pnames19, dx17);
    goto L20(i39, i40, r121);
  L139():
    dr12 = tryDispatchBuiltin.1("[", which18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L141() else L140(i27, i28, Pnames15, dr12);
  L140(i35, i36, Pnames17, which20):
    j = ld j;
    check L142() else D56();
  L144():
    i41 = ld i;
    check L145() else D59();
  D56():
    deopt 195 [i35, i36, Pnames17, which20, j];
  D59():
    deopt 205 [i31, i32, i41];
  L141():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L21(i27, i28, Pnames15, dx16);
  L142():
    j1 = force? j;
    __5 = ldf `[` in base;
    r120 = dyn __5(which20, j1);
    goto L21(i35, i36, Pnames17, r120);
  L145():
    i42 = force? i41;
    checkMissing(i42);
    j6 = ld j;
    check L146() else D60();
  D60():
    deopt 206 [i31, i32, i42, j6];
  L146():
    j7 = force? j6;
    checkMissing(j7);
    r130 = `==`(i42, j7);
    c19 = `as.logical`(r130);
    if c19 then L147() else L22();
  L22():
    colours1 = ld colours;
    check L159() else D71();
  L23(i47, i48):
    i137 = ld i;
    check L220() else D101();
  L147():
    par5 = ldf par;
    check L148() else D61();
  D61():
    deopt 210 [i31, i32];
  D71():
    deopt 247 [i31, i32, colours1];
  D101():
    deopt 384 [i47, i48, i137];
  L148():
    r131 = dyn par5[new](TRUE);
    check L149() else D62();
  L159():
    colours2 = force? colours1;
    checkMissing(colours2);
    st col = colours2;
    i49 = ld i;
    check L160() else D72();
  L220():
    i138 = force? i137;
    checkMissing(i138);
    nw10 = ld nw;
    check L221() else D102();
  D62():
    deopt 213 [i31, i32, r131];
  D72():
    deopt 250 [i31, i32, i49];
  D102():
    deopt 385 [i47, i48, i138, nw10];
  L149():
    plot = ldf plot;
    check L150() else D63();
  L160():
    i50 = force? i49;
    checkMissing(i50);
    j8 = ld j;
    check L161() else D73();
  L221():
    nw11 = force? nw10;
    checkMissing(nw11);
    r251 = `==`(i138, nw11);
    c55 = `as.logical`(r251);
    if c55 then L222() else L39();
  D63():
    deopt 215 [i31, i32];
  D73():
    deopt 251 [i31, i32, i50, j8];
  L39():
    goto L40(i47, i48);
  L40(i143, i144):
    j10 = ld j;
    check L226() else D105();
  L150():
    p22 = prom<V +>{
      rng2 = ld rng;
      rng3 = force? rng2;
      checkMissing(rng3);
      c20 = `is.object`(rng3);
      if c20 then L1() else L2();
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("[", rng3);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      pj = ld pj;
      pj1 = force? pj;
      __7 = ldf `[` in base;
      r132 = dyn __7(rng3, <missing>, pj1);
      goto L0(r132);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    p23 = prom<V +>{
      rng6 = ld rng;
      rng7 = force? rng6;
      checkMissing(rng7);
      c21 = `is.object`(rng7);
      if c21 then L1() else L2();
    L0(dx21):
      return dx21;
    L1():
      dr16 = tryDispatchBuiltin.1("[", rng7);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      pi = ld pi;
      pi1 = force? pi;
      __8 = ldf `[` in base;
      r134 = dyn __8(rng7, <missing>, pi1);
      goto L0(r134);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    };
    r136 = dyn plot[, , axes, xlab, ylab, type](p22, p23, FALSE, "", "", "n");
    check L151() else D64();
  L161():
    j9 = force? j8;
    checkMissing(j9);
    r148 = `<`(i50, j9);
    c23 = `as.logical`(r148);
    if c23 then L162() else L24();
  L222():
    axis = ldf axis;
    check L223() else D103();
  D64():
    deopt 226 [i31, i32, r136];
  D103():
    deopt 389 [i47, i48];
  D105():
    deopt 394 [i143, i144, j10];
  L24():
    goto L26(i31, i32);
  L26(i63, i64):
    par8 = ldf par;
    check L168() else D75();
  L151():
    par6 = ldf par;
    check L152() else D65();
  L162():
    col = ld col;
    check L163() else D74();
  L223():
    r252 = dyn axis(1.0);
    check L224() else D104();
  L226():
    j11 = force? j10;
    checkMissing(j11);
    r254 = `==`(j11, 1.0);
    c56 = `as.logical`(r254);
    if c56 then L227() else L41();
  D65():
    deopt 228 [i31, i32];
  D74():
    deopt 254 [i31, i32, col];
  D75():
    deopt 263 [i63, i64];
  D104():
    deopt 391 [i47, i48, r252];
  L41():
    goto L42(i143, i144);
  L42(i149, i150):
    i151 = ld i;
    check L231() else D108();
  L152():
    p24 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r138):
      return r138;
    L1():
      c22 = ldf c in base;
      r139 = dyn c22(-1.0, 1.0, -1.0, 1.0);
      goto L0(r139);
    L2():
      r137 = dyn base19(<lang `-`(1.0)>, 1.0, <lang `-`(1.0)>, 1.0);
      goto L0(r137);
    };
    r141 = dyn par6[usr](p24);
    check L153() else D66();
  L163():
    col1 = force? col;
    checkMissing(col1);
    c24 = `is.object`(col1);
    if c24 then L164() else L165(i31, i32, col1);
  L168():
    r150 = dyn par8[new](TRUE);
    check L169() else D76();
  L224():
    goto L40(i47, i48);
  L227():
    axis1 = ldf axis;
    check L228() else D106();
  D66():
    deopt 231 [i31, i32, r141];
  D76():
    deopt 266 [i63, i64, r150];
  D106():
    deopt 399 [i143, i144];
  D108():
    deopt 404 [i149, i150, i151];
  L25(i61, i62, dx23):
    st col = dx23;
    goto L26(i61, i62);
  L153():
    st op = r141;
    text = ldf text;
    check L154() else D67();
  L164():
    dr18 = tryDispatchBuiltin.1("[", col1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L166() else L165(i31, i32, dr18);
  L165(i57, i58, col3):
    __9 = ldf `[` in base;
    r149 = dyn __9(col3, <int 2, 1>);
    goto L25(i57, i58, r149);
  L169():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L170() else L171();
  L228():
    r255 = dyn axis1(2.0);
    check L229() else D107();
  L231():
    i152 = force? i151;
    checkMissing(i152);
    r257 = `==`(i152, 1.0);
    c57 = `as.logical`(r257);
    if c57 then L232() else L43();
  D67():
    deopt 234 [i31, i32];
  D107():
    deopt 401 [i143, i144, r255];
  L27(i69, i70, r152):
    r154 = `!`(r152);
    c27 = `as.logical`(r154);
    if c27 then L177() else L29();
  L43():
    goto L44(i149, i150);
  L44(i157, i158):
    j12 = ld j;
    check L236() else D111();
  L154():
    p25 = prom<V +>{
      pi2 = ld pi;
      pi3 = force? pi2;
      checkMissing(pi3);
      return pi3;
    };
    p26 = prom<V +>{
      cex = ld cex;
      cex1 = force? cex;
      checkMissing(cex1);
      return cex1;
    };
    r144 = dyn text[, , , cex, adj](0.0, 0.0, p25, p26, 0.5);
    check L155() else D68();
  L166():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L25(i31, i32, dx22);
  L170():
    parvals2 = ld parvals;
    check L172() else D77();
  L171():
    r151 = dyn base20(<lang `[[`(parvals, pj)>);
    goto L27(i63, i64, r151);
  L229():
    goto L42(i143, i144);
  L232():
    axis2 = ldf axis;
    check L233() else D109();
  D68():
    deopt 242 [i31, i32, r144];
  D77():
    deopt 268 [i63, i64, parvals2];
  D109():
    deopt 409 [i149, i150];
  D111():
    deopt 414 [i157, i158, j12];
  L29():
    plot2 = ldf plot;
    check L193() else D87();
  L32(i99, i100):
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L195() else L196();
  L155():
    par7 = ldf par;
    check L156() else D69();
  L172():
    parvals3 = force? parvals2;
    checkMissing(parvals3);
    c25 = `is.object`(parvals3);
    if c25 then L173() else L174(i63, i64, parvals3);
  L177():
    plot1 = ldf plot;
    check L178() else D79();
  L233():
    r258 = dyn axis2(3.0);
    check L234() else D110();
  L236():
    j13 = force? j12;
    checkMissing(j13);
    npar2 = ld npar;
    check L237() else D112();
  D69():
    deopt 244 [i31, i32];
  D79():
    deopt 276 [i69, i70];
  D87():
    deopt 319 [i69, i70];
  D110():
    deopt 411 [i149, i150, r258];
  D112():
    deopt 415 [i157, i158, j13, npar2];
  L28(i77, i78, dx26):
    c26 = `==`(dx26, NULL);
    goto L27(i77, i78, c26);
  L33(i105, i106, r205):
    r207 = `!`(r205);
    c43 = `as.logical`(r207);
    if c43 then L202() else L35();
  L156():
    p27 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r146 = dyn par7(p27);
    check L157() else D70();
  L173():
    dr20 = tryDispatchBuiltin.1("[[", parvals3);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L175() else L174(i63, i64, dr20);
  L174(i73, i74, parvals5):
    pj2 = ld pj;
    check L176() else D78();
  L178():
    p30 = prom<V +>{
      spline = ldf spline;
      p28 = prom<V +>{
        parvals6 = ld parvals;
        parvals7 = force? parvals6;
        checkMissing(parvals7);
        c28 = `is.object`(parvals7);
        if c28 then L2() else L3(parvals7);
      L0(dx28):
        c29 = `is.object`(dx28);
        if c29 then L5() else L6();
      L2():
        dr22 = tryDispatchBuiltin.1("[[", parvals7);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L4() else L3(dr22);
      L3(parvals9):
        pj4 = ld pj;
        pj5 = force? pj4;
        __11 = ldf `[[` in base;
        r155 = dyn __11(parvals9, pj5);
        goto L0(r155);
      L1(dx32):
        st x = dx32;
        invisible.0();
        return dx32;
      L4():
        dx27 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx27);
      L5():
        dr24 = tryDispatchBuiltin.1("[", dx28);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L7() else L6();
      L6():
        pj6 = ld pj;
        pj7 = force? pj6;
        __12 = ldf `[` in base;
        r156 = dyn __12(dx28, <missing>, pj7);
        goto L1(r156);
      L7():
        dx31 = getTryDispatchBuiltinValue(dr24);
        goto L1(dx31);
      };
      p29 = prom<V +>{
        parvals10 = ld parvals;
        parvals11 = force? parvals10;
        checkMissing(parvals11);
        c30 = `is.object`(parvals11);
        if c30 then L2() else L3(parvals11);
      L0(dx34):
        c31 = `is.object`(dx34);
        if c31 then L5() else L6();
      L2():
        dr26 = tryDispatchBuiltin.1("[[", parvals11);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L4() else L3(dr26);
      L3(parvals13):
        pj8 = ld pj;
        pj9 = force? pj8;
        __13 = ldf `[[` in base;
        r158 = dyn __13(parvals13, pj9);
        goto L0(r158);
      L1(dx38):
        st y = dx38;
        invisible.0();
        return dx38;
      L4():
        dx33 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx33);
      L5():
        dr28 = tryDispatchBuiltin.1("[", dx34);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L7() else L6();
      L6():
        pi4 = ld pi;
        pi5 = force? pi4;
        __14 = ldf `[` in base;
        r159 = dyn __14(dx34, <missing>, pi5);
        goto L1(r159);
      L7():
        dx37 = getTryDispatchBuiltinValue(dr28);
        goto L1(dx37);
      };
      r161 = dyn spline(p28, p29);
      return r161;
    };
    p31 = prom<V +>{
      rng10 = ld rng;
      rng11 = force? rng10;
      checkMissing(rng11);
      c32 = `is.object`(rng11);
      if c32 then L1() else L2();
    L0(dx40):
      return dx40;
    L1():
      dr30 = tryDispatchBuiltin.1("[", rng11);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      pj10 = ld pj;
      pj11 = force? pj10;
      __15 = ldf `[` in base;
      r163 = dyn __15(rng11, <missing>, pj11);
      goto L0(r163);
    L3():
      dx39 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx39);
    };
    p32 = prom<V +>{
      rng14 = ld rng;
      rng15 = force? rng14;
      checkMissing(rng15);
      c33 = `is.object`(rng15);
      if c33 then L1() else L2();
    L0(dx42):
      return dx42;
    L1():
      dr32 = tryDispatchBuiltin.1("[", rng15);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2();
    L2():
      pi6 = ld pi;
      pi7 = force? pi6;
      __16 = ldf `[` in base;
      r165 = dyn __16(rng15, <missing>, pi7);
      goto L0(r165);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx41);
    };
    p33 = prom<V +>{
      col4 = ld col;
      col5 = force? col4;
      checkMissing(col5);
      c34 = `is.object`(col5);
      if c34 then L1() else L2(col5);
    L0(dx44):
      return dx44;
    L1():
      dr34 = tryDispatchBuiltin.1("[", col5);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(col7):
      __17 = ldf `[` in base;
      r167 = dyn __17(col7, 2);
      goto L0(r167);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx43);
    };
    r169 = dyn plot1[, type, xlim, ylim, axes, xlab, ylab, col](p30, "l", p31, p32, FALSE, "", "", p33);
    check L179() else D80();
  L193():
    p42 = prom<V +>{
      rng18 = ld rng;
      rng19 = force? rng18;
      checkMissing(rng19);
      c39 = `is.object`(rng19);
      if c39 then L1() else L2();
    L0(dx58):
      return dx58;
    L1():
      dr44 = tryDispatchBuiltin.1("[", rng19);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2();
    L2():
      pj12 = ld pj;
      pj13 = force? pj12;
      __22 = ldf `[` in base;
      r199 = dyn __22(rng19, <missing>, pj13);
      goto L0(r199);
    L3():
      dx57 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx57);
    };
    p43 = prom<V +>{
      rng22 = ld rng;
      rng23 = force? rng22;
      checkMissing(rng23);
      c40 = `is.object`(rng23);
      if c40 then L1() else L2();
    L0(dx60):
      return dx60;
    L1():
      dr46 = tryDispatchBuiltin.1("[", rng23);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2();
    L2():
      pi8 = ld pi;
      pi9 = force? pi8;
      __23 = ldf `[` in base;
      r201 = dyn __23(rng23, <missing>, pi9);
      goto L0(r201);
    L3():
      dx59 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx59);
    };
    r203 = dyn plot2[, , axes, xlab, ylab, type](p42, p43, FALSE, "", "", "n");
    check L194() else D88();
  L195():
    parvals14 = ld parvals;
    check L197() else D89();
  L196():
    r204 = dyn base21(<lang `[[`(parvals, pi)>);
    goto L33(i99, i100, r204);
  L234():
    goto L44(i149, i150);
  L237():
    npar3 = force? npar2;
    checkMissing(npar3);
    r260 = `==`(j13, npar3);
    c58 = `as.logical`(r260);
    if c58 then L238() else L45();
  D70():
    deopt 246 [i31, i32, r146];
  D78():
    deopt 270 [i73, i74, parvals5, pj2];
  D80():
    deopt 292 [i69, i70, r169];
  D88():
    deopt 330 [i69, i70, r203];
  D89():
    deopt 332 [i99, i100, parvals14];
  L35():
    goto L38(i105, i106);
  L38(i135, i136):
    points = ldf points;
    check L218() else D99();
  L45():
    goto L46(i157, i158);
  L46(i163, i164):
    dev_flush = ldf `dev.flush`;
    check L242() else D115();
  L157():
    goto L23(i31, i32);
  L175():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L28(i63, i64, dx25);
  L176():
    pj3 = force? pj2;
    __10 = ldf `[[` in base;
    r153 = dyn __10(parvals5, pj3);
    goto L28(i73, i74, r153);
  L179():
    par9 = ldf par;
    check L180() else D81();
  L194():
    goto L32(i69, i70);
  L197():
    parvals15 = force? parvals14;
    checkMissing(parvals15);
    c41 = `is.object`(parvals15);
    if c41 then L198() else L199(i99, i100, parvals15);
  L202():
    lines = ldf lines;
    check L203() else D91();
  L238():
    axis3 = ldf axis;
    check L239() else D113();
  D81():
    deopt 294 [i69, i70];
  D91():
    deopt 340 [i105, i106];
  D99():
    deopt 376 [i135, i136];
  D113():
    deopt 419 [i157, i158];
  D115():
    deopt 425 [i163, i164];
  L34(i113, i114, dx62):
    c42 = `==`(dx62, NULL);
    goto L33(i113, i114, c42);
  L180():
    r170 = dyn par9("usr");
    check L181() else D82();
  L198():
    dr48 = tryDispatchBuiltin.1("[[", parvals15);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L200() else L199(i99, i100, dr48);
  L199(i109, i110, parvals17):
    pi10 = ld pi;
    check L201() else D90();
  L203():
    p44 = prom<V +>{
      parvals18 = ld parvals;
      parvals19 = force? parvals18;
      checkMissing(parvals19);
      c44 = `is.object`(parvals19);
      if c44 then L2() else L3(parvals19);
    L0(dx64):
      c45 = `is.object`(dx64);
      if c45 then L5() else L6();
    L2():
      dr50 = tryDispatchBuiltin.1("[[", parvals19);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L4() else L3(dr50);
    L3(parvals21):
      pi12 = ld pi;
      pi13 = force? pi12;
      __25 = ldf `[[` in base;
      r208 = dyn __25(parvals21, pi13);
      goto L0(r208);
    L1(dx68):
      st x = dx68;
      invisible.0();
      return dx68;
    L4():
      dx63 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx63);
    L5():
      dr52 = tryDispatchBuiltin.1("[", dx64);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L7() else L6();
    L6():
      pj14 = ld pj;
      pj15 = force? pj14;
      __26 = ldf `[` in base;
      r209 = dyn __26(dx64, <missing>, pj15);
      goto L1(r209);
    L7():
      dx67 = getTryDispatchBuiltinValue(dr52);
      goto L1(dx67);
    };
    p45 = prom<V +>{
      parvals22 = ld parvals;
      parvals23 = force? parvals22;
      checkMissing(parvals23);
      c46 = `is.object`(parvals23);
      if c46 then L2() else L3(parvals23);
    L0(dx70):
      c47 = `is.object`(dx70);
      if c47 then L5() else L6();
    L2():
      dr54 = tryDispatchBuiltin.1("[[", parvals23);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L4() else L3(dr54);
    L3(parvals25):
      pi14 = ld pi;
      pi15 = force? pi14;
      __27 = ldf `[[` in base;
      r211 = dyn __27(parvals25, pi15);
      goto L0(r211);
    L1(dx74):
      st y = dx74;
      invisible.0();
      return dx74;
    L4():
      dx69 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx69);
    L5():
      dr56 = tryDispatchBuiltin.1("[", dx70);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L7() else L6();
    L6():
      pi16 = ld pi;
      pi17 = force? pi16;
      __28 = ldf `[` in base;
      r212 = dyn __28(dx70, <missing>, pi17);
      goto L1(r212);
    L7():
      dx73 = getTryDispatchBuiltinValue(dr56);
      goto L1(dx73);
    };
    p46 = prom<V +>{
      col8 = ld col;
      col9 = force? col8;
      checkMissing(col9);
      c48 = `is.object`(col9);
      if c48 then L1() else L2(col9);
    L0(dx76):
      return dx76;
    L1():
      dr58 = tryDispatchBuiltin.1("[", col9);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(col11):
      __29 = ldf `[` in base;
      r214 = dyn __29(col11, 1);
      goto L0(r214);
    L3():
      dx75 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx75);
    };
    r216 = dyn lines[, , type, col](p44, p45, "l", p46);
    check L204() else D92();
  L218():
    p55 = prom<V +>{
      coefs = ld coefs;
      coefs1 = force? coefs;
      checkMissing(coefs1);
      c53 = `is.object`(coefs1);
      if c53 then L1() else L2(coefs1);
    L0(dx90):
      return dx90;
    L1():
      dr68 = tryDispatchBuiltin.1("[", coefs1);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(coefs3):
      pj16 = ld pj;
      pj17 = force? pj16;
      __34 = ldf `[` in base;
      r246 = dyn __34(coefs3, pj17);
      goto L0(r246);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx89);
    };
    p56 = prom<V +>{
      coefs4 = ld coefs;
      coefs5 = force? coefs4;
      checkMissing(coefs5);
      c54 = `is.object`(coefs5);
      if c54 then L1() else L2(coefs5);
    L0(dx92):
      return dx92;
    L1():
      dr70 = tryDispatchBuiltin.1("[", coefs5);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(coefs7):
      pi18 = ld pi;
      pi19 = force? pi18;
      __35 = ldf `[` in base;
      r248 = dyn __35(coefs7, pi19);
      goto L0(r248);
    L3():
      dx91 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx91);
    };
    r250 = dyn points[, , pch, cex](p55, p56, 3.0, 3.0);
    check L219() else D100();
  L239():
    r261 = dyn axis3(4.0);
    check L240() else D114();
  L242():
    r263 = dyn dev_flush();
    check L243() else D116();
  D82():
    deopt 296 [i69, i70, r170];
  D90():
    deopt 334 [i109, i110, parvals17, pi10];
  D92():
    deopt 347 [i105, i106, r216];
  D100():
    deopt 383 [i135, i136, r250];
  D114():
    deopt 421 [i157, i158, r261];
  D116():
    deopt 426 [i163, i164, r263];
  L181():
    st pu = r170;
    pu = ld pu;
    check L182() else D83();
  L200():
    dx61 = getTryDispatchBuiltinValue(dr48);
    goto L34(i99, i100, dx61);
  L201():
    pi11 = force? pi10;
    __24 = ldf `[[` in base;
    r206 = dyn __24(parvals17, pi11);
    goto L34(i109, i110, r206);
  L204():
    par10 = ldf par;
    check L205() else D93();
  L219():
    goto L23(i135, i136);
  L240():
    goto L46(i157, i158);
  L243():
    goto L19(i163, i164);
  D83():
    deopt 299 [i69, i70, 0.02, pu];
  D93():
    deopt 349 [i105, i106];
  L182():
    pu1 = force? pu;
    checkMissing(pu1);
    c35 = `is.object`(pu1);
    if c35 then L183() else L184(i69, i70, 0.02, pu1);
  L205():
    r217 = dyn par10("usr");
    check L206() else D94();
  D94():
    deopt 351 [i105, i106, r217];
  L30(i89, i90, r174, dx46):
    pu4 = ld pu;
    check L186() else D84();
  L183():
    dr36 = tryDispatchBuiltin.1("[", pu1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L185() else L184(i69, i70, 0.02, dr36);
  L184(i85, i86, r172, pu3):
    __18 = ldf `[` in base;
    r175 = dyn __18(pu3, 4);
    goto L30(i85, i86, r172, r175);
  L206():
    st pu = r217;
    pu16 = ld pu;
    check L207() else D95();
  D84():
    deopt 303 [i89, i90, r174, dx46, pu4];
  D95():
    deopt 354 [i105, i106, 0.02, pu16];
  L185():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L30(i69, i70, 0.02, dx45);
  L186():
    pu5 = force? pu4;
    checkMissing(pu5);
    c36 = `is.object`(pu5);
    if c36 then L187() else L188(i89, i90, r174, dx46, pu5);
  L207():
    pu17 = force? pu16;
    checkMissing(pu17);
    c49 = `is.object`(pu17);
    if c49 then L208() else L209(i105, i106, 0.02, pu17);
  L31(i97, i98, r179, dx51, dx52):
    r181 = `-`(dx51, dx52);
    r182 = `*`(r179, r181);
    st smidge = r182;
    segments = ldf segments;
    check L190() else D85();
  L36(i125, i126, r221, dx78):
    pu20 = ld pu;
    check L211() else D96();
  L187():
    dr38 = tryDispatchBuiltin.1("[", pu5);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L189() else L188(i89, i90, r174, dx46, dr38);
  L188(i93, i94, r177, dx48, pu7):
    __19 = ldf `[` in base;
    r180 = dyn __19(pu7, 3);
    goto L31(i93, i94, r177, dx48, r180);
  L208():
    dr60 = tryDispatchBuiltin.1("[", pu17);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L210() else L209(i105, i106, 0.02, dr60);
  L209(i121, i122, r219, pu19):
    __30 = ldf `[` in base;
    r222 = dyn __30(pu19, 2);
    goto L36(i121, i122, r219, r222);
  D85():
    deopt 312 [i97, i98];
  D96():
    deopt 358 [i125, i126, r221, dx78, pu20];
  L189():
    dx50 = getTryDispatchBuiltinValue(dr38);
    goto L31(i89, i90, r174, dx46, dx50);
  L190():
    p34 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p37 = prom<V +>{
      pmax = ldf pmax;
      p35 = prom<V +>{
        pu8 = ld pu;
        pu9 = force? pu8;
        checkMissing(pu9);
        c37 = `is.object`(pu9);
        if c37 then L1() else L2(pu9);
      L0(dx54):
        return dx54;
      L1():
        dr40 = tryDispatchBuiltin.1("[", pu9);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L3() else L2(dr40);
      L2(pu11):
        __20 = ldf `[` in base;
        r184 = dyn __20(pu11, 3);
        goto L0(r184);
      L3():
        dx53 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx53);
      };
      p36 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        smidge = ld smidge;
        smidge1 = force? smidge;
        checkMissing(smidge1);
        r186 = `-`(y1, smidge1);
        return r186;
      };
      r188 = dyn pmax(p35, p36);
      return r188;
    };
    p38 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p41 = prom<V +>{
      pmin = ldf pmin;
      p39 = prom<V +>{
        pu12 = ld pu;
        pu13 = force? pu12;
        checkMissing(pu13);
        c38 = `is.object`(pu13);
        if c38 then L1() else L2(pu13);
      L0(dx56):
        return dx56;
      L1():
        dr42 = tryDispatchBuiltin.1("[", pu13);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L3() else L2(dr42);
      L2(pu15):
        __21 = ldf `[` in base;
        r191 = dyn __21(pu15, 4);
        goto L0(r191);
      L3():
        dx55 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx55);
      };
      p40 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        smidge2 = ld smidge;
        smidge3 = force? smidge2;
        checkMissing(smidge3);
        r193 = `+`(y3, smidge3);
        return r193;
      };
      r195 = dyn pmin(p39, p40);
      return r195;
    };
    r197 = dyn segments(p34, p37, p38, p41);
    check L191() else D86();
  L210():
    dx77 = getTryDispatchBuiltinValue(dr60);
    goto L36(i105, i106, 0.02, dx77);
  L211():
    pu21 = force? pu20;
    checkMissing(pu21);
    c50 = `is.object`(pu21);
    if c50 then L212() else L213(i125, i126, r221, dx78, pu21);
  D86():
    deopt 317 [i97, i98, r197];
  L37(i133, i134, r226, dx83, dx84):
    r228 = `-`(dx83, dx84);
    r229 = `*`(r226, r228);
    st smidge = r229;
    segments1 = ldf segments;
    check L215() else D97();
  L191():
    goto L32(i97, i98);
  L212():
    dr62 = tryDispatchBuiltin.1("[", pu21);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L214() else L213(i125, i126, r221, dx78, dr62);
  L213(i129, i130, r224, dx80, pu23):
    __31 = ldf `[` in base;
    r227 = dyn __31(pu23, 1);
    goto L37(i129, i130, r224, dx80, r227);
  D97():
    deopt 367 [i133, i134];
  L214():
    dx82 = getTryDispatchBuiltinValue(dr62);
    goto L37(i125, i126, r221, dx78, dx82);
  L215():
    p49 = prom<V +>{
      pmax1 = ldf pmax;
      p47 = prom<V +>{
        pu24 = ld pu;
        pu25 = force? pu24;
        checkMissing(pu25);
        c51 = `is.object`(pu25);
        if c51 then L1() else L2(pu25);
      L0(dx86):
        return dx86;
      L1():
        dr64 = tryDispatchBuiltin.1("[", pu25);
        dc32 = getTryDispatchBuiltinDispatched(dr64);
        if dc32 then L3() else L2(dr64);
      L2(pu27):
        __32 = ldf `[` in base;
        r230 = dyn __32(pu27, 1);
        goto L0(r230);
      L3():
        dx85 = getTryDispatchBuiltinValue(dr64);
        goto L0(dx85);
      };
      p48 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        smidge4 = ld smidge;
        smidge5 = force? smidge4;
        checkMissing(smidge5);
        r232 = `-`(x16, smidge5);
        return r232;
      };
      r234 = dyn pmax1(p47, p48);
      return r234;
    };
    p50 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p53 = prom<V +>{
      pmin1 = ldf pmin;
      p51 = prom<V +>{
        pu28 = ld pu;
        pu29 = force? pu28;
        checkMissing(pu29);
        c52 = `is.object`(pu29);
        if c52 then L1() else L2(pu29);
      L0(dx88):
        return dx88;
      L1():
        dr66 = tryDispatchBuiltin.1("[", pu29);
        dc33 = getTryDispatchBuiltinDispatched(dr66);
        if dc33 then L3() else L2(dr66);
      L2(pu31):
        __33 = ldf `[` in base;
        r237 = dyn __33(pu31, 2);
        goto L0(r237);
      L3():
        dx87 = getTryDispatchBuiltinValue(dr66);
        goto L0(dx87);
      };
      p52 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        smidge6 = ld smidge;
        smidge7 = force? smidge6;
        checkMissing(smidge7);
        r239 = `+`(x18, smidge7);
        return r239;
      };
      r241 = dyn pmin1(p51, p52);
      return r241;
    };
    p54 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r244 = dyn segments1(p49, p50, p53, p54);
    check L216() else D98();
  D98():
    deopt 372 [i133, i134, r244];
  L216():
    goto L38(i133, i134);
  }
}