fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3973188129;
    st `.cbind.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3973188129(sers, nmsers, dframe, union, `ts.eps`) {
  (reg sers:*, reg nmsers:*, reg dframe:*, reg union:*, reg ts_eps:*) -+> V { var sers:*, var nmsers:*, var dframe:*, reg dframe_isMissing:L, reg dframe_orDefault:*, var union:*, reg union_isMissing:L, reg union_orDefault:*, var `ts.eps`:*, reg ts_eps_isMissing:L, reg ts_eps_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg vapply:cls, reg sers1:*, reg sers2:V, reg p1:p(V +), reg is_null:*, reg is_null1:V, reg p2:p(V +), reg r4:V, reg sers3:*, reg sers4:V, reg c:L, reg sers6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nulls:*, reg nulls1:V, reg r5:V, reg __:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg sers7:*, reg sers8:V, reg length:cls, reg r9:V, reg nser:*, reg nser1:V, reg r10:V, reg c1:L, reg nser2:*, reg nser3:V, reg r13:V, reg c2:L, reg dframe1:*, reg dframe2:V, reg c3:L, reg as_data_frame:cls, reg sers9:*, reg sers10:V, reg c4:L, reg sers12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg r17:V, reg sers13:*, reg sers14:V, reg c5:L, reg sers16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg __2:cls, reg r18:V, reg vapply1:cls, reg sers17:*, reg sers18:V, reg p4:p(V +), reg r22:cls, reg p5:p(V +), reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg tsser:*, reg tsser1:V, reg any:cls, reg r27:V, reg r28:V, reg c6:L, reg stop:cls, reg r29:V, reg lapply:cls, reg sers19:*, reg sers20:V, reg p6:p(V +), reg as_ts:*, reg as_ts1:V, reg p7:p(V +), reg r33:V, reg sapply:cls, reg sers21:*, reg sers22:V, reg c7:L, reg sers24:V, reg dr6:V, reg dc3:L, reg dx5:V, reg dx6:V, reg tsser2:*, reg tsser3:V, reg __3:cls, reg r34:V, reg p8:p(V +), reg tsp:*, reg tsp1:V, reg p9:p(V +), reg r37:V, reg mean:cls, reg tsps:*, reg tsps1:V, reg c8:L, reg dr8:V, reg dc4:L, reg dx7:V, reg dx8:V, reg __4:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg tsps4:*, reg tsps5:V, reg c9:L, reg dr10:V, reg dc5:L, reg dx9:V, reg dx10:V, reg __5:cls, reg r45:V, reg freq:*, reg freq1:V, reg r46:V, reg abs:cls, reg r47:V, reg max:cls, reg r48:V, reg ts_eps1:*, reg ts_eps2:V, reg r49:V, reg c10:L, reg stop1:cls, reg r50:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r52:V, reg r53:V, reg apply:cls, reg tsps8:*, reg tsps9:V, reg p11:p(V +), reg r55:cls, reg p12:p(V +), reg r57:V, reg r58:V, reg r59:V, reg r60:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r61:V, reg r62:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg eph:*, reg eph1:V, reg mean1:cls, reg eph2:*, reg eph3:V, reg p13:p(V +), reg r66:V, reg r67:V, reg Mod:cls, reg r68:V, reg max1:cls, reg r69:V, reg ts_eps3:*, reg ts_eps4:V, reg r70:V, reg c11:L, reg stop2:cls, reg r71:V, reg union1:*, reg union2:V, reg c12:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r73:V, reg r74:V, reg tsps10:*, reg tsps11:V, reg c13:L, reg dr12:V, reg dc6:L, reg dx11:V, reg dx12:V, reg __6:cls, reg r75:V, reg min:cls, reg r76:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg r78:V, reg tsps14:*, reg tsps15:V, reg c14:L, reg dr14:V, reg dc7:L, reg dx13:V, reg dx14:V, reg __7:cls, reg r79:V, reg max2:cls, reg r80:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r82:V, reg r83:V, reg tsps18:*, reg tsps19:V, reg c15:L, reg dr16:V, reg dc8:L, reg dx15:V, reg dx16:V, reg __8:cls, reg r84:V, reg max3:cls, reg r85:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg r87:V, reg tsps22:*, reg tsps23:V, reg c16:L, reg dr18:V, reg dc9:L, reg dx17:V, reg dx18:V, reg __9:cls, reg r88:V, reg min1:cls, reg r89:V, reg st:*, reg st1:V, reg en:*, reg en1:V, reg r90:V, reg c17:L, reg warning:cls, reg r91:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r93:V, reg r94:V, reg st2:*, reg st3:V, reg en2:*, reg en3:V, reg freq2:*, reg freq3:V, reg c18:cls, reg r95:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r96:V, reg r97:V, reg round:cls, reg r98:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r99:V, reg r100:V, reg tsser4:*, reg tsser5:V, reg r101:V, reg any1:cls, reg r102:V, reg c19:L, reg vapply2:cls, reg sers25:*, reg sers26:V, reg c20:L, reg sers28:V, reg dr20:V, reg dc10:L, reg dx19:V, reg dx20:V, reg tsser6:*, reg tsser7:V, reg r103:V, reg __10:cls, reg r104:V, reg p14:p(V +), reg NROW:*, reg NROW1:V, reg p15:p(V +), reg r107:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r108:V, reg r109:V, reg ln:*, reg ln1:V, reg r110:V, reg ln2:*, reg ln3:V, reg n:*, reg n1:V, reg r111:V, reg r112:V, reg any2:cls, reg r113:V, reg c21:L, reg stop3:cls, reg r114:V, reg nser4:*, reg nser5:V, reg r116:V, reg c22:L, reg r118:V, reg dr22:V, reg dc11:L, reg dx21:V, reg dx22:V, reg tsser8:*, reg tsser9:V, reg r119:V, reg __11:cls, reg r120:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c23:L, reg x:V, reg ts:cls, reg sers29:*, reg sers30:V, reg c24:L, reg sers32:V, reg dr24:V, reg dc12:L, reg dx23:V, reg dx24:V, reg i5:*, reg i6:V, reg __12:cls, reg r121:V, reg p16:p(V +), reg st4:*, reg st5:V, reg p17:p(V +), reg en4:*, reg en5:V, reg p18:p(V +), reg freq4:*, reg freq5:V, reg p19:p(V +), reg r126:V, reg l1:*, reg c25:L, reg i8:I, reg r128:V, reg l3:*, reg dr26:V, reg dc13:L, reg dx25:V, reg i10:I, reg dx26:V, reg i11:*, reg i12:V, reg ____:cls, reg r131:V, reg sapply1:cls, reg sers33:*, reg sers34:V, reg p20:p(V +), reg tsp2:*, reg tsp3:V, reg p21:p(V +), reg r134:V, reg vapply3:cls, reg sers35:*, reg sers36:V, reg p22:p(V +), reg NCOL:*, reg NCOL1:V, reg p23:p(V +), reg r138:V, reg dframe3:*, reg dframe4:V, reg c26:L, reg setNames:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r139:V, reg r140:V, reg nser6:*, reg nser7:V, reg vector:cls, reg r141:V, reg p24:p(V +), reg nmsers1:*, reg nmsers2:V, reg p25:p(V +), reg r144:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r146:V, reg r147:V, reg nsers:*, reg nsers1:V, reg sum:cls, reg r148:V, reg matrix:cls, reg n2:*, reg n3:V, reg p26:p(V +), reg ns:*, reg ns1:V, reg p27:p(V +), reg r151:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r152:V, reg r153:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r154:V, reg r155:V, reg nsers2:*, reg nsers3:V, reg cumsum:cls, reg r156:V, reg c27:cls, reg r157:V, reg character:cls, reg ns2:*, reg ns3:V, reg p28:p(V +), reg r159:V, reg nser8:*, reg nser9:V, reg r160:V, reg s1:V, reg l4:I, reg i13:I, reg i14:I, reg i15:I, reg c28:L, reg x1:V, reg nsers4:*, reg nsers5:V, reg c29:L, reg i19:I, reg nsers7:V, reg dr28:V, reg dc14:L, reg dx27:V, reg i21:I, reg dx28:V, reg i22:*, reg i23:V, reg __13:cls, reg r161:V, reg r162:V, reg c30:L, reg ____1:cls, reg colnames:cls, reg sers37:*, reg sers38:V, reg c31:L, reg sers40:V, reg dr30:V, reg dc15:L, reg dx29:V, reg dx30:V, reg i26:*, reg i27:V, reg __14:cls, reg r163:V, reg p29:p(V +), reg r165:V, reg p30:p(V +), reg nsers8:*, reg nsers9:V, reg c32:L, reg r168:I, reg nsers11:V, reg dr32:V, reg dc16:L, reg dx31:V, reg r170:I, reg dx32:V, reg i28:*, reg i29:V, reg __15:cls, reg r171:V, reg r172:V, reg p31:p(V +), reg r174:V, reg paste:cls, reg nmsers3:*, reg nmsers4:V, reg c33:L, reg nmsers6:V, reg dr34:V, reg dc17:L, reg dx33:V, reg dx34:V, reg i30:*, reg i31:V, reg __16:cls, reg r175:V, reg p32:p(V +), reg cn:*, reg cn1:V, reg p33:p(V +), reg r178:V, reg l5:*, reg c34:L, reg i33:I, reg r180:V, reg l7:*, reg dr36:V, reg dc18:L, reg dx35:V, reg i35:I, reg r182:V, reg dx36:V, reg cs:*, reg cs1:V, reg c35:L, reg i37:I, reg r186:V, reg l9:*, reg r187:V, reg r188:R, reg cs3:V, reg dr38:V, reg dc19:L, reg dx37:V, reg i39:I, reg r192:V, reg l11:*, reg r193:V, reg r194:R, reg dx38:V, reg i40:*, reg i41:V, reg __17:cls, reg r195:V, reg r196:V, reg cs4:*, reg cs5:V, reg c36:L, reg i43:I, reg r200:V, reg l13:*, reg r201:V, reg r202:V, reg cs7:V, reg dr40:V, reg dc20:L, reg dx39:V, reg i45:I, reg r206:V, reg l15:*, reg r207:V, reg r208:V, reg dx40:V, reg i46:*, reg i47:V, reg r209:V, reg __18:cls, reg r210:V, reg r211:V, reg ___:cls, reg r212:V, reg i48:I, reg nmsers7:*, reg nmsers8:V, reg c37:L, reg i50:I, reg nmsers10:V, reg dr42:V, reg dc21:L, reg dx41:V, reg i52:I, reg dx42:V, reg i53:*, reg i54:V, reg __19:cls, reg r214:V, reg l16:*, reg c38:L, reg i56:I, reg dx44:V, reg l18:*, reg dr44:V, reg dc22:L, reg dx46:V, reg i58:I, reg dx47:V, reg dx48:V, reg cs8:*, reg cs9:V, reg c39:L, reg i60:I, reg dx51:V, reg l20:*, reg dx52:V, reg cs11:V, reg dr46:V, reg dc23:L, reg dx55:V, reg i62:I, reg dx56:V, reg l22:*, reg dx57:V, reg dx58:V, reg i63:*, reg i64:V, reg r215:V, reg __20:cls, reg r216:V, reg ___1:cls, reg r217:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r218:V, reg r219:V, reg nm:*, reg nm1:V, reg list:cls, reg r220:V, reg l23:*, reg dimnames__:cls, reg r221:V, reg nser10:*, reg nser11:V, reg r222:V, reg s2:V, reg l24:I, reg i65:I, reg i66:I, reg i67:I, reg c40:L, reg x2:V, reg union3:*, reg union4:V, reg c41:L, reg nsers12:*, reg nsers13:V, reg c42:L, reg i73:I, reg nsers15:V, reg dr48:V, reg dc24:L, reg dx59:V, reg i75:I, reg dx60:V, reg i76:*, reg i77:V, reg __21:cls, reg r223:V, reg r224:V, reg c43:L, reg rbind:cls, reg matrix1:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r225:V, reg r226:V, reg round1:cls, reg r227:V, reg p34:p(V +), reg nsers16:*, reg nsers17:V, reg c44:L, reg nsers19:V, reg dr50:V, reg dc25:L, reg dx61:V, reg dx62:V, reg i80:*, reg i81:V, reg __22:cls, reg r229:V, reg p35:p(V +), reg r231:V, reg p36:p(V +), reg sers41:*, reg sers42:V, reg c45:L, reg sers44:V, reg dr52:V, reg dc26:L, reg dx63:V, reg dx64:V, reg i82:*, reg i83:V, reg __23:cls, reg r233:V, reg p37:p(V +), reg matrix2:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r235:V, reg r236:V, reg round2:cls, reg r237:V, reg p38:p(V +), reg nsers20:*, reg nsers21:V, reg c46:L, reg nsers23:V, reg dr54:V, reg dc27:L, reg dx65:V, reg dx66:V, reg i84:*, reg i85:V, reg __24:cls, reg r239:V, reg p39:p(V +), reg r241:V, reg p40:p(V +), reg r243:V, reg i86:I, reg r244:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r245:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r246:V, reg i91:I, reg r247:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r248:V, reg i94:I, reg r249:V, reg round3:cls, reg r250:V, reg rep_int:cls, reg r251:V, reg sers45:*, reg sers46:V, reg c47:L, reg i96:I, reg sers48:V, reg dr56:V, reg dc28:L, reg dx67:V, reg i98:I, reg dx68:V, reg i99:*, reg i100:V, reg __25:cls, reg r252:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r253:V, reg i103:I, reg r254:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r255:V, reg i106:I, reg r256:V, reg round4:cls, reg r257:V, reg rep_int1:cls, reg r258:V, reg c48:cls, reg r259:V, reg i107:I, reg window:cls, reg sers49:*, reg sers50:V, reg c49:L, reg sers52:V, reg dr58:V, reg dc29:L, reg dx69:V, reg dx70:V, reg i108:*, reg i109:V, reg __26:cls, reg r261:V, reg p41:p(V +), reg st6:*, reg st7:V, reg p42:p(V +), reg en6:*, reg en7:V, reg p43:p(V +), reg r265:V, reg dframe5:*, reg dframe6:V, reg c50:L, reg structure:cls, reg xx:*, reg xx1:V, reg p44:p(V +), reg p45:*, reg p46:V, reg p47:p(V +), reg r268:V, reg l25:*, reg c51:L, reg i113:I, reg r270:V, reg l27:*, reg dr60:V, reg dc30:L, reg dx71:V, reg i115:I, reg r272:V, reg dx72:V, reg i116:*, reg i117:V, reg ____2:cls, reg r273:V, reg i118:I, reg xx2:*, reg xx3:V, reg l28:*, reg c52:L, reg i120:I, reg xx5:V, reg l30:*, reg dr62:V, reg dc31:L, reg dx73:V, reg i122:I, reg xx7:V, reg dx74:V, reg cs12:*, reg cs13:V, reg c53:L, reg i124:I, reg xx10:V, reg l32:*, reg xx11:V, reg r276:R, reg cs15:V, reg dr64:V, reg dc32:L, reg dx75:V, reg i126:I, reg xx14:V, reg l34:*, reg xx15:V, reg r278:R, reg dx76:V, reg i127:*, reg i128:V, reg __27:cls, reg r279:V, reg r280:V, reg cs16:*, reg cs17:V, reg c54:L, reg i130:I, reg xx18:V, reg l36:*, reg xx19:V, reg r282:V, reg cs19:V, reg dr66:V, reg dc33:L, reg dx77:V, reg i132:I, reg xx22:V, reg xx23:V, reg r284:V, reg dx78:V, reg i133:*, reg i134:V, reg r285:V, reg __28:cls, reg r286:V, reg r287:V, reg ___2:cls, reg r288:V, reg dframe7:*, reg dframe8:V, reg c55:L, reg as_data_frame1:cls, reg x3:*, reg x4:V, reg p48:p(V +), reg r290:V, reg ts1:cls, reg x5:*, reg x6:V, reg p49:p(V +), reg st8:*, reg st9:V, reg p50:p(V +), reg freq6:*, reg freq7:V, reg p51:p(V +), reg r294:V |
    mkenv;
    st sers = sers;
    st nmsers = nmsers;
    dframe_isMissing = missing.0(dframe);
    if dframe_isMissing then L0(FALSE) else L0(dframe);
  L0(dframe_orDefault):
    st dframe = dframe_orDefault;
    union_isMissing = missing.0(union);
    if union_isMissing then L1(TRUE) else L1(union);
  L1(union_orDefault):
    st union = union_orDefault;
    ts_eps_isMissing = missing.0(ts_eps);
    if ts_eps_isMissing then L2() else L3(ts_eps);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("ts.eps");
      return r;
    };
    goto L3(p);
  L3(ts_eps_orDefault):
    st `ts.eps` = ts_eps_orDefault;
    vapply = ldf vapply;
    check L84() else D0();
  D0():
    deopt 1 [];
  L84():
    p1 = prom<V +>{
      sers1 = ld sers;
      sers2 = force? sers1;
      checkMissing(sers2);
      return sers2;
    };
    p2 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r4 = dyn vapply(p1, p2, NA_LGL);
    check L85() else D1();
  D1():
    deopt 5 [r4];
  L85():
    st nulls = r4;
    sers3 = ld sers;
    check L86() else D2();
  D2():
    deopt 7 [sers3];
  L86():
    sers4 = force? sers3;
    checkMissing(sers4);
    c = `is.object`(sers4);
    if c then L87() else L88(sers4);
  L4(dx1):
    st sers = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L91() else L92();
  L87():
    dr = tryDispatchBuiltin.1("[", sers4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(dr);
  L88(sers6):
    nulls = ld nulls;
    check L90() else D3();
  D3():
    deopt 9 [sers6, nulls];
  L5(r8):
    st nser = r8;
    nser = ld nser;
    check L95() else D6();
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L90():
    nulls1 = force? nulls;
    checkMissing(nulls1);
    r5 = `!`(nulls1);
    __ = ldf `[` in base;
    r6 = dyn __(sers6, r5);
    goto L4(r6);
  L91():
    sers7 = ld sers;
    check L93() else D4();
  L92():
    r7 = dyn base(<sym sers>);
    goto L5(r7);
  D4():
    deopt 16 [sers7];
  D6():
    deopt 21 [nser];
  L93():
    sers8 = force? sers7;
    checkMissing(sers8);
    length = ldf length in base;
    r9 = dyn length(sers8);
    check L94() else D5();
  L95():
    nser1 = force? nser;
    checkMissing(nser1);
    r10 = `==`(nser1, 0);
    c1 = `as.logical`(r10);
    if c1 then L96() else L6();
  D5():
    deopt 19 [r9];
  L6():
    nser2 = ld nser;
    check L99() else D7();
  L94():
    goto L5(r9);
  L96():
    popenv;
    return NULL;
  D7():
    deopt 30 [nser2];
  L99():
    nser3 = force? nser2;
    checkMissing(nser3);
    r13 = `==`(nser3, 1);
    c2 = `as.logical`(r13);
    if c2 then L100() else L8();
  L8():
    vapply1 = ldf vapply;
    check L112() else D12();
  L100():
    dframe1 = ld dframe;
    check L101() else D8();
  D8():
    deopt 34 [dframe1];
  D12():
    deopt 49 [];
  L101():
    dframe2 = force? dframe1;
    checkMissing(dframe2);
    c3 = `as.logical`(dframe2);
    if c3 then L102() else L9();
  L112():
    p4 = prom<V +>{
      sers17 = ld sers;
      sers18 = force? sers17;
      checkMissing(sers18);
      return sers18;
    };
    p5 = prom<V +>{
      r22 = clos inner2501545716;
      return r22;
    };
    r24 = dyn vapply1(p4, p5, NA_LGL);
    check L113() else D13();
  D13():
    deopt 53 [r24];
  L9():
    sers13 = ld sers;
    check L106() else D11();
  L10(r17):
    popenv;
    return r17;
  L102():
    as_data_frame = ldf `as.data.frame`;
    check L103() else D9();
  L113():
    st tsser = r24;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L114() else L115();
  D9():
    deopt 37 [];
  D11():
    deopt 40 [sers13];
  L12(r26):
    r28 = `!`(r26);
    c6 = `as.logical`(r28);
    if c6 then L118() else L13();
  L103():
    p3 = prom<V +>{
      sers9 = ld sers;
      sers10 = force? sers9;
      checkMissing(sers10);
      c4 = `is.object`(sers10);
      if c4 then L1() else L2(sers10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", sers10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(sers12):
      __1 = ldf `[[` in base;
      r14 = dyn __1(sers12, 1);
      goto L0(r14);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r16 = dyn as_data_frame(p3);
    check L104() else D10();
  L106():
    sers14 = force? sers13;
    checkMissing(sers14);
    c5 = `is.object`(sers14);
    if c5 then L107() else L108(sers14);
  L114():
    tsser = ld tsser;
    check L116() else D14();
  L115():
    r25 = dyn base1(<sym tsser>);
    goto L12(r25);
  D10():
    deopt 39 [r16];
  D14():
    deopt 57 [tsser];
  L13():
    goto L14();
  L14():
    lapply = ldf lapply;
    check L122() else D18();
  L104():
    goto L10(r16);
  L107():
    dr4 = tryDispatchBuiltin.1("[[", sers14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L109() else L108(dr4);
  L108(sers16):
    __2 = ldf `[[` in base;
    r18 = dyn __2(sers16, 1);
    goto L10(r18);
  L116():
    tsser1 = force? tsser;
    checkMissing(tsser1);
    any = ldf any in base;
    r27 = dyn any(tsser1);
    check L117() else D15();
  L118():
    stop = ldf stop;
    check L119() else D16();
  D15():
    deopt 60 [r27];
  D16():
    deopt 63 [];
  D18():
    deopt 69 [];
  L109():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L117():
    goto L12(r27);
  L119():
    r29 = dyn stop("no time series supplied");
    check L120() else D17();
  L122():
    p6 = prom<V +>{
      sers19 = ld sers;
      sers20 = force? sers19;
      checkMissing(sers20);
      return sers20;
    };
    p7 = prom<V +>{
      as_ts = ld `as.ts`;
      as_ts1 = force? as_ts;
      checkMissing(as_ts1);
      return as_ts1;
    };
    r33 = dyn lapply(p6, p7);
    check L123() else D19();
  D17():
    deopt 65 [r29];
  D19():
    deopt 72 [r33];
  L120():
    goto L14();
  L123():
    st sers = r33;
    sapply = ldf sapply;
    check L124() else D20();
  D20():
    deopt 75 [];
  L124():
    p8 = prom<V +>{
      sers21 = ld sers;
      sers22 = force? sers21;
      checkMissing(sers22);
      c7 = `is.object`(sers22);
      if c7 then L1() else L2(sers22);
    L0(dx6):
      return dx6;
    L1():
      dr6 = tryDispatchBuiltin.1("[", sers22);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(sers24):
      tsser2 = ld tsser;
      tsser3 = force? tsser2;
      __3 = ldf `[` in base;
      r34 = dyn __3(sers24, tsser3);
      goto L0(r34);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx5);
    };
    p9 = prom<V +>{
      tsp = ld tsp;
      tsp1 = force? tsp;
      checkMissing(tsp1);
      return tsp1;
    };
    r37 = dyn sapply(p8, p9);
    check L125() else D21();
  D21():
    deopt 78 [r37];
  L125():
    st tsps = r37;
    mean = ldf mean;
    check L126() else D22();
  D22():
    deopt 81 [];
  L126():
    p10 = prom<V +>{
      tsps = ld tsps;
      tsps1 = force? tsps;
      checkMissing(tsps1);
      c8 = `is.object`(tsps1);
      if c8 then L1() else L2();
    L0(dx8):
      return dx8;
    L1():
      dr8 = tryDispatchBuiltin.1("[", tsps1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r38 = dyn __4(tsps1, 3.0, <missing>);
      goto L0(r38);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx7);
    };
    r40 = dyn mean(p10);
    check L127() else D23();
  D23():
    deopt 83 [r40];
  L127():
    st freq = r40;
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L128() else L129();
  L15(r42):
    ts_eps1 = ld `ts.eps`;
    check L139() else D28();
  L128():
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L130() else L131();
  L129():
    r41 = dyn base2(<lang abs(`-`(`[`(tsps, 3.0, ), freq))>);
    goto L15(r41);
  D28():
    deopt 100 [r42, ts_eps1];
  L16(r44):
    max = ldf max in base;
    r48 = dyn max(r44);
    check L138() else D27();
  L130():
    tsps4 = ld tsps;
    check L132() else D24();
  L131():
    r43 = dyn base3(<lang `-`(`[`(tsps, 3.0, ), freq)>);
    goto L16(r43);
  L139():
    ts_eps2 = force? ts_eps1;
    checkMissing(ts_eps2);
    r49 = `>`(r42, ts_eps2);
    c10 = `as.logical`(r49);
    if c10 then L140() else L18();
  D24():
    deopt 89 [tsps4];
  D27():
    deopt 100 [r48];
  L18():
    goto L19();
  L19():
    sym4 = ldf exp;
    base4 = ldf exp in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L144() else L145();
  L132():
    tsps5 = force? tsps4;
    checkMissing(tsps5);
    c9 = `is.object`(tsps5);
    if c9 then L133() else L134();
  L138():
    goto L15(r48);
  L140():
    stop1 = ldf stop;
    check L141() else D29();
  D29():
    deopt 104 [];
  L17(dx10):
    freq = ld freq;
    check L136() else D25();
  L20(r53):
    st eph = r53;
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L148() else L149();
  L133():
    dr10 = tryDispatchBuiltin.1("[", tsps5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L135() else L134();
  L134():
    __5 = ldf `[` in base;
    r45 = dyn __5(tsps5, 3.0, <missing>);
    goto L17(r45);
  L141():
    r50 = dyn stop1("not all series have the same frequency");
    check L142() else D30();
  L144():
    apply = ldf apply;
    check L146() else D31();
  L145():
    r52 = dyn base4(<lang `*`(`(`(`+`(0.0, 2.0i)), `(`(`*`(pi, apply(tsps, 2, function((tsp=), `%%`(`(`(`*`(`[`(tsp, 1), `[`(tsp, 3))), 1.0), NULL)))))>);
    goto L20(r52);
  D25():
    deopt 94 [dx10, freq];
  D30():
    deopt 106 [r50];
  D31():
    deopt 113 [2.0i, 3.141592653589793];
  L21(r62):
    ts_eps3 = ld `ts.eps`;
    check L157() else D38();
  L135():
    dx9 = getTryDispatchBuiltinValue(dr10);
    goto L17(dx9);
  L136():
    freq1 = force? freq;
    checkMissing(freq1);
    r46 = `-`(dx10, freq1);
    abs = ldf abs in base;
    r47 = dyn abs(r46);
    check L137() else D26();
  L142():
    goto L19();
  L146():
    p11 = prom<V +>{
      tsps8 = ld tsps;
      tsps9 = force? tsps8;
      checkMissing(tsps9);
      return tsps9;
    };
    p12 = prom<V +>{
      r55 = clos inner117563661;
      return r55;
    };
    r57 = dyn apply(p11, 2, p12);
    check L147() else D32();
  L148():
    sym6 = ldf Mod;
    base6 = ldf Mod in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L150() else L151();
  L149():
    r61 = dyn base5(<lang Mod(`-`(eph, mean(eph)))>);
    goto L21(r61);
  D26():
    deopt 98 [r47];
  D32():
    deopt 117 [2.0i, 3.141592653589793, r57];
  D38():
    deopt 135 [r62, ts_eps3];
  L22(r64):
    max1 = ldf max in base;
    r69 = dyn max1(r64);
    check L156() else D37();
  L137():
    goto L16(r47);
  L147():
    r58 = `*`(3.141592653589793, r57);
    r59 = `*`(2.0i, r58);
    r60 = exp(r59);
    goto L20(r60);
  L150():
    eph = ld eph;
    check L152() else D33();
  L151():
    r63 = dyn base6(<lang `-`(eph, mean(eph))>);
    goto L22(r63);
  L157():
    ts_eps4 = force? ts_eps3;
    checkMissing(ts_eps4);
    r70 = `>`(r62, ts_eps4);
    c11 = `as.logical`(r70);
    if c11 then L158() else L23();
  D33():
    deopt 126 [eph];
  D37():
    deopt 135 [r69];
  L23():
    goto L24();
  L24():
    union1 = ld union;
    check L162() else D41();
  L152():
    eph1 = force? eph;
    checkMissing(eph1);
    mean1 = ldf mean;
    check L153() else D34();
  L156():
    goto L21(r69);
  L158():
    stop2 = ldf stop;
    check L159() else D39();
  D34():
    deopt 128 [eph1];
  D39():
    deopt 139 [];
  D41():
    deopt 144 [union1];
  L153():
    p13 = prom<V +>{
      eph2 = ld eph;
      eph3 = force? eph2;
      checkMissing(eph3);
      return eph3;
    };
    r66 = dyn mean1(p13);
    check L154() else D35();
  L159():
    r71 = dyn stop2("not all series have the same phase");
    check L160() else D40();
  L162():
    union2 = force? union1;
    checkMissing(union2);
    c12 = `as.logical`(union2);
    if c12 then L163() else L25();
  D35():
    deopt 130 [eph1, r66];
  D40():
    deopt 141 [r71];
  L25():
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L179() else L180();
  L30():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L200() else L201();
  L154():
    r67 = `-`(eph1, r66);
    Mod = ldf Mod in base;
    r68 = dyn Mod(r67);
    check L155() else D36();
  L160():
    goto L24();
  L163():
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L164() else L165();
  D36():
    deopt 133 [r68];
  L26(r74):
    st st = r74;
    sym8 = ldf max;
    base8 = ldf max in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L171() else L172();
  L31(r83):
    st st = r83;
    sym10 = ldf min;
    base10 = ldf min in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L186() else L187();
  L36(r94):
    st p = r94;
    sym12 = ldf round;
    base12 = ldf round in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L206() else L207();
  L155():
    goto L22(r68);
  L164():
    tsps10 = ld tsps;
    check L166() else D42();
  L165():
    r73 = dyn base7(<lang `[`(tsps, 1.0, )>);
    goto L26(r73);
  L179():
    tsps18 = ld tsps;
    check L181() else D46();
  L180():
    r82 = dyn base9(<lang `[`(tsps, 1.0, )>);
    goto L31(r82);
  L200():
    st2 = ld st;
    check L202() else D54();
  L201():
    r93 = dyn base11(<sym st>, <sym en>, <sym freq>);
    goto L36(r93);
  D42():
    deopt 148 [tsps10];
  D46():
    deopt 170 [tsps18];
  D54():
    deopt 205 [st2];
  L28(r78):
    st en = r78;
    goto L30();
  L33(r87):
    st en = r87;
    st = ld st;
    check L193() else D50();
  L37(r97):
    st n = r97;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L208() else L209();
  L166():
    tsps11 = force? tsps10;
    checkMissing(tsps11);
    c13 = `is.object`(tsps11);
    if c13 then L167() else L168();
  L171():
    tsps14 = ld tsps;
    check L173() else D44();
  L172():
    r77 = dyn base8(<lang `[`(tsps, 2.0, )>);
    goto L28(r77);
  L181():
    tsps19 = force? tsps18;
    checkMissing(tsps19);
    c15 = `is.object`(tsps19);
    if c15 then L182() else L183();
  L186():
    tsps22 = ld tsps;
    check L188() else D48();
  L187():
    r86 = dyn base10(<lang `[`(tsps, 2.0, )>);
    goto L33(r86);
  L202():
    st3 = force? st2;
    checkMissing(st3);
    en2 = ld en;
    check L203() else D55();
  L206():
    round = ldf round in base;
    r98 = dyn round(<lang `+`(`*`(freq, `(`(`-`(en, st))), 1.0)>);
    goto L37(r98);
  L207():
    r96 = dyn base12(<lang `+`(`*`(freq, `(`(`-`(en, st))), 1.0)>);
    goto L37(r96);
  D44():
    deopt 159 [tsps14];
  D48():
    deopt 181 [tsps22];
  D50():
    deopt 190 [st];
  D55():
    deopt 207 [en2];
  L27(dx12):
    min = ldf min in base;
    r76 = dyn min(dx12);
    check L170() else D43();
  L32(dx16):
    max3 = ldf max in base;
    r85 = dyn max3(dx16);
    check L185() else D47();
  L38(r100):
    c19 = `as.logical`(r100);
    if c19 then L212() else L39();
  L167():
    dr12 = tryDispatchBuiltin.1("[", tsps11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L169() else L168();
  L168():
    __6 = ldf `[` in base;
    r75 = dyn __6(tsps11, 1.0, <missing>);
    goto L27(r75);
  L173():
    tsps15 = force? tsps14;
    checkMissing(tsps15);
    c14 = `is.object`(tsps15);
    if c14 then L174() else L175();
  L182():
    dr16 = tryDispatchBuiltin.1("[", tsps19);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L184() else L183();
  L183():
    __8 = ldf `[` in base;
    r84 = dyn __8(tsps19, 1.0, <missing>);
    goto L32(r84);
  L188():
    tsps23 = force? tsps22;
    checkMissing(tsps23);
    c16 = `is.object`(tsps23);
    if c16 then L189() else L190();
  L193():
    st1 = force? st;
    checkMissing(st1);
    en = ld en;
    check L194() else D51();
  L203():
    en3 = force? en2;
    checkMissing(en3);
    freq2 = ld freq;
    check L204() else D56();
  L208():
    tsser4 = ld tsser;
    check L210() else D58();
  L209():
    r99 = dyn base13(<lang `!`(tsser)>);
    goto L38(r99);
  D43():
    deopt 155 [r76];
  D47():
    deopt 177 [r85];
  D51():
    deopt 191 [st1, en];
  D56():
    deopt 209 [freq2];
  D58():
    deopt 220 [tsser4];
  L29(dx14):
    max2 = ldf max in base;
    r80 = dyn max2(dx14);
    check L177() else D45();
  L34(dx18):
    min1 = ldf min in base;
    r89 = dyn min1(dx18);
    check L192() else D49();
  L39():
    goto L47();
  L47():
    vapply3 = ldf vapply;
    check L240() else D75();
  L169():
    dx11 = getTryDispatchBuiltinValue(dr12);
    goto L27(dx11);
  L170():
    goto L26(r76);
  L174():
    dr14 = tryDispatchBuiltin.1("[", tsps15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L176() else L175();
  L175():
    __7 = ldf `[` in base;
    r79 = dyn __7(tsps15, 2.0, <missing>);
    goto L29(r79);
  L184():
    dx15 = getTryDispatchBuiltinValue(dr16);
    goto L32(dx15);
  L185():
    goto L31(r85);
  L189():
    dr18 = tryDispatchBuiltin.1("[", tsps23);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L191() else L190();
  L190():
    __9 = ldf `[` in base;
    r88 = dyn __9(tsps23, 2.0, <missing>);
    goto L34(r88);
  L194():
    en1 = force? en;
    checkMissing(en1);
    r90 = `>`(st1, en1);
    c17 = `as.logical`(r90);
    if c17 then L195() else L35();
  L204():
    freq3 = force? freq2;
    checkMissing(freq3);
    c18 = ldf c in base;
    r95 = dyn c18(st3, en3, freq3);
    check L205() else D57();
  L210():
    tsser5 = force? tsser4;
    checkMissing(tsser5);
    r101 = `!`(tsser5);
    any1 = ldf any in base;
    r102 = dyn any1(r101);
    check L211() else D59();
  L212():
    vapply2 = ldf vapply;
    check L213() else D60();
  D45():
    deopt 166 [r80];
  D49():
    deopt 188 [r89];
  D57():
    deopt 212 [r95];
  D59():
    deopt 224 [r102];
  D60():
    deopt 226 [];
  D75():
    deopt 285 [];
  L35():
    goto L30();
  L176():
    dx13 = getTryDispatchBuiltinValue(dr14);
    goto L29(dx13);
  L177():
    goto L28(r80);
  L191():
    dx17 = getTryDispatchBuiltinValue(dr18);
    goto L34(dx17);
  L192():
    goto L33(r89);
  L195():
    warning = ldf warning;
    check L196() else D52();
  L205():
    goto L36(r95);
  L211():
    goto L38(r102);
  L213():
    p14 = prom<V +>{
      sers25 = ld sers;
      sers26 = force? sers25;
      checkMissing(sers26);
      c20 = `is.object`(sers26);
      if c20 then L1() else L2(sers26);
    L0(dx20):
      return dx20;
    L1():
      dr20 = tryDispatchBuiltin.1("[", sers26);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(sers28):
      tsser6 = ld tsser;
      tsser7 = force? tsser6;
      checkMissing(tsser7);
      r103 = `!`(tsser7);
      __10 = ldf `[` in base;
      r104 = dyn __10(sers28, r103);
      goto L0(r104);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx19);
    };
    p15 = prom<V +>{
      NROW = ld NROW;
      NROW1 = force? NROW;
      checkMissing(NROW1);
      return NROW1;
    };
    r107 = dyn vapply2(p14, p15, 1.0);
    check L214() else D61();
  L240():
    p22 = prom<V +>{
      sers35 = ld sers;
      sers36 = force? sers35;
      checkMissing(sers36);
      return sers36;
    };
    p23 = prom<V +>{
      NCOL = ld NCOL;
      NCOL1 = force? NCOL;
      checkMissing(NCOL1);
      return NCOL1;
    };
    r138 = dyn vapply3(p22, p23, 1.0);
    check L241() else D76();
  D52():
    deopt 195 [];
  D61():
    deopt 230 [r107];
  D76():
    deopt 289 [r138];
  L196():
    r91 = dyn warning("non-intersecting series");
    check L197() else D53();
  L214():
    st ln = r107;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L215() else L216();
  L241():
    st nsers = r138;
    dframe3 = ld dframe;
    check L242() else D77();
  D53():
    deopt 197 [r91];
  D77():
    deopt 291 [dframe3];
  L40(r109):
    c21 = `as.logical`(r109);
    if c21 then L221() else L41();
  L197():
    popenv;
    return NULL;
  L215():
    ln = ld ln;
    check L217() else D62();
  L216():
    r108 = dyn base14(<lang `&`(`!=`(ln, 1), `!=`(ln, n))>);
    goto L40(r108);
  L242():
    dframe4 = force? dframe3;
    checkMissing(dframe4);
    c26 = `as.logical`(dframe4);
    if c26 then L243() else L48();
  D62():
    deopt 234 [ln];
  L41():
    goto L42();
  L42():
    nser4 = ld nser;
    check L225() else D68();
  L48():
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L247() else L248();
  L49():
    nser10 = ld nser;
    check L307() else D108();
  L217():
    ln1 = force? ln;
    checkMissing(ln1);
    r110 = `!=`(ln1, 1);
    ln2 = ld ln;
    check L218() else D63();
  L221():
    stop3 = ldf stop;
    check L222() else D66();
  L243():
    setNames = ldf setNames;
    check L244() else D78();
  D63():
    deopt 237 [r110, ln2];
  D66():
    deopt 245 [];
  D68():
    deopt 251 [1, nser4];
  D78():
    deopt 294 [];
  D108():
    deopt 402 [1, nser10];
  L50(r147):
    st ns = r147;
    matrix = ldf matrix;
    check L251() else D82();
  L218():
    ln3 = force? ln2;
    checkMissing(ln3);
    n = ld n;
    check L219() else D64();
  L222():
    r114 = dyn stop3("non-time series not of the correct length");
    check L223() else D67();
  L225():
    nser5 = force? nser4;
    checkMissing(nser5);
    r116 = `:`(1, nser5);
    c22 = `is.object`(r116);
    if c22 then L226() else L227(r116);
  L244():
    p24 = prom<V +>{
      sym15 = ldf vector;
      base15 = ldf vector in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r140):
      return r140;
    L1():
      nser6 = ld nser;
      nser7 = force? nser6;
      checkMissing(nser7);
      vector = ldf vector in base;
      r141 = dyn vector("list", nser7);
      goto L0(r141);
    L2():
      r139 = dyn base15("list", <sym nser>);
      goto L0(r139);
    };
    p25 = prom<V +>{
      nmsers1 = ld nmsers;
      nmsers2 = force? nmsers1;
      checkMissing(nmsers2);
      return nmsers2;
    };
    r144 = dyn setNames(p24, p25);
    check L245() else D79();
  L247():
    nsers = ld nsers;
    check L249() else D80();
  L248():
    r146 = dyn base16(<sym nsers>);
    goto L50(r146);
  L307():
    nser11 = force? nser10;
    checkMissing(nser11);
    r222 = `:`(1, nser11);
    s2 = toForSeq(r222);
    l24 = length(s2);
    i65 = 0;
    goto L65(i65);
  D64():
    deopt 238 [r110, ln3, n];
  D67():
    deopt 247 [r114];
  D79():
    deopt 297 [r144];
  D80():
    deopt 301 [nsers];
  D82():
    deopt 307 [];
  L43(dx22):
    s = toForSeq(dx22);
    l = length(s);
    i = 0;
    goto L44(i);
  L65(i66):
    i67 = `+`.1(i66, 1);
    c40 = `<`.1(l24, i67);
    if c40 then L308() else L82();
  L219():
    n1 = force? n;
    checkMissing(n1);
    r111 = `!=`(ln3, n1);
    r112 = `&&`(r110, r111);
    any2 = ldf any in base;
    r113 = dyn any2(r112);
    check L220() else D65();
  L223():
    goto L42();
  L226():
    dr22 = tryDispatchBuiltin.1("[", r116);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L228() else L227(dr22);
  L227(r118):
    tsser8 = ld tsser;
    check L229() else D69();
  L245():
    st x = r144;
    goto L49();
  L249():
    nsers1 = force? nsers;
    checkMissing(nsers1);
    sum = ldf sum in base;
    r148 = dyn sum(nsers1);
    check L250() else D81();
  L251():
    p26 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    p27 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r151 = dyn matrix(<missing>, p26, p27);
    check L252() else D83();
  D65():
    deopt 243 [r113];
  D69():
    deopt 254 [r118, tsser8];
  D81():
    deopt 304 [r148];
  D83():
    deopt 311 [r151];
  L44(i1):
    i2 = `+`.1(i1, 1);
    c23 = `<`.1(l, i2);
    if c23 then L230() else L46();
  L82():
    x2 = `[[`(s2, i67, NULL, TRUE);
    st i = x2;
    union3 = ld union;
    check L309() else D109();
  L220():
    goto L40(r113);
  L228():
    dx21 = getTryDispatchBuiltinValue(dr22);
    goto L43(dx21);
  L229():
    tsser9 = force? tsser8;
    checkMissing(tsser9);
    r119 = `!`(tsser9);
    __11 = ldf `[` in base;
    r120 = dyn __11(r118, r119);
    goto L43(r120);
  L250():
    goto L50(r148);
  L252():
    st x = r151;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L253() else L254();
  L308():
    dframe7 = ld dframe;
    check L364() else D130();
  D109():
    deopt 405 [i67, union3];
  D130():
    deopt 492 [dframe7];
  L46():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    ts = ldf ts;
    check L231() else D70();
  L51(r153):
    st cs = r153;
    character = ldf character;
    check L260() else D87();
  L230():
    sapply1 = ldf sapply;
    check L237() else D73();
  L253():
    sym18 = ldf cumsum;
    base18 = ldf cumsum in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L255() else L256();
  L254():
    r152 = dyn base17(0.0, <lang cumsum(nsers)>);
    goto L51(r152);
  L309():
    union4 = force? union3;
    checkMissing(union4);
    c41 = `as.logical`(union4);
    if c41 then L310() else L66();
  L364():
    dframe8 = force? dframe7;
    checkMissing(dframe8);
    c55 = `as.logical`(dframe8);
    if c55 then L365() else L83();
  D70():
    deopt 259 [i2];
  D73():
    deopt 277 [];
  D87():
    deopt 326 [];
  L52(r155):
    c27 = ldf c in base;
    r157 = dyn c27(0.0, r155);
    check L259() else D86();
  L66():
    window = ldf window;
    check L339() else D119();
  L75(i107):
    dframe5 = ld dframe;
    check L341() else D121();
  L83():
    ts1 = ldf ts;
    check L369() else D133();
  L231():
    p16 = prom<V +>{
      sers29 = ld sers;
      sers30 = force? sers29;
      checkMissing(sers30);
      c24 = `is.object`(sers30);
      if c24 then L1() else L2(sers30);
    L0(dx24):
      return dx24;
    L1():
      dr24 = tryDispatchBuiltin.1("[[", sers30);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(sers32):
      i5 = ld i;
      i6 = force? i5;
      __12 = ldf `[[` in base;
      r121 = dyn __12(sers32, i6);
      goto L0(r121);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx23);
    };
    p17 = prom<V +>{
      st4 = ld st;
      st5 = force? st4;
      checkMissing(st5);
      return st5;
    };
    p18 = prom<V +>{
      en4 = ld en;
      en5 = force? en4;
      checkMissing(en5);
      return en5;
    };
    p19 = prom<V +>{
      freq4 = ld freq;
      freq5 = force? freq4;
      checkMissing(freq5);
      return freq5;
    };
    r126 = dyn ts[, start, end, frequency](p16, p17, p18, p19);
    check L232() else D71();
  L237():
    p20 = prom<V +>{
      sers33 = ld sers;
      sers34 = force? sers33;
      checkMissing(sers34);
      return sers34;
    };
    p21 = prom<V +>{
      tsp2 = ld tsp;
      tsp3 = force? tsp2;
      checkMissing(tsp3);
      return tsp3;
    };
    r134 = dyn sapply1(p20, p21);
    check L238() else D74();
  L255():
    nsers2 = ld nsers;
    check L257() else D84();
  L256():
    r154 = dyn base18(<sym nsers>);
    goto L52(r154);
  L260():
    p28 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r159 = dyn character(p28);
    check L261() else D88();
  L310():
    nsers12 = ld nsers;
    check L311() else D110();
  L365():
    as_data_frame1 = ldf `as.data.frame`;
    check L366() else D131();
  D71():
    deopt 267 [i2, r126];
  D74():
    deopt 280 [r134];
  D84():
    deopt 318 [nsers2];
  D86():
    deopt 323 [r157];
  D88():
    deopt 328 [r159];
  D110():
    deopt 407 [i67, nsers12];
  D119():
    deopt 447 [i67];
  D121():
    deopt 453 [i107, dframe5];
  D131():
    deopt 495 [];
  D133():
    deopt 499 [];
  L232():
    l1 = ld sers;
    c25 = `is.object`(l1);
    if c25 then L233() else L234(i2, r126, l1);
  L238():
    st tsps = r134;
    goto L47();
  L257():
    nsers3 = force? nsers2;
    checkMissing(nsers3);
    cumsum = ldf cumsum in base;
    r156 = dyn cumsum(nsers3);
    check L258() else D85();
  L259():
    goto L51(r157);
  L261():
    st nm = r159;
    nser8 = ld nser;
    check L262() else D89();
  L311():
    nsers13 = force? nsers12;
    checkMissing(nsers13);
    c42 = `is.object`(nsers13);
    if c42 then L312() else L313(i67, nsers13);
  L339():
    p41 = prom<V +>{
      sers49 = ld sers;
      sers50 = force? sers49;
      checkMissing(sers50);
      c49 = `is.object`(sers50);
      if c49 then L1() else L2(sers50);
    L0(dx70):
      return dx70;
    L1():
      dr58 = tryDispatchBuiltin.1("[[", sers50);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(sers52):
      i108 = ld i;
      i109 = force? i108;
      __26 = ldf `[[` in base;
      r261 = dyn __26(sers52, i109);
      goto L0(r261);
    L3():
      dx69 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx69);
    };
    p42 = prom<V +>{
      st6 = ld st;
      st7 = force? st6;
      checkMissing(st7);
      return st7;
    };
    p43 = prom<V +>{
      en6 = ld en;
      en7 = force? en6;
      checkMissing(en7);
      return en7;
    };
    r265 = dyn window(p41, p42, p43);
    check L340() else D120();
  L341():
    dframe6 = force? dframe5;
    checkMissing(dframe6);
    c50 = `as.logical`(dframe6);
    if c50 then L342() else L76();
  L366():
    p48 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r290 = dyn as_data_frame1(p48);
    check L367() else D132();
  L369():
    p49 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p50 = prom<V +>{
      st8 = ld st;
      st9 = force? st8;
      checkMissing(st9);
      return st9;
    };
    p51 = prom<V +>{
      freq6 = ld freq;
      freq7 = force? freq6;
      checkMissing(freq7);
      return freq7;
    };
    r294 = dyn ts1[, start, frequency](p49, p50, p51);
    check L370() else D134();
  D85():
    deopt 321 [r156];
  D89():
    deopt 331 [1, nser8];
  D120():
    deopt 451 [i67, r265];
  D132():
    deopt 497 [r290];
  D134():
    deopt 505 [r294];
  L45(i10, dx26):
    st sers = dx26;
    goto L44(i10);
  L67(i75, dx60):
    r224 = `>`(dx60, 1.0);
    c43 = `as.logical`(r224);
    if c43 then L316() else L68();
  L76():
    xx2 = ld xx;
    check L350() else D125();
  L78(i118):
    goto L65(i118);
  L233():
    dr26 = tryDispatchBuiltin.0("[[<-", l1, r126);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L235() else L234(i2, r126, dr26);
  L234(i8, r128, l3):
    i11 = ld i;
    check L236() else D72();
  L258():
    goto L52(r156);
  L262():
    nser9 = force? nser8;
    checkMissing(nser9);
    r160 = `:`(1, nser9);
    s1 = toForSeq(r160);
    l4 = length(s1);
    i13 = 0;
    goto L53(i13);
  L312():
    dr48 = tryDispatchBuiltin.1("[", nsers13);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L314() else L313(i67, dr48);
  L313(i73, nsers15):
    i76 = ld i;
    check L315() else D111();
  L340():
    st xx = r265;
    goto L75(i67);
  L342():
    structure = ldf structure;
    check L343() else D122();
  L367():
    popenv;
    return r290;
  L370():
    popenv;
    return r294;
  D72():
    deopt 269 [i8, r128, l3, r126, i11];
  D111():
    deopt 409 [i73, nsers15, i76];
  D122():
    deopt 456 [i107];
  D125():
    deopt 468 [i107, xx2];
  L53(i14):
    i15 = `+`.1(i14, 1);
    c28 = `<`.1(l4, i15);
    if c28 then L263() else L63();
  L68():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L320() else L321();
  L69(i86, r244):
    st xx = r244;
    goto L75(i86);
  L235():
    dx25 = getTryDispatchBuiltinValue(dr26);
    goto L45(i2, dx25);
  L236():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r131 = dyn ____(l3, r126, i12);
    goto L45(i8, r131);
  L314():
    dx59 = getTryDispatchBuiltinValue(dr48);
    goto L67(i67, dx59);
  L315():
    i77 = force? i76;
    __21 = ldf `[` in base;
    r223 = dyn __21(nsers15, i77);
    goto L67(i73, r223);
  L316():
    rbind = ldf rbind;
    check L317() else D112();
  L343():
    p44 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p47 = prom<V +>{
      p45 = ld p;
      p46 = force? p45;
      checkMissing(p46);
      return p46;
    };
    r268 = dyn structure[, tsp, class](p44, p47, "ts");
    check L344() else D123();
  L350():
    xx3 = force? xx2;
    checkMissing(xx3);
    l28 = ld x;
    c52 = `is.object`(l28);
    if c52 then L351() else L352(i107, xx3, l28);
  D112():
    deopt 415 [i75];
  D123():
    deopt 462 [i107, r268];
  L63():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st i = x1;
    nsers4 = ld nsers;
    check L264() else D90();
  L79(i122, xx7, dx74):
    st x = dx74;
    goto L78(i122);
  L263():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L301() else L302();
  L317():
    p36 = prom<V +>{
      matrix1 = ldf matrix;
      p34 = prom<V +>{
        sym20 = ldf round;
        base20 = ldf round in base;
        guard20 = `==`.4(sym20, base20);
        if guard20 then L1() else L2();
      L0(r226):
        return r226;
      L1():
        round1 = ldf round in base;
        r227 = dyn round1(<lang `*`(freq, `(`(`-`(`[`(tsps, 1.0, i), st)))>);
        goto L0(r227);
      L2():
        r225 = dyn base20(<lang `*`(freq, `(`(`-`(`[`(tsps, 1.0, i), st)))>);
        goto L0(r225);
      };
      p35 = prom<V +>{
        nsers16 = ld nsers;
        nsers17 = force? nsers16;
        checkMissing(nsers17);
        c44 = `is.object`(nsers17);
        if c44 then L1() else L2(nsers17);
      L0(dx62):
        return dx62;
      L1():
        dr50 = tryDispatchBuiltin.1("[", nsers17);
        dc25 = getTryDispatchBuiltinDispatched(dr50);
        if dc25 then L3() else L2(dr50);
      L2(nsers19):
        i80 = ld i;
        i81 = force? i80;
        __22 = ldf `[` in base;
        r229 = dyn __22(nsers19, i81);
        goto L0(r229);
      L3():
        dx61 = getTryDispatchBuiltinValue(dr50);
        goto L0(dx61);
      };
      r231 = dyn matrix1(NA_LGL, p34, p35);
      return r231;
    };
    p37 = prom<V +>{
      sers41 = ld sers;
      sers42 = force? sers41;
      checkMissing(sers42);
      c45 = `is.object`(sers42);
      if c45 then L1() else L2(sers42);
    L0(dx64):
      return dx64;
    L1():
      dr52 = tryDispatchBuiltin.1("[[", sers42);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(sers44):
      i82 = ld i;
      i83 = force? i82;
      __23 = ldf `[[` in base;
      r233 = dyn __23(sers44, i83);
      goto L0(r233);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx63);
    };
    p40 = prom<V +>{
      matrix2 = ldf matrix;
      p38 = prom<V +>{
        sym21 = ldf round;
        base21 = ldf round in base;
        guard21 = `==`.4(sym21, base21);
        if guard21 then L1() else L2();
      L0(r236):
        return r236;
      L1():
        round2 = ldf round in base;
        r237 = dyn round2(<lang `*`(freq, `(`(`-`(en, `[`(tsps, 2.0, i))))>);
        goto L0(r237);
      L2():
        r235 = dyn base21(<lang `*`(freq, `(`(`-`(en, `[`(tsps, 2.0, i))))>);
        goto L0(r235);
      };
      p39 = prom<V +>{
        nsers20 = ld nsers;
        nsers21 = force? nsers20;
        checkMissing(nsers21);
        c46 = `is.object`(nsers21);
        if c46 then L1() else L2(nsers21);
      L0(dx66):
        return dx66;
      L1():
        dr54 = tryDispatchBuiltin.1("[", nsers21);
        dc27 = getTryDispatchBuiltinDispatched(dr54);
        if dc27 then L3() else L2(dr54);
      L2(nsers23):
        i84 = ld i;
        i85 = force? i84;
        __24 = ldf `[` in base;
        r239 = dyn __24(nsers23, i85);
        goto L0(r239);
      L3():
        dx65 = getTryDispatchBuiltinValue(dr54);
        goto L0(dx65);
      };
      r241 = dyn matrix2(NA_LGL, p38, p39);
      return r241;
    };
    r243 = dyn rbind(p36, p37, p40);
    check L318() else D113();
  L320():
    sym23 = ldf `rep.int`;
    base23 = ldf `rep.int` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L322() else L323();
  L321():
    r245 = dyn base22(<lang rep.int(NA_LGL, round(`*`(freq, `(`(`-`(`[`(tsps, 1.0, i), st)))))>, <lang `[[`(sers, i)>, <lang rep.int(NA_LGL, round(`*`(freq, `(`(`-`(en, `[`(tsps, 2.0, i))))))>);
    goto L69(i75, r245);
  L344():
    l25 = ld x;
    c51 = `is.object`(l25);
    if c51 then L345() else L346(i107, r268, l25);
  L351():
    dr62 = tryDispatchBuiltin.0("[<-", l28, xx3);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L353() else L352(i107, xx3, dr62);
  L352(i120, xx5, l30):
    cs12 = ld cs;
    check L354() else D126();
  D90():
    deopt 334 [i15, nsers4];
  D113():
    deopt 419 [i75, r243];
  D126():
    deopt 473 [i120, xx5, l30, xx3, 1.0, cs12];
  L64(r219):
    l23 = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L305() else D106();
  L70(i91, r247):
    sers45 = ld sers;
    check L327() else D115();
  L77(i115, r272, dx72):
    st x = dx72;
    goto L78(i115);
  L264():
    nsers5 = force? nsers4;
    checkMissing(nsers5);
    c29 = `is.object`(nsers5);
    if c29 then L265() else L266(i15, nsers5);
  L301():
    nm = ld nm;
    check L303() else D104();
  L302():
    r218 = dyn base19(NULL, <sym nm>);
    goto L64(r218);
  L318():
    goto L69(i75, r243);
  L322():
    sym24 = ldf round;
    base24 = ldf round in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L324() else L325();
  L323():
    r246 = dyn base23(NA_LGL, <lang round(`*`(freq, `(`(`-`(`[`(tsps, 1.0, i), st))))>);
    goto L70(i75, r246);
  L345():
    dr60 = tryDispatchBuiltin.0("[[<-", l25, r268);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L347() else L346(i107, r268, dr60);
  L346(i113, r270, l27):
    i116 = ld i;
    check L348() else D124();
  L353():
    dx73 = getTryDispatchBuiltinValue(dr62);
    goto L79(i107, xx3, dx73);
  L354():
    cs13 = force? cs12;
    checkMissing(cs13);
    c53 = `is.object`(cs13);
    if c53 then L355() else L356(i120, xx5, l30, xx3, 1.0, cs13);
  D104():
    deopt 392 [nm];
  D106():
    deopt 397 [r219, l23, r219];
  D115():
    deopt 430 [i91, sers45];
  D124():
    deopt 464 [i113, r270, l27, r268, i116];
  L54(i21, dx28):
    r162 = `>`(dx28, 1.0);
    c30 = `as.logical`(r162);
    if c30 then L269() else L55();
  L71(i94, r249):
    rep_int = ldf `rep.int` in base;
    r251 = dyn rep_int(NA_LGL, r249);
    check L326() else D114();
  L80(i126, xx14, l34, xx15, r278, dx76):
    r280 = `+`(r278, dx76);
    cs16 = ld cs;
    check L359() else D128();
  L265():
    dr28 = tryDispatchBuiltin.1("[", nsers5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L267() else L266(i15, dr28);
  L266(i19, nsers7):
    i22 = ld i;
    check L268() else D91();
  L303():
    nm1 = force? nm;
    checkMissing(nm1);
    list = ldf list in base;
    r220 = dyn list(NULL, nm1);
    check L304() else D105();
  L305():
    r221 = dyn dimnames__(l23, NULL, r219);
    check L306() else D107();
  L324():
    round3 = ldf round in base;
    r250 = dyn round3(<lang `*`(freq, `(`(`-`(`[`(tsps, 1.0, i), st)))>);
    goto L71(i75, r250);
  L325():
    r248 = dyn base24(<lang `*`(freq, `(`(`-`(`[`(tsps, 1.0, i), st)))>);
    goto L71(i75, r248);
  L327():
    sers46 = force? sers45;
    checkMissing(sers46);
    c47 = `is.object`(sers46);
    if c47 then L328() else L329(i91, sers46);
  L347():
    dx71 = getTryDispatchBuiltinValue(dr60);
    goto L77(i107, r268, dx71);
  L348():
    i117 = force? i116;
    ____2 = ldf `[[<-` in base;
    r273 = dyn ____2(l27, r268, i117);
    goto L77(i113, r270, r273);
  L355():
    dr64 = tryDispatchBuiltin.1("[", cs13);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L357() else L356(i120, xx5, l30, xx3, 1.0, dr64);
  L356(i124, xx10, l32, xx11, r276, cs15):
    i127 = ld i;
    check L358() else D127();
  D91():
    deopt 336 [i19, nsers7, i22];
  D105():
    deopt 395 [r220];
  D107():
    deopt 399 [r219, r221];
  D114():
    deopt 429 [i94, r251];
  D127():
    deopt 475 [i124, xx10, l32, xx11, r276, cs15, i127];
  D128():
    deopt 478 [i126, xx14, l34, xx15, r280, cs16];
  L55():
    nmsers7 = ld nmsers;
    check L288() else D100();
  L59(i48):
    goto L53(i48);
  L72(i98, dx68):
    sym25 = ldf `rep.int`;
    base25 = ldf `rep.int` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L332() else L333();
  L267():
    dx27 = getTryDispatchBuiltinValue(dr28);
    goto L54(i15, dx27);
  L268():
    i23 = force? i22;
    __13 = ldf `[` in base;
    r161 = dyn __13(nsers7, i23);
    goto L54(i19, r161);
  L269():
    ____1 = ldf `%||%`;
    check L270() else D92();
  L304():
    goto L64(r220);
  L306():
    st x = r221;
    goto L49();
  L326():
    goto L70(i94, r251);
  L328():
    dr56 = tryDispatchBuiltin.1("[[", sers46);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L330() else L329(i91, dr56);
  L329(i96, sers48):
    i99 = ld i;
    check L331() else D116();
  L357():
    dx75 = getTryDispatchBuiltinValue(dr64);
    goto L80(i120, xx5, l30, xx3, 1.0, dx75);
  L358():
    i128 = force? i127;
    __27 = ldf `[` in base;
    r279 = dyn __27(cs15, i128);
    goto L80(i124, xx10, l32, xx11, r276, r279);
  L359():
    cs17 = force? cs16;
    checkMissing(cs17);
    c54 = `is.object`(cs17);
    if c54 then L360() else L361(i126, xx14, l34, xx15, r280, cs17);
  D92():
    deopt 342 [i21];
  D100():
    deopt 371 [i21, nmsers7];
  D116():
    deopt 432 [i96, sers48, i99];
  L73(i103, r254):
    c48 = ldf c in base;
    r259 = dyn c48(r247, dx68, r254);
    check L337() else D118();
  L81(i132, xx22, xx23, r284, dx78):
    r287 = `:`(r284, dx78);
    ___2 = ldf `[<-` in base;
    r288 = dyn ___2(l28, <missing>, r287, xx23);
    goto L79(i132, xx22, r288);
  L270():
    p30 = prom<V +>{
      colnames = ldf colnames;
      p29 = prom<V +>{
        sers37 = ld sers;
        sers38 = force? sers37;
        checkMissing(sers38);
        c31 = `is.object`(sers38);
        if c31 then L1() else L2(sers38);
      L0(dx30):
        return dx30;
      L1():
        dr30 = tryDispatchBuiltin.1("[[", sers38);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(sers40):
        i26 = ld i;
        i27 = force? i26;
        __14 = ldf `[[` in base;
        r163 = dyn __14(sers40, i27);
        goto L0(r163);
      L3():
        dx29 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx29);
      };
      r165 = dyn colnames(p29);
      return r165;
    };
    p31 = prom<V +>{
      nsers8 = ld nsers;
      nsers9 = force? nsers8;
      checkMissing(nsers9);
      c32 = `is.object`(nsers9);
      if c32 then L1() else L2(1, nsers9);
    L0(r170, dx32):
      r172 = `:`(r170, dx32);
      return r172;
    L1():
      dr32 = tryDispatchBuiltin.1("[", nsers9);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(1, dr32);
    L2(r168, nsers11):
      i28 = ld i;
      i29 = force? i28;
      __15 = ldf `[` in base;
      r171 = dyn __15(nsers11, i29);
      goto L0(r168, r171);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr32);
      goto L0(1, dx31);
    };
    r174 = dyn ____1(p30, p31);
    check L271() else D93();
  L288():
    nmsers8 = force? nmsers7;
    checkMissing(nmsers8);
    c37 = `is.object`(nmsers8);
    if c37 then L289() else L290(i21, nmsers8);
  L330():
    dx67 = getTryDispatchBuiltinValue(dr56);
    goto L72(i91, dx67);
  L331():
    i100 = force? i99;
    __25 = ldf `[[` in base;
    r252 = dyn __25(sers48, i100);
    goto L72(i96, r252);
  L332():
    sym26 = ldf round;
    base26 = ldf round in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L334() else L335();
  L333():
    r253 = dyn base25(NA_LGL, <lang round(`*`(freq, `(`(`-`(en, `[`(tsps, 2.0, i)))))>);
    goto L73(i98, r253);
  L360():
    dr66 = tryDispatchBuiltin.1("[", cs17);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L362() else L361(i126, xx14, l34, xx15, r280, dr66);
  L361(i130, xx18, l36, xx19, r282, cs19):
    i133 = ld i;
    check L363() else D129();
  D93():
    deopt 345 [i21, r174];
  D118():
    deopt 444 [i103, r259];
  D129():
    deopt 480 [i130, xx18, l36, xx19, r282, cs19, i133];
  L60(i52, dx42):
    l16 = ld nm;
    c38 = `is.object`(l16);
    if c38 then L293() else L294(i52, dx42, l16);
  L74(i106, r256):
    rep_int1 = ldf `rep.int` in base;
    r258 = dyn rep_int1(NA_LGL, r256);
    check L336() else D117();
  L271():
    st cn = r174;
    paste = ldf paste;
    check L272() else D94();
  L289():
    dr42 = tryDispatchBuiltin.1("[", nmsers8);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L291() else L290(i21, dr42);
  L290(i50, nmsers10):
    i53 = ld i;
    check L292() else D101();
  L334():
    round4 = ldf round in base;
    r257 = dyn round4(<lang `*`(freq, `(`(`-`(en, `[`(tsps, 2.0, i))))>);
    goto L74(i98, r257);
  L335():
    r255 = dyn base26(<lang `*`(freq, `(`(`-`(en, `[`(tsps, 2.0, i))))>);
    goto L74(i98, r255);
  L337():
    goto L69(i103, r259);
  L362():
    dx77 = getTryDispatchBuiltinValue(dr66);
    goto L81(i126, xx14, xx15, r280, dx77);
  L363():
    i134 = force? i133;
    checkMissing(i134);
    r285 = `+`(i134, 1.0);
    __28 = ldf `[` in base;
    r286 = dyn __28(cs19, r285);
    goto L81(i130, xx18, xx19, r282, r286);
  D94():
    deopt 348 [i21];
  D101():
    deopt 373 [i50, nmsers10, i53];
  D117():
    deopt 442 [i106, r258];
  L61(i58, dx47, dx48):
    st nm = dx48;
    goto L59(i58);
  L272():
    p32 = prom<V +>{
      nmsers3 = ld nmsers;
      nmsers4 = force? nmsers3;
      checkMissing(nmsers4);
      c33 = `is.object`(nmsers4);
      if c33 then L1() else L2(nmsers4);
    L0(dx34):
      return dx34;
    L1():
      dr34 = tryDispatchBuiltin.1("[", nmsers4);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(nmsers6):
      i30 = ld i;
      i31 = force? i30;
      __16 = ldf `[` in base;
      r175 = dyn __16(nmsers6, i31);
      goto L0(r175);
    L3():
      dx33 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx33);
    };
    p33 = prom<V +>{
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      return cn1;
    };
    r178 = dyn paste[, , sep](p32, p33, ".");
    check L273() else D95();
  L291():
    dx41 = getTryDispatchBuiltinValue(dr42);
    goto L60(i21, dx41);
  L292():
    i54 = force? i53;
    __19 = ldf `[` in base;
    r214 = dyn __19(nmsers10, i54);
    goto L60(i50, r214);
  L293():
    dr44 = tryDispatchBuiltin.0("[<-", l16, dx42);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L295() else L294(i52, dx42, dr44);
  L294(i56, dx44, l18):
    cs8 = ld cs;
    check L296() else D102();
  L336():
    goto L73(i106, r258);
  D95():
    deopt 353 [i21, r178];
  D102():
    deopt 377 [i56, dx44, l18, dx42, cs8];
  L273():
    l5 = ld nm;
    c34 = `is.object`(l5);
    if c34 then L274() else L275(i21, r178, l5);
  L295():
    dx46 = getTryDispatchBuiltinValue(dr44);
    goto L61(i52, dx42, dx46);
  L296():
    cs9 = force? cs8;
    checkMissing(cs9);
    c39 = `is.object`(cs9);
    if c39 then L297() else L298(i56, dx44, l18, dx42, cs9);
  L56(i35, r182, dx36):
    st nm = dx36;
    goto L59(i35);
  L62(i62, dx56, l22, dx57, dx58):
    ___1 = ldf `[<-` in base;
    r217 = dyn ___1(l22, dx57, dx58);
    goto L61(i62, dx56, r217);
  L274():
    dr36 = tryDispatchBuiltin.0("[<-", l5, r178);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L276() else L275(i21, r178, dr36);
  L275(i33, r180, l7):
    cs = ld cs;
    check L277() else D96();
  L297():
    dr46 = tryDispatchBuiltin.1("[", cs9);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L299() else L298(i56, dx44, l18, dx42, dr46);
  L298(i60, dx51, l20, dx52, cs11):
    i63 = ld i;
    check L300() else D103();
  D96():
    deopt 356 [i33, r180, l7, r178, 1.0, cs];
  D103():
    deopt 379 [i60, dx51, l20, dx52, cs11, i63];
  L276():
    dx35 = getTryDispatchBuiltinValue(dr36);
    goto L56(i21, r178, dx35);
  L277():
    cs1 = force? cs;
    checkMissing(cs1);
    c35 = `is.object`(cs1);
    if c35 then L278() else L279(i33, r180, l7, r178, 1.0, cs1);
  L299():
    dx55 = getTryDispatchBuiltinValue(dr46);
    goto L62(i56, dx44, l18, dx42, dx55);
  L300():
    i64 = force? i63;
    checkMissing(i64);
    r215 = `+`(i64, 1.0);
    __20 = ldf `[` in base;
    r216 = dyn __20(cs11, r215);
    goto L62(i60, dx51, l20, dx52, r216);
  L57(i39, r192, l11, r193, r194, dx38):
    r196 = `+`(r194, dx38);
    cs4 = ld cs;
    check L282() else D98();
  L278():
    dr38 = tryDispatchBuiltin.1("[", cs1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L280() else L279(i33, r180, l7, r178, 1.0, dr38);
  L279(i37, r186, l9, r187, r188, cs3):
    i40 = ld i;
    check L281() else D97();
  D97():
    deopt 358 [i37, r186, l9, r187, r188, cs3, i40];
  D98():
    deopt 361 [i39, r192, l11, r193, r196, cs4];
  L280():
    dx37 = getTryDispatchBuiltinValue(dr38);
    goto L57(i33, r180, l7, r178, 1.0, dx37);
  L281():
    i41 = force? i40;
    __17 = ldf `[` in base;
    r195 = dyn __17(cs3, i41);
    goto L57(i37, r186, l9, r187, r188, r195);
  L282():
    cs5 = force? cs4;
    checkMissing(cs5);
    c36 = `is.object`(cs5);
    if c36 then L283() else L284(i39, r192, l11, r193, r196, cs5);
  L58(i45, r206, l15, r207, r208, dx40):
    r211 = `:`(r208, dx40);
    ___ = ldf `[<-` in base;
    r212 = dyn ___(l15, r207, r211);
    goto L56(i45, r206, r212);
  L283():
    dr40 = tryDispatchBuiltin.1("[", cs5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L285() else L284(i39, r192, l11, r193, r196, dr40);
  L284(i43, r200, l13, r201, r202, cs7):
    i46 = ld i;
    check L286() else D99();
  D99():
    deopt 363 [i43, r200, l13, r201, r202, cs7, i46];
  L285():
    dx39 = getTryDispatchBuiltinValue(dr40);
    goto L58(i39, r192, l11, r193, r196, dx39);
  L286():
    i47 = force? i46;
    checkMissing(i47);
    r209 = `+`(i47, 1.0);
    __18 = ldf `[` in base;
    r210 = dyn __18(cs7, r209);
    goto L58(i43, r200, l13, r201, r202, r210);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tsp:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r5 = `>`(r1, 0);
    popenv;
    return r5;
  L1():
    tsp = ldf tsp;
    check L3() else D0();
  L2():
    r = dyn base(<lang tsp(x)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn tsp(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    length = ldf length in base;
    r4 = dyn length(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}
fun inner117563661(tsp) {
  (reg tsp:*) -+> V { var tsp:*, reg tsp1:*, reg tsp2:V, reg c:L, reg tsp4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg tsp5:*, reg tsp6:V, reg c1:L, reg dx3:V, reg tsp8:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r1:V, reg r2:V, reg __2:cls, reg r3:V |
    mkenv;
    st tsp = tsp;
    tsp1 = ld tsp;
    check L2() else D0();
  D0():
    deopt 1 [tsp1];
  L2():
    tsp2 = force? tsp1;
    checkMissing(tsp2);
    c = `is.object`(tsp2);
    if c then L3() else L4(tsp2);
  L0(dx1):
    tsp5 = ld tsp;
    check L6() else D1();
  L3():
    dr = tryDispatchBuiltin.1("[", tsp2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(tsp4):
    __ = ldf `[` in base;
    r = dyn __(tsp4, 1);
    goto L0(r);
  D1():
    deopt 5 [dx1, tsp5];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    tsp6 = force? tsp5;
    checkMissing(tsp6);
    c1 = `is.object`(tsp6);
    if c1 then L7() else L8(dx1, tsp6);
  L1(dx6, dx7):
    r2 = `*`(dx6, dx7);
    __2 = ldf `%%` in base;
    r3 = dyn __2(r2, 1.0);
    check L10() else D2();
  L7():
    dr2 = tryDispatchBuiltin.1("[", tsp6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(dx1, dr2);
  L8(dx3, tsp8):
    __1 = ldf `[` in base;
    r1 = dyn __1(tsp8, 3);
    goto L1(dx3, r1);
  D2():
    deopt 13 [r3];
  L9():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx1, dx5);
  L10():
    popenv;
    return r3;
  }
}