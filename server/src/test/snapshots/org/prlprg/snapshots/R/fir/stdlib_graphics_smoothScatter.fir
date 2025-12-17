fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2626778199;
    st smoothScatter = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2626778199(x, y, nbin, bandwidth, colramp, nrpoints, `ret.selection`, pch, cex, col, transformation, postPlotHook, xlab, ylab, xlim, ylim, xaxs, yaxs, `...`) {
  (reg x:*, reg y:*, reg nbin:*, reg bandwidth:*, reg colramp:*, reg nrpoints:*, reg ret_selection:*, reg pch:*, reg cex:*, reg col:*, reg transformation:*, reg postPlotHook:*, reg xlab:*, reg ylab:*, reg xlim:*, reg ylim:*, reg xaxs:*, reg yaxs:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var nbin:*, reg nbin_isMissing:L, reg nbin_orDefault:*, var bandwidth:*, var colramp:*, reg colramp_isMissing:L, reg colramp_orDefault:*, reg colorRampPalette:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg blues9:*, reg blues10:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var nrpoints:*, reg nrpoints_isMissing:L, reg nrpoints_orDefault:*, var `ret.selection`:*, reg ret_selection_isMissing:L, reg ret_selection_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var transformation:*, reg transformation_isMissing:L, reg transformation_orDefault:*, reg r6:cls, reg p2:p(V +), var postPlotHook:*, reg postPlotHook_isMissing:L, reg postPlotHook_orDefault:*, reg box:*, reg box1:V, reg p3:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xlim:*, var ylim:*, var xaxs:*, reg xaxs_isMissing:L, reg xaxs_orDefault:*, reg par:cls, reg r9:V, reg p4:p(V +), var yaxs:*, reg yaxs_isMissing:L, reg yaxs_orDefault:*, reg par1:cls, reg r11:V, reg p5:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg nrpoints1:*, reg nrpoints2:V, reg is_numeric:cls, reg r15:V, reg r16:V, reg c1:L, reg c2:V, reg nrpoints3:*, reg nrpoints4:V, reg r17:V, reg c4:L, reg c5:V, reg c7:L, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg c12:L, reg r19:V, reg nrpoints5:*, reg nrpoints6:V, reg length:cls, reg r20:V, reg r21:V, reg c13:L, reg c14:V, reg c16:L, reg stop:cls, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg round:cls, reg r26:V, reg ret_selection1:*, reg ret_selection2:V, reg c17:L, reg c19:V, reg nrpoints7:*, reg nrpoints8:V, reg r27:V, reg c20:L, reg c21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg missing:cls, reg r30:V, reg r31:V, reg c23:L, reg deparse1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg substitute:cls, reg r34:V, reg p6:p(V +), reg r36:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg missing1:cls, reg r40:V, reg r41:V, reg c24:L, reg deparse2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg substitute1:cls, reg r44:V, reg p7:p(V +), reg r46:V, reg r47:V, reg xy_coords:cls, reg x1:*, reg x2:V, reg p8:p(V +), reg y1:*, reg y2:V, reg p9:p(V +), reg xlabel:*, reg xlabel1:V, reg p10:p(V +), reg ylabel:*, reg ylabel1:V, reg p11:p(V +), reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg xlab1:*, reg xlab2:V, reg c25:V, reg c26:L, reg xy:*, reg xy1:V, reg c27:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg ylab1:*, reg ylab2:V, reg c28:V, reg c29:L, reg xy4:*, reg xy5:V, reg c30:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r58:V, reg cbind:cls, reg xy8:*, reg xy9:V, reg c31:L, reg xy11:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r59:V, reg p12:p(V +), reg xy12:*, reg xy13:V, reg c32:L, reg xy15:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r61:V, reg p13:p(V +), reg r63:V, reg c33:L, reg r65:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg r70:V, reg xy16:*, reg xy17:V, reg c34:L, reg r72:V, reg xy19:V, reg dr10:V, reg dc5:L, reg dx12:V, reg r74:V, reg dx13:V, reg r75:V, reg is_finite:cls, reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg r83:V, reg r84:V, reg xy20:*, reg xy21:V, reg c35:L, reg r87:V, reg r88:V, reg xy23:V, reg dr12:V, reg dc6:L, reg dx14:V, reg r91:V, reg r92:V, reg dx15:V, reg r93:V, reg is_finite1:cls, reg r94:V, reg r95:V, reg __:cls, reg r96:V, reg ret_selection3:*, reg ret_selection4:V, reg c36:L, reg which:cls, reg I:*, reg I1:V, reg p14:p(V +), reg r98:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r100:V, reg r101:V, reg missing2:cls, reg r102:V, reg r103:V, reg c37:L, reg stopifnot:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r104:V, reg r105:V, reg xlim1:*, reg xlim2:V, reg is_numeric1:cls, reg r106:V, reg p15:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r108:V, reg r109:V, reg xlim3:*, reg xlim4:V, reg length1:cls, reg r110:V, reg r111:V, reg p16:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r113:V, reg r114:V, reg xlim5:*, reg xlim6:V, reg is_finite2:cls, reg r115:V, reg p17:p(V +), reg r117:V, reg x3:*, reg x4:V, reg c38:L, reg x6:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r118:V, reg x9:V, reg r119:V, reg xlim7:*, reg xlim8:V, reg min:cls, reg r120:V, reg x10:*, reg x11:V, reg c39:L, reg x14:V, reg r122:V, reg dr16:V, reg dc8:L, reg dx18:V, reg x17:V, reg r124:V, reg dx19:V, reg __1:cls, reg r125:V, reg r126:V, reg x18:*, reg x19:V, reg c40:L, reg x22:V, reg r128:V, reg dr18:V, reg dc9:L, reg dx20:V, reg x25:V, reg r130:V, reg dx21:V, reg __2:cls, reg r131:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r134:V, reg r135:V, reg dx24:V, reg r136:V, reg xlim9:*, reg xlim10:V, reg max:cls, reg r137:V, reg r138:V, reg r139:V, reg __3:cls, reg r140:V, reg ret_selection5:*, reg ret_selection6:V, reg c41:L, reg iS:*, reg iS1:V, reg c42:L, reg iS3:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg I2:*, reg I3:V, reg __4:cls, reg r141:V, reg dx27:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r142:V, reg r143:V, reg x29:*, reg x30:V, reg c43:L, reg dr22:V, reg dc11:L, reg dx29:V, reg dx30:V, reg __5:cls, reg r144:V, reg range:cls, reg r145:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r146:V, reg r147:V, reg missing3:cls, reg r148:V, reg r149:V, reg c44:L, reg stopifnot1:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r150:V, reg r151:V, reg ylim1:*, reg ylim2:V, reg is_numeric2:cls, reg r152:V, reg p18:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r154:V, reg r155:V, reg ylim3:*, reg ylim4:V, reg length2:cls, reg r156:V, reg r157:V, reg p19:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r159:V, reg r160:V, reg ylim5:*, reg ylim6:V, reg is_finite3:cls, reg r161:V, reg p20:p(V +), reg r163:V, reg x33:*, reg x34:V, reg c45:L, reg x36:V, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r164:V, reg x39:V, reg r165:V, reg ylim7:*, reg ylim8:V, reg min1:cls, reg r166:V, reg x40:*, reg x41:V, reg c46:L, reg x44:V, reg r168:V, reg dr26:V, reg dc13:L, reg dx33:V, reg x47:V, reg r170:V, reg dx34:V, reg __6:cls, reg r171:V, reg r172:V, reg x48:*, reg x49:V, reg c47:L, reg x52:V, reg r174:V, reg dr28:V, reg dc14:L, reg dx35:V, reg x55:V, reg r176:V, reg dx36:V, reg __7:cls, reg r177:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r180:V, reg r181:V, reg dx39:V, reg r182:V, reg ylim9:*, reg ylim10:V, reg max1:cls, reg r183:V, reg r184:V, reg r185:V, reg __8:cls, reg r186:V, reg ret_selection7:*, reg ret_selection8:V, reg c48:L, reg iS4:*, reg iS5:V, reg c49:L, reg iS7:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg I4:*, reg I5:V, reg __9:cls, reg r187:V, reg dx42:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r188:V, reg r189:V, reg x59:*, reg x60:V, reg c50:L, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg __10:cls, reg r190:V, reg range1:cls, reg r191:V, reg ___:cls, reg r192:V, reg r193:cls, reg x63:*, reg x64:V, reg p21:p(V +), reg nbin1:*, reg nbin2:V, reg p22:p(V +), reg bandwidth1:*, reg bandwidth2:V, reg p23:p(V +), reg r197:V, reg map:*, reg map1:V, reg c51:L, reg map3:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg r198:V, reg map4:*, reg map5:V, reg c52:L, reg map7:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg r199:V, reg map8:*, reg map9:V, reg c53:L, reg map11:V, reg dr38:V, reg dc19:L, reg dx50:V, reg dx51:V, reg r200:V, reg transformation1:cls, reg dens:*, reg dens1:V, reg p24:p(V +), reg r202:V, reg l:*, reg c54:L, reg r204:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg ___1:cls, reg r207:V, reg image:cls, reg xm:*, reg xm1:V, reg p25:p(V +), reg ym:*, reg ym1:V, reg p26:p(V +), reg dens2:*, reg dens3:V, reg p27:p(V +), reg colramp1:cls, reg r211:V, reg p28:p(V +), reg xlab3:*, reg xlab4:V, reg p29:p(V +), reg ylab3:*, reg ylab4:V, reg p30:p(V +), reg xlim11:*, reg xlim12:V, reg p31:p(V +), reg ylim11:*, reg ylim12:V, reg p32:p(V +), reg xaxs1:*, reg xaxs2:V, reg p33:p(V +), reg yaxs1:*, reg yaxs2:V, reg p34:p(V +), reg ddd1:dots?, reg r219:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r220:V, reg r221:V, reg postPlotHook1:*, reg postPlotHook2:V, reg c55:V, reg r222:V, reg c56:L, reg postPlotHook3:cls, reg r223:V, reg nrpoints9:*, reg nrpoints10:V, reg r225:V, reg c57:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r226:V, reg r227:V, reg nrow:cls, reg x65:*, reg x66:V, reg p35:p(V +), reg r229:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r230:V, reg r231:V, reg nrpoints11:*, reg nrpoints12:V, reg r232:V, reg min2:cls, reg r233:V, reg stopifnot2:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r234:V, reg r235:V, reg xm2:*, reg xm3:V, reg length3:cls, reg r236:V, reg nrow1:cls, reg dens4:*, reg dens5:V, reg p36:p(V +), reg r238:V, reg r239:V, reg p37:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r241:V, reg r242:V, reg ym2:*, reg ym3:V, reg length4:cls, reg r243:V, reg ncol:cls, reg dens6:*, reg dens7:V, reg p38:p(V +), reg r245:V, reg r246:V, reg p39:p(V +), reg r248:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r251:V, reg r252:I, reg r253:V, reg nx:*, reg nx1:V, reg r254:V, reg x67:*, reg x68:V, reg c58:L, reg r257:I, reg r258:V, reg dr42:V, reg dc21:L, reg dx54:V, reg r261:I, reg r262:V, reg dx55:V, reg __11:cls, reg r263:V, reg xm4:*, reg xm5:V, reg c59:L, reg r266:I, reg r267:V, reg dx57:V, reg xm7:V, reg dr44:V, reg dc22:L, reg dx59:V, reg r270:I, reg r271:V, reg dx60:V, reg dx61:V, reg __12:cls, reg r272:V, reg r273:V, reg r274:V, reg xm8:*, reg xm9:V, reg c60:L, reg r277:I, reg r278:V, reg xm11:V, reg dr46:V, reg dc23:L, reg dx62:V, reg r281:I, reg r282:V, reg dx63:V, reg nx2:*, reg nx3:V, reg __13:cls, reg r283:V, reg xm12:*, reg xm13:V, reg c61:L, reg r286:I, reg r287:V, reg dx65:V, reg xm15:V, reg dr48:V, reg dc24:L, reg dx67:V, reg r290:I, reg r291:V, reg dx68:V, reg dx69:V, reg __14:cls, reg r292:V, reg r293:V, reg r294:V, reg as_integer:cls, reg r295:V, reg r296:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r299:V, reg r300:I, reg r301:V, reg ny:*, reg ny1:V, reg r302:V, reg x71:*, reg x72:V, reg c62:L, reg r305:I, reg r306:V, reg dr50:V, reg dc25:L, reg dx70:V, reg r309:I, reg r310:V, reg dx71:V, reg __15:cls, reg r311:V, reg ym4:*, reg ym5:V, reg c63:L, reg r314:I, reg r315:V, reg dx73:V, reg ym7:V, reg dr52:V, reg dc26:L, reg dx75:V, reg r318:I, reg r319:V, reg dx76:V, reg dx77:V, reg __16:cls, reg r320:V, reg r321:V, reg r322:V, reg ym8:*, reg ym9:V, reg c64:L, reg r325:I, reg r326:V, reg ym11:V, reg dr54:V, reg dc27:L, reg dx78:V, reg r329:I, reg r330:V, reg dx79:V, reg ny2:*, reg ny3:V, reg __17:cls, reg r331:V, reg ym12:*, reg ym13:V, reg c65:L, reg r334:I, reg r335:V, reg dx81:V, reg ym15:V, reg dr56:V, reg dc28:L, reg dx83:V, reg r338:I, reg r339:V, reg dx84:V, reg dx85:V, reg __18:cls, reg r340:V, reg r341:V, reg r342:V, reg as_integer1:cls, reg r343:V, reg r344:V, reg order:cls, reg dens8:*, reg dens9:V, reg c66:L, reg dens11:V, reg dr58:V, reg dc29:L, reg dx86:V, reg dx87:V, reg cbind1:cls, reg ixm:*, reg ixm1:V, reg p40:p(V +), reg iym:*, reg iym1:V, reg p41:p(V +), reg r347:V, reg __19:cls, reg r348:V, reg p42:p(V +), reg r350:V, reg c67:L, reg r352:V, reg dr60:V, reg dc30:L, reg dx88:V, reg dx89:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r355:V, reg r356:V, reg r357:V, reg nrpoints13:*, reg nrpoints14:V, reg r358:I, reg __20:cls, reg r359:V, reg x75:*, reg x76:V, reg c68:L, reg x78:V, reg dr62:V, reg dc31:L, reg dx90:V, reg dx91:V, reg sel:*, reg sel1:V, reg __21:cls, reg r360:V, reg points:cls, reg x79:*, reg x80:V, reg p43:p(V +), reg pch1:*, reg pch2:V, reg p44:p(V +), reg cex1:*, reg cex2:V, reg p45:p(V +), reg col1:*, reg col2:V, reg p46:p(V +), reg r365:V, reg ret_selection9:*, reg ret_selection10:V, reg c69:L, reg iS8:*, reg iS9:V, reg c70:L, reg iS11:V, reg dr64:V, reg dc32:L, reg dx92:V, reg dx93:V, reg sel2:*, reg sel3:V, reg __22:cls, reg r366:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    nbin_isMissing = missing.0(nbin);
    if nbin_isMissing then L1(128.0) else L1(nbin);
  L1(nbin_orDefault):
    st nbin = nbin_orDefault;
    st bandwidth = bandwidth;
    colramp_isMissing = missing.0(colramp);
    if colramp_isMissing then L2() else L3(colramp);
  L2():
    p1 = prom<V +>{
      colorRampPalette = ldf colorRampPalette;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        blues9 = ld blues9;
        blues10 = force? blues9;
        checkMissing(blues10);
        c = ldf c in base;
        r2 = dyn c("white", blues10);
        goto L0(r2);
      L2():
        r = dyn base("white", <sym blues9>);
        goto L0(r);
      };
      r4 = dyn colorRampPalette(p);
      return r4;
    };
    goto L3(p1);
  L3(colramp_orDefault):
    st colramp = colramp_orDefault;
    nrpoints_isMissing = missing.0(nrpoints);
    if nrpoints_isMissing then L4(100.0) else L4(nrpoints);
  L4(nrpoints_orDefault):
    st nrpoints = nrpoints_orDefault;
    ret_selection_isMissing = missing.0(ret_selection);
    if ret_selection_isMissing then L5(FALSE) else L5(ret_selection);
  L5(ret_selection_orDefault):
    st `ret.selection` = ret_selection_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L6(".") else L6(pch);
  L6(pch_orDefault):
    st pch = pch_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L7(1.0) else L7(cex);
  L7(cex_orDefault):
    st cex = cex_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L8("black") else L8(col);
  L8(col_orDefault):
    st col = col_orDefault;
    transformation_isMissing = missing.0(transformation);
    if transformation_isMissing then L9() else L10(transformation);
  L9():
    p2 = prom<V +>{
      r6 = clos inner2501545716;
      return r6;
    };
    goto L10(p2);
  L10(transformation_orDefault):
    st transformation = transformation_orDefault;
    postPlotHook_isMissing = missing.0(postPlotHook);
    if postPlotHook_isMissing then L11() else L12(postPlotHook);
  L11():
    p3 = prom<V +>{
      box = ld box;
      box1 = force? box;
      checkMissing(box1);
      return box1;
    };
    goto L12(p3);
  L12(postPlotHook_orDefault):
    st postPlotHook = postPlotHook_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L13(NULL) else L13(xlab);
  L13(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L14(NULL) else L14(ylab);
  L14(ylab_orDefault):
    st ylab = ylab_orDefault;
    st xlim = xlim;
    st ylim = ylim;
    xaxs_isMissing = missing.0(xaxs);
    if xaxs_isMissing then L15() else L16(xaxs);
  L15():
    p4 = prom<V +>{
      par = ldf par;
      r9 = dyn par("xaxs");
      return r9;
    };
    goto L16(p4);
  L16(xaxs_orDefault):
    st xaxs = xaxs_orDefault;
    yaxs_isMissing = missing.0(yaxs);
    if yaxs_isMissing then L17() else L18(yaxs);
  L17():
    p5 = prom<V +>{
      par1 = ldf par;
      r11 = dyn par1("yaxs");
      return r11;
    };
    goto L18(p5);
  L18(yaxs_orDefault):
    st yaxs = yaxs_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L92() else L93();
  L19(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L20(c1) else L96();
  L92():
    nrpoints1 = ld nrpoints;
    check L94() else D0();
  L93():
    r13 = dyn base1(<sym nrpoints>);
    goto L19(r13);
  D0():
    deopt 2 [nrpoints1];
  L20(c2):
    c7 = `as.logical`(c2);
    if c7 then L21(c7) else L99();
  L94():
    nrpoints2 = force? nrpoints1;
    checkMissing(nrpoints2);
    is_numeric = ldf `is.numeric` in base;
    r15 = dyn is_numeric(nrpoints2);
    check L95() else D1();
  L96():
    nrpoints3 = ld nrpoints;
    check L97() else D2();
  D1():
    deopt 5 [r15];
  D2():
    deopt 7 [c1, nrpoints3];
  L21(c8):
    c16 = `as.logical`(c8);
    if c16 then L105() else L23();
  L95():
    goto L19(r15);
  L97():
    nrpoints4 = force? nrpoints3;
    checkMissing(nrpoints4);
    r17 = `<`(nrpoints4, 0.0);
    c4 = `as.logical`(r17);
    c5 = `||`(c1, c4);
    goto L20(c5);
  L99():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L100() else L101();
  L22(c12, r19):
    r21 = `!=`(r19, 1.0);
    c13 = `as.logical`(r21);
    c14 = `||`(c12, c13);
    goto L21(c14);
  L23():
    goto L24();
  L24():
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L109() else L110();
  L100():
    nrpoints5 = ld nrpoints;
    check L102() else D3();
  L101():
    r18 = dyn base2(<sym nrpoints>);
    goto L22(c7, r18);
  L105():
    stop = ldf stop;
    check L106() else D5();
  D3():
    deopt 14 [c7, nrpoints5];
  D5():
    deopt 22 [];
  L25(r25):
    st nrpoints = r25;
    ret_selection1 = ld `ret.selection`;
    check L111() else D7();
  L102():
    nrpoints6 = force? nrpoints5;
    checkMissing(nrpoints6);
    length = ldf length in base;
    r20 = dyn length(nrpoints6);
    check L103() else D4();
  L106():
    r22 = dyn stop("'nrpoints' should be numeric scalar with value >= 0.");
    check L107() else D6();
  L109():
    round = ldf round in base;
    r26 = dyn round(<sym nrpoints>);
    goto L25(r26);
  L110():
    r24 = dyn base3(<sym nrpoints>);
    goto L25(r24);
  D4():
    deopt 17 [c7, r20];
  D6():
    deopt 24 [r22];
  D7():
    deopt 31 [ret_selection1];
  L103():
    goto L22(c7, r20);
  L107():
    goto L24();
  L111():
    ret_selection2 = force? ret_selection1;
    checkMissing(ret_selection2);
    c17 = `as.logical`(ret_selection2);
    if c17 then L112() else L26(c17);
  L26(c19):
    st `ret.selection` = c19;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L115() else L116();
  L112():
    nrpoints7 = ld nrpoints;
    check L113() else D8();
  D8():
    deopt 33 [c17, nrpoints7];
  L27(r29):
    r31 = `!`(r29);
    c23 = `as.logical`(r31);
    if c23 then L117() else L28();
  L113():
    nrpoints8 = force? nrpoints7;
    checkMissing(nrpoints8);
    r27 = `>`(nrpoints8, 0.0);
    c20 = `as.logical`(r27);
    c21 = `&&`(c17, c20);
    goto L26(c21);
  L115():
    missing = ldf missing in base;
    r30 = dyn missing(<sym x>);
    goto L27(r30);
  L116():
    r28 = dyn base4(<sym x>);
    goto L27(r28);
  L28():
    goto L29(NULL);
  L29(r37):
    st xlabel = r37;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L121() else L122();
  L117():
    deparse1 = ldf deparse1;
    check L118() else D9();
  D9():
    deopt 44 [];
  L30(r39):
    r41 = `!`(r39);
    c24 = `as.logical`(r41);
    if c24 then L123() else L31();
  L118():
    p6 = prom<V +>{
      sym5 = ldf substitute;
      base5 = ldf substitute in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      substitute = ldf substitute in base;
      r34 = dyn substitute(<sym x>);
      goto L0(r34);
    L2():
      r32 = dyn base5(<sym x>);
      goto L0(r32);
    };
    r36 = dyn deparse1(p6);
    check L119() else D10();
  L121():
    missing1 = ldf missing in base;
    r40 = dyn missing1(<sym y>);
    goto L30(r40);
  L122():
    r38 = dyn base6(<sym y>);
    goto L30(r38);
  D10():
    deopt 46 [r36];
  L31():
    goto L32(NULL);
  L32(r47):
    st ylabel = r47;
    xy_coords = ldf `xy.coords`;
    check L127() else D13();
  L119():
    goto L29(r36);
  L123():
    deparse2 = ldf deparse1;
    check L124() else D11();
  D11():
    deopt 55 [];
  D13():
    deopt 62 [];
  L124():
    p7 = prom<V +>{
      sym7 = ldf substitute;
      base7 = ldf substitute in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      substitute1 = ldf substitute in base;
      r44 = dyn substitute1(<sym y>);
      goto L0(r44);
    L2():
      r42 = dyn base7(<sym y>);
      goto L0(r42);
    };
    r46 = dyn deparse2(p7);
    check L125() else D12();
  L127():
    p8 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p9 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p10 = prom<V +>{
      xlabel = ld xlabel;
      xlabel1 = force? xlabel;
      checkMissing(xlabel1);
      return xlabel1;
    };
    p11 = prom<V +>{
      ylabel = ld ylabel;
      ylabel1 = force? ylabel;
      checkMissing(ylabel1);
      return ylabel1;
    };
    r52 = dyn xy_coords(p8, p9, p10, p11);
    check L128() else D14();
  D12():
    deopt 57 [r46];
  D14():
    deopt 67 [r52];
  L125():
    goto L32(r46);
  L128():
    st xy = r52;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L129() else L130();
  L33(r54):
    c26 = `as.logical`(r54);
    if c26 then L132() else L34();
  L129():
    xlab1 = ld xlab;
    check L131() else D15();
  L130():
    r53 = dyn base8(<sym xlab>);
    goto L33(r53);
  D15():
    deopt 70 [xlab1];
  L34():
    goto L35();
  L35():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L139() else L140();
  L131():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c25 = `==`(xlab2, NULL);
    goto L33(c25);
  L132():
    xy = ld xy;
    check L133() else D16();
  D16():
    deopt 73 [xy];
  L36(r57):
    c29 = `as.logical`(r57);
    if c29 then L142() else L37();
  L133():
    xy1 = force? xy;
    checkMissing(xy1);
    c27 = `is.object`(xy1);
    if c27 then L135() else L136(xy1);
  L139():
    ylab1 = ld ylab;
    check L141() else D17();
  L140():
    r56 = dyn base9(<sym ylab>);
    goto L36(r56);
  D17():
    deopt 80 [ylab1];
  L37():
    goto L38();
  L38():
    cbind = ldf cbind;
    check L149() else D19();
  L134(dx1):
    st xlab = dx1;
    goto L35();
  L135():
    dr = tryDispatchBuiltin.1("$", xy1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L137() else L136(dr);
  L136(xy3):
    r55 = `$`(xy3, <sym xlab>);
    goto L134(r55);
  L141():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c28 = `==`(ylab2, NULL);
    goto L36(c28);
  L142():
    xy4 = ld xy;
    check L143() else D18();
  D18():
    deopt 83 [xy4];
  D19():
    deopt 90 [];
  L137():
    dx = getTryDispatchBuiltinValue(dr);
    goto L134(dx);
  L143():
    xy5 = force? xy4;
    checkMissing(xy5);
    c30 = `is.object`(xy5);
    if c30 then L145() else L146(xy5);
  L149():
    p12 = prom<V +>{
      xy8 = ld xy;
      xy9 = force? xy8;
      checkMissing(xy9);
      c31 = `is.object`(xy9);
      if c31 then L1() else L2(xy9);
    L0(dx7):
      return dx7;
    L1():
      dr4 = tryDispatchBuiltin.1("$", xy9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xy11):
      r59 = `$`(xy11, <sym x>);
      goto L0(r59);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    p13 = prom<V +>{
      xy12 = ld xy;
      xy13 = force? xy12;
      checkMissing(xy13);
      c32 = `is.object`(xy13);
      if c32 then L1() else L2(xy13);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", xy13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(xy15):
      r61 = `$`(xy15, <sym y>);
      goto L0(r61);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r63 = dyn cbind(p12, p13);
    check L150() else D20();
  D20():
    deopt 93 [r63];
  L144(dx4):
    st ylab = dx4;
    goto L38();
  L145():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L147() else L146(dr2);
  L146(xy7):
    r58 = `$`(xy7, <sym ylab>);
    goto L144(r58);
  L150():
    c33 = `is.object`(r63);
    if c33 then L151() else L152(r63);
  L39(dx11):
    st x = dx11;
    ret_selection3 = ld `ret.selection`;
    check L170() else D25();
  L147():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L144(dx3);
  L151():
    dr8 = tryDispatchBuiltin.1("[", r63);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L153() else L152(dr8);
  L152(r65):
    sym10 = ldf `is.finite`;
    base10 = ldf `is.finite` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L154() else L155();
  D25():
    deopt 115 [ret_selection3];
  L40(r69, r70):
    sym11 = ldf `is.finite`;
    base11 = ldf `is.finite` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L162() else L163();
  L153():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L39(dx10);
  L154():
    xy16 = ld xy;
    check L156() else D21();
  L155():
    r68 = dyn base10(<lang `$`(xy, x)>);
    goto L40(r65, r68);
  L170():
    ret_selection4 = force? ret_selection3;
    checkMissing(ret_selection4);
    c36 = `as.logical`(ret_selection4);
    if c36 then L171() else L42();
  D21():
    deopt 96 [r65, xy16];
  L41(r83, r84):
    r95 = `&&`(r83, r84);
    st I = r95;
    __ = ldf `[` in base;
    r96 = dyn __(r63, r95, <missing>, FALSE);
    goto L39(r96);
  L42():
    goto L43();
  L43():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L175() else L176();
  L156():
    xy17 = force? xy16;
    checkMissing(xy17);
    c34 = `is.object`(xy17);
    if c34 then L158() else L159(r65, xy17);
  L162():
    xy20 = ld xy;
    check L164() else D23();
  L163():
    r81 = dyn base11(<lang `$`(xy, y)>);
    goto L41(r70, r81);
  L171():
    which = ldf which;
    check L172() else D26();
  D23():
    deopt 102 [r69, r70, xy20];
  D26():
    deopt 118 [];
  L44(r101):
    r103 = `!`(r101);
    c37 = `as.logical`(r103);
    if c37 then L177() else L45();
  L157(r74, dx13):
    is_finite = ldf `is.finite` in base;
    r76 = dyn is_finite(dx13);
    check L161() else D22();
  L158():
    dr10 = tryDispatchBuiltin.1("$", xy17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L160() else L159(r65, dr10);
  L159(r72, xy19):
    r75 = `$`(xy19, <sym x>);
    goto L157(r72, r75);
  L164():
    xy21 = force? xy20;
    checkMissing(xy21);
    c35 = `is.object`(xy21);
    if c35 then L166() else L167(r69, r70, xy21);
  L172():
    p14 = prom<V +>{
      I = ld I;
      I1 = force? I;
      checkMissing(I1);
      return I1;
    };
    r98 = dyn which(p14);
    check L173() else D27();
  L175():
    missing2 = ldf missing in base;
    r102 = dyn missing2(<sym xlim>);
    goto L44(r102);
  L176():
    r100 = dyn base12(<sym xlim>);
    goto L44(r100);
  D22():
    deopt 100 [r74, r76];
  D27():
    deopt 120 [r98];
  L45():
    sym18 = ldf range;
    base18 = ldf range in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L209() else L210();
  L54():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L216() else L217();
  L160():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L157(r65, dx12);
  L161():
    goto L40(r74, r76);
  L165(r91, r92, dx15):
    is_finite1 = ldf `is.finite` in base;
    r94 = dyn is_finite1(dx15);
    check L169() else D24();
  L166():
    dr12 = tryDispatchBuiltin.1("$", xy21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L168() else L167(r69, r70, dr12);
  L167(r87, r88, xy23):
    r93 = `$`(xy23, <sym y>);
    goto L165(r87, r88, r93);
  L173():
    st iS = r98;
    goto L43();
  L177():
    stopifnot = ldf stopifnot;
    check L178() else D28();
  D24():
    deopt 106 [r91, r92, r94];
  D28():
    deopt 129 [];
  L55(r143):
    st xlim = r143;
    goto L54();
  L57(r147):
    r149 = `!`(r147);
    c44 = `as.logical`(r149);
    if c44 then L218() else L58();
  L168():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L165(r69, r70, dx14);
  L169():
    goto L41(r92, r94);
  L178():
    p15 = prom<V +>{
      sym13 = ldf `is.numeric`;
      base13 = ldf `is.numeric` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      is_numeric1 = ldf `is.numeric` in base;
      r106 = dyn is_numeric1(xlim2);
      goto L0(r106);
    L2():
      r104 = dyn base13(<sym xlim>);
      goto L0(r104);
    };
    p16 = prom<V +>{
      sym14 = ldf length;
      base14 = ldf length in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r109):
      r111 = `==`(r109, 2.0);
      return r111;
    L1():
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      length1 = ldf length in base;
      r110 = dyn length1(xlim4);
      goto L0(r110);
    L2():
      r108 = dyn base14(<sym xlim>);
      goto L0(r108);
    };
    p17 = prom<V +>{
      sym15 = ldf `is.finite`;
      base15 = ldf `is.finite` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      xlim5 = ld xlim;
      xlim6 = force? xlim5;
      checkMissing(xlim6);
      is_finite2 = ldf `is.finite` in base;
      r115 = dyn is_finite2(xlim6);
      goto L0(r115);
    L2():
      r113 = dyn base15(<sym xlim>);
      goto L0(r113);
    };
    r117 = dyn stopifnot(p15, p16, p17);
    check L179() else D29();
  L209():
    x29 = ld x;
    check L211() else D40();
  L210():
    r142 = dyn base18(<lang `[`(x, , 1.0)>);
    goto L55(r142);
  L216():
    missing3 = ldf missing in base;
    r148 = dyn missing3(<sym ylim>);
    goto L57(r148);
  L217():
    r146 = dyn base19(<sym ylim>);
    goto L57(r146);
  D29():
    deopt 133 [r117];
  D40():
    deopt 179 [x29];
  L58():
    sym25 = ldf range;
    base25 = ldf range in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L250() else L251();
  L67():
    ___ = ldf `:::`;
    check L257() else D56();
  L179():
    x3 = ld x;
    check L180() else D30();
  L211():
    x30 = force? x29;
    checkMissing(x30);
    c43 = `is.object`(x30);
    if c43 then L212() else L213();
  L218():
    stopifnot1 = ldf stopifnot;
    check L219() else D42();
  D30():
    deopt 134 [x3];
  D42():
    deopt 193 [];
  D56():
    deopt 253 [];
  L56(dx30):
    range = ldf range in base;
    r145 = dyn range(dx30);
    check L215() else D41();
  L68(r189):
    st ylim = r189;
    goto L67();
  L180():
    x4 = force? x3;
    checkMissing(x4);
    c38 = `is.object`(x4);
    if c38 then L181() else L182(x4);
  L212():
    dr22 = tryDispatchBuiltin.1("[", x30);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L214() else L213();
  L213():
    __5 = ldf `[` in base;
    r144 = dyn __5(x30, <missing>, 1.0);
    goto L56(r144);
  L219():
    p18 = prom<V +>{
      sym20 = ldf `is.numeric`;
      base20 = ldf `is.numeric` in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r151):
      return r151;
    L1():
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      is_numeric2 = ldf `is.numeric` in base;
      r152 = dyn is_numeric2(ylim2);
      goto L0(r152);
    L2():
      r150 = dyn base20(<sym ylim>);
      goto L0(r150);
    };
    p19 = prom<V +>{
      sym21 = ldf length;
      base21 = ldf length in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r155):
      r157 = `==`(r155, 2.0);
      return r157;
    L1():
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      length2 = ldf length in base;
      r156 = dyn length2(ylim4);
      goto L0(r156);
    L2():
      r154 = dyn base21(<sym ylim>);
      goto L0(r154);
    };
    p20 = prom<V +>{
      sym22 = ldf `is.finite`;
      base22 = ldf `is.finite` in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r160):
      return r160;
    L1():
      ylim5 = ld ylim;
      ylim6 = force? ylim5;
      checkMissing(ylim6);
      is_finite3 = ldf `is.finite` in base;
      r161 = dyn is_finite3(ylim6);
      goto L0(r161);
    L2():
      r159 = dyn base22(<sym ylim>);
      goto L0(r159);
    };
    r163 = dyn stopifnot1(p18, p19, p20);
    check L220() else D43();
  L250():
    x59 = ld x;
    check L252() else D54();
  L251():
    r188 = dyn base25(<lang `[`(x, , 2.0)>);
    goto L68(r188);
  L257():
    r192 = dyn ___("grDevices", ".smoothScatterCalcDensity");
    check L258() else D57();
  D41():
    deopt 186 [r145];
  D43():
    deopt 197 [r163];
  D54():
    deopt 243 [x59];
  D57():
    deopt 256 [r192];
  L46(dx17):
    st x = dx17;
    ret_selection5 = ld `ret.selection`;
    check L200() else D37();
  L181():
    dr14 = tryDispatchBuiltin.1("[", x4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L183() else L182(dr14);
  L182(x6):
    sym16 = ldf min;
    base16 = ldf min in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L184() else L185();
  L214():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L56(dx29);
  L215():
    goto L55(r145);
  L220():
    x33 = ld x;
    check L221() else D44();
  L252():
    x60 = force? x59;
    checkMissing(x60);
    c50 = `is.object`(x60);
    if c50 then L253() else L254();
  L258():
    checkFun.0(r192);
    r193 = r192 as cls;
    p21 = prom<V +>{
      x63 = ld x;
      x64 = force? x63;
      checkMissing(x64);
      return x64;
    };
    p22 = prom<V +>{
      nbin1 = ld nbin;
      nbin2 = force? nbin1;
      checkMissing(nbin2);
      return nbin2;
    };
    p23 = prom<V +>{
      bandwidth1 = ld bandwidth;
      bandwidth2 = force? bandwidth1;
      checkMissing(bandwidth2);
      return bandwidth2;
    };
    r197 = dyn r193(p21, p22, p23);
    check L259() else D58();
  D37():
    deopt 167 [ret_selection5];
  D44():
    deopt 198 [x33];
  D58():
    deopt 261 [r197];
  L47(x9, r119):
    x10 = ld x;
    check L188() else D33();
  L69(dx45):
    range1 = ldf range in base;
    r191 = dyn range1(dx45);
    check L256() else D55();
  L183():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L46(dx16);
  L184():
    xlim7 = ld xlim;
    check L186() else D31();
  L185():
    r118 = dyn base16(<sym xlim>);
    goto L47(x6, r118);
  L200():
    ret_selection6 = force? ret_selection5;
    checkMissing(ret_selection6);
    c41 = `as.logical`(ret_selection6);
    if c41 then L201() else L51();
  L221():
    x34 = force? x33;
    checkMissing(x34);
    c45 = `is.object`(x34);
    if c45 then L222() else L223(x34);
  L253():
    dr32 = tryDispatchBuiltin.1("[", x60);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L255() else L254();
  L254():
    __10 = ldf `[` in base;
    r190 = dyn __10(x60, <missing>, 2.0);
    goto L69(r190);
  L259():
    st map = r197;
    map = ld map;
    check L260() else D59();
  D31():
    deopt 138 [x6, xlim7];
  D33():
    deopt 141 [x9, r119, x10];
  D55():
    deopt 250 [r191];
  D59():
    deopt 263 [map];
  L51():
    goto L53(NULL);
  L53(dx27):
    goto L54();
  L59(dx32):
    st x = dx32;
    ret_selection7 = ld `ret.selection`;
    check L241() else D51();
  L186():
    xlim8 = force? xlim7;
    checkMissing(xlim8);
    min = ldf min in base;
    r120 = dyn min(xlim8);
    check L187() else D32();
  L188():
    x11 = force? x10;
    checkMissing(x11);
    c39 = `is.object`(x11);
    if c39 then L189() else L190(x9, r119);
  L201():
    iS = ld iS;
    check L202() else D38();
  L222():
    dr24 = tryDispatchBuiltin.1("[", x34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L224() else L223(dr24);
  L223(x36):
    sym23 = ldf min;
    base23 = ldf min in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L225() else L226();
  L255():
    dx44 = getTryDispatchBuiltinValue(dr32);
    goto L69(dx44);
  L256():
    goto L68(r191);
  L260():
    map1 = force? map;
    checkMissing(map1);
    c51 = `is.object`(map1);
    if c51 then L262() else L263(map1);
  D32():
    deopt 141 [x6, r120];
  D38():
    deopt 169 [iS];
  D51():
    deopt 231 [ret_selection7];
  L48(x17, r124, dx19):
    r126 = `<=`(r124, dx19);
    x18 = ld x;
    check L192() else D34();
  L60(x39, r165):
    x40 = ld x;
    check L229() else D47();
  L187():
    goto L47(x6, r120);
  L189():
    dr16 = tryDispatchBuiltin.1("[", x11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L191() else L190(x9, r119);
  L190(x14, r122):
    __1 = ldf `[` in base;
    r125 = dyn __1(x11, <missing>, 1.0);
    goto L48(x14, r122, r125);
  L202():
    iS1 = force? iS;
    checkMissing(iS1);
    c42 = `is.object`(iS1);
    if c42 then L203() else L204(iS1);
  L224():
    dx31 = getTryDispatchBuiltinValue(dr24);
    goto L59(dx31);
  L225():
    ylim7 = ld ylim;
    check L227() else D45();
  L226():
    r164 = dyn base23(<sym ylim>);
    goto L60(x36, r164);
  L241():
    ret_selection8 = force? ret_selection7;
    checkMissing(ret_selection8);
    c48 = `as.logical`(ret_selection8);
    if c48 then L242() else L64();
  L261(dx47):
    st xm = dx47;
    map4 = ld map;
    check L265() else D60();
  L262():
    dr34 = tryDispatchBuiltin.1("$", map1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L264() else L263(dr34);
  L263(map3):
    r198 = `$`(map3, <sym x1>);
    goto L261(r198);
  D34():
    deopt 147 [x17, r126, x18];
  D45():
    deopt 202 [x36, ylim7];
  D47():
    deopt 205 [x39, r165, x40];
  D60():
    deopt 267 [map4];
  L52(dx26):
    st iS = dx26;
    goto L53(dx26);
  L64():
    goto L66(NULL);
  L66(dx42):
    goto L67();
  L191():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L48(x9, r119, dx18);
  L192():
    x19 = force? x18;
    checkMissing(x19);
    c40 = `is.object`(x19);
    if c40 then L193() else L194(x17, r126);
  L203():
    dr20 = tryDispatchBuiltin.1("[", iS1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L205() else L204(dr20);
  L204(iS3):
    I2 = ld I;
    check L206() else D39();
  L227():
    ylim8 = force? ylim7;
    checkMissing(ylim8);
    min1 = ldf min in base;
    r166 = dyn min1(ylim8);
    check L228() else D46();
  L229():
    x41 = force? x40;
    checkMissing(x41);
    c46 = `is.object`(x41);
    if c46 then L230() else L231(x39, r165);
  L242():
    iS4 = ld iS;
    check L243() else D52();
  L264():
    dx46 = getTryDispatchBuiltinValue(dr34);
    goto L261(dx46);
  L265():
    map5 = force? map4;
    checkMissing(map5);
    c52 = `is.object`(map5);
    if c52 then L267() else L268(map5);
  D39():
    deopt 171 [iS3, I2];
  D46():
    deopt 205 [x36, r166];
  D52():
    deopt 233 [iS4];
  L49(x25, r130, dx21):
    sym17 = ldf max;
    base17 = ldf max in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L196() else L197();
  L61(x47, r170, dx34):
    r172 = `<=`(r170, dx34);
    x48 = ld x;
    check L233() else D48();
  L193():
    dr18 = tryDispatchBuiltin.1("[", x19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L195() else L194(x17, r126);
  L194(x22, r128):
    __2 = ldf `[` in base;
    r131 = dyn __2(x19, <missing>, 1.0);
    goto L49(x22, r128, r131);
  L205():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L52(dx25);
  L206():
    I3 = force? I2;
    __4 = ldf `[` in base;
    r141 = dyn __4(iS3, I3);
    goto L52(r141);
  L228():
    goto L60(x36, r166);
  L230():
    dr26 = tryDispatchBuiltin.1("[", x41);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L232() else L231(x39, r165);
  L231(x44, r168):
    __6 = ldf `[` in base;
    r171 = dyn __6(x41, <missing>, 2.0);
    goto L61(x44, r168, r171);
  L243():
    iS5 = force? iS4;
    checkMissing(iS5);
    c49 = `is.object`(iS5);
    if c49 then L244() else L245(iS5);
  L266(dx49):
    st ym = dx49;
    map8 = ld map;
    check L270() else D61();
  L267():
    dr36 = tryDispatchBuiltin.1("$", map5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L269() else L268(dr36);
  L268(map7):
    r199 = `$`(map7, <sym x2>);
    goto L266(r199);
  D48():
    deopt 211 [x47, r172, x48];
  D61():
    deopt 271 [map8];
  L50(r135, dx24, r136):
    r138 = `<=`(dx24, r136);
    r139 = `&&`(r135, r138);
    st I = r139;
    __3 = ldf `[` in base;
    r140 = dyn __3(x4, r139, <missing>, FALSE);
    goto L46(r140);
  L65(dx41):
    st iS = dx41;
    goto L66(dx41);
  L195():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L49(x17, r126, dx20);
  L196():
    xlim9 = ld xlim;
    check L198() else D35();
  L197():
    r134 = dyn base17(<sym xlim>);
    goto L50(r130, dx21, r134);
  L232():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L61(x39, r165, dx33);
  L233():
    x49 = force? x48;
    checkMissing(x49);
    c47 = `is.object`(x49);
    if c47 then L234() else L235(x47, r172);
  L244():
    dr30 = tryDispatchBuiltin.1("[", iS5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L246() else L245(dr30);
  L245(iS7):
    I4 = ld I;
    check L247() else D53();
  L269():
    dx48 = getTryDispatchBuiltinValue(dr36);
    goto L266(dx48);
  L270():
    map9 = force? map8;
    checkMissing(map9);
    c53 = `is.object`(map9);
    if c53 then L272() else L273(map9);
  D35():
    deopt 154 [x25, r130, dx21, xlim9];
  D53():
    deopt 235 [iS7, I4];
  L62(x55, r176, dx36):
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L237() else L238();
  L198():
    xlim10 = force? xlim9;
    checkMissing(xlim10);
    max = ldf max in base;
    r137 = dyn max(xlim10);
    check L199() else D36();
  L234():
    dr28 = tryDispatchBuiltin.1("[", x49);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L236() else L235(x47, r172);
  L235(x52, r174):
    __7 = ldf `[` in base;
    r177 = dyn __7(x49, <missing>, 2.0);
    goto L62(x52, r174, r177);
  L246():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L65(dx40);
  L247():
    I5 = force? I4;
    __9 = ldf `[` in base;
    r187 = dyn __9(iS7, I5);
    goto L65(r187);
  L271(dx51):
    st dens = dx51;
    transformation1 = ldf transformation;
    check L275() else D62();
  L272():
    dr38 = tryDispatchBuiltin.1("$", map9);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L274() else L273(dr38);
  L273(map11):
    r200 = `$`(map11, <sym fhat>);
    goto L271(r200);
  D36():
    deopt 157 [x25, r130, dx21, r137];
  D62():
    deopt 276 [];
  L63(r181, dx39, r182):
    r184 = `<=`(dx39, r182);
    r185 = `&&`(r181, r184);
    st I = r185;
    __8 = ldf `[` in base;
    r186 = dyn __8(x34, r185, <missing>, FALSE);
    goto L59(r186);
  L199():
    goto L50(r130, dx21, r137);
  L236():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L62(x47, r172, dx35);
  L237():
    ylim9 = ld ylim;
    check L239() else D49();
  L238():
    r180 = dyn base24(<sym ylim>);
    goto L63(r176, dx36, r180);
  L274():
    dx50 = getTryDispatchBuiltinValue(dr38);
    goto L271(dx50);
  L275():
    p24 = prom<V +>{
      dens = ld dens;
      dens1 = force? dens;
      checkMissing(dens1);
      return dens1;
    };
    r202 = dyn transformation1(p24);
    check L276() else D63();
  D49():
    deopt 218 [x55, r176, dx36, ylim9];
  D63():
    deopt 278 [r202];
  L239():
    ylim10 = force? ylim9;
    checkMissing(ylim10);
    max1 = ldf max in base;
    r183 = dyn max1(ylim10);
    check L240() else D50();
  L276():
    l = ld dens;
    c54 = `is.object`(l);
    if c54 then L277() else L278(r202);
  D50():
    deopt 221 [x55, r176, dx36, r183];
  L70(dx53):
    st dens = dx53;
    image = ldf image;
    check L280() else D64();
  L240():
    goto L63(r176, dx36, r183);
  L277():
    dr40 = tryDispatchBuiltin.0("[<-", l, r202);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L279() else L278(r202);
  L278(r204):
    ___1 = ldf `[<-` in base;
    r207 = dyn ___1(l, <missing>, r202);
    goto L70(r207);
  D64():
    deopt 285 [];
  L279():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L70(dx52);
  L280():
    p25 = prom<V +>{
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      return xm1;
    };
    p26 = prom<V +>{
      ym = ld ym;
      ym1 = force? ym;
      checkMissing(ym1);
      return ym1;
    };
    p27 = prom<V +>{
      dens2 = ld dens;
      dens3 = force? dens2;
      checkMissing(dens3);
      return dens3;
    };
    p28 = prom<V +>{
      colramp1 = ldf colramp;
      r211 = dyn colramp1(256.0);
      return r211;
    };
    p29 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p30 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p31 = prom<V +>{
      xlim11 = ld xlim;
      xlim12 = force? xlim11;
      checkMissing(xlim12);
      return xlim12;
    };
    p32 = prom<V +>{
      ylim11 = ld ylim;
      ylim12 = force? ylim11;
      checkMissing(ylim12);
      return ylim12;
    };
    p33 = prom<V +>{
      xaxs1 = ld xaxs;
      xaxs2 = force? xaxs1;
      checkMissing(xaxs2);
      return xaxs2;
    };
    p34 = prom<V +>{
      yaxs1 = ld yaxs;
      yaxs2 = force? yaxs1;
      checkMissing(yaxs2);
      return yaxs2;
    };
    ddd1 = ld `...`;
    r219 = dyn image[, , z, col, xlab, ylab, xlim, ylim, xaxs, yaxs, `...`](p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, ddd1);
    check L281() else D65();
  D65():
    deopt 305 [r219];
  L281():
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L282() else L283();
  L71(r221):
    r222 = `!`(r221);
    c56 = `as.logical`(r222);
    if c56 then L285() else L72();
  L282():
    postPlotHook1 = ld postPlotHook;
    check L284() else D66();
  L283():
    r220 = dyn base26(<sym postPlotHook>);
    goto L71(r220);
  D66():
    deopt 307 [postPlotHook1];
  L72():
    goto L73();
  L73():
    nrpoints9 = ld nrpoints;
    check L289() else D69();
  L284():
    postPlotHook2 = force? postPlotHook1;
    checkMissing(postPlotHook2);
    c55 = `==`(postPlotHook2, NULL);
    goto L71(c55);
  L285():
    postPlotHook3 = ldf postPlotHook;
    check L286() else D67();
  D67():
    deopt 312 [];
  D69():
    deopt 316 [nrpoints9];
  L286():
    r223 = dyn postPlotHook3();
    check L287() else D68();
  L289():
    nrpoints10 = force? nrpoints9;
    checkMissing(nrpoints10);
    r225 = `>`(nrpoints10, 0.0);
    c57 = `as.logical`(r225);
    if c57 then L290() else L74();
  D68():
    deopt 313 [r223];
  L74():
    invisible.0();
    popenv;
    return NULL;
  L287():
    goto L73();
  L290():
    sym27 = ldf min;
    base27 = ldf min in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L291() else L292();
  L75(r227):
    st nrpoints = r227;
    stopifnot2 = ldf stopifnot;
    check L299() else D74();
  L291():
    nrow = ldf nrow;
    check L293() else D70();
  L292():
    r226 = dyn base27(<lang nrow(x)>, <lang ceiling(nrpoints)>);
    goto L75(r226);
  D70():
    deopt 323 [];
  D74():
    deopt 334 [];
  L293():
    p35 = prom<V +>{
      x65 = ld x;
      x66 = force? x65;
      checkMissing(x66);
      return x66;
    };
    r229 = dyn nrow(p35);
    check L294() else D71();
  L299():
    p37 = prom<V +>{
      sym29 = ldf length;
      base29 = ldf length in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r235):
      st nx = r235;
      nrow1 = ldf nrow;
      p36 = prom<V +>{
        dens4 = ld dens;
        dens5 = force? dens4;
        checkMissing(dens5);
        return dens5;
      };
      r238 = dyn nrow1(p36);
      r239 = `==`(r235, r238);
      return r239;
    L1():
      xm2 = ld xm;
      xm3 = force? xm2;
      checkMissing(xm3);
      length3 = ldf length in base;
      r236 = dyn length3(xm3);
      goto L0(r236);
    L2():
      r234 = dyn base29(<sym xm>);
      goto L0(r234);
    };
    p39 = prom<V +>{
      sym30 = ldf length;
      base30 = ldf length in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r242):
      st ny = r242;
      ncol = ldf ncol;
      p38 = prom<V +>{
        dens6 = ld dens;
        dens7 = force? dens6;
        checkMissing(dens7);
        return dens7;
      };
      r245 = dyn ncol(p38);
      r246 = `==`(r242, r245);
      return r246;
    L1():
      ym2 = ld ym;
      ym3 = force? ym2;
      checkMissing(ym3);
      length4 = ldf length in base;
      r243 = dyn length4(ym3);
      goto L0(r243);
    L2():
      r241 = dyn base30(<sym ym>);
      goto L0(r241);
    };
    r248 = dyn stopifnot2(p37, p39);
    check L300() else D75();
  D71():
    deopt 325 [r229];
  D75():
    deopt 337 [r248];
  L294():
    sym28 = ldf ceiling;
    base28 = ldf ceiling in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L295() else L296();
  L300():
    sym31 = ldf `as.integer`;
    base31 = ldf `as.integer` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L301() else L302();
  L76(r231):
    min2 = ldf min in base;
    r233 = dyn min2(r229, r231);
    check L298() else D73();
  L77(r252, r253):
    r296 = `+`(r252, r253);
    st ixm = r296;
    sym32 = ldf `as.integer`;
    base32 = ldf `as.integer` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L322() else L323();
  L295():
    nrpoints11 = ld nrpoints;
    check L297() else D72();
  L296():
    r230 = dyn base28(<sym nrpoints>);
    goto L76(r230);
  L301():
    nx = ld nx;
    check L303() else D76();
  L302():
    r251 = dyn base31(<lang `/`(`*`(`(`(`-`(nx, 1.0)), `(`(`-`(`[`(x, , 1.0), `[`(xm, 1.0)))), `(`(`-`(`[`(xm, nx), `[`(xm, 1.0))))>);
    goto L77(1, r251);
  D72():
    deopt 327 [nrpoints11];
  D73():
    deopt 331 [r233];
  D76():
    deopt 341 [1, nx];
  L82(r300, r301):
    r344 = `+`(r300, r301);
    st iym = r344;
    order = ldf order;
    check L343() else D90();
  L297():
    nrpoints12 = force? nrpoints11;
    checkMissing(nrpoints12);
    r232 = ceiling(nrpoints12);
    goto L76(r232);
  L298():
    goto L75(r233);
  L303():
    nx1 = force? nx;
    checkMissing(nx1);
    r254 = `-`(nx1, 1.0);
    x67 = ld x;
    check L304() else D77();
  L322():
    ny = ld ny;
    check L324() else D83();
  L323():
    r299 = dyn base32(<lang `/`(`*`(`(`(`-`(ny, 1.0)), `(`(`-`(`[`(x, , 2.0), `[`(ym, 1.0)))), `(`(`-`(`[`(ym, ny), `[`(ym, 1.0))))>);
    goto L82(1, r299);
  D77():
    deopt 344 [1, r254, x67];
  D83():
    deopt 373 [1, ny];
  D90():
    deopt 403 [];
  L304():
    x68 = force? x67;
    checkMissing(x68);
    c58 = `is.object`(x68);
    if c58 then L305() else L306(1, r254);
  L324():
    ny1 = force? ny;
    checkMissing(ny1);
    r302 = `-`(ny1, 1.0);
    x71 = ld x;
    check L325() else D84();
  L343():
    p42 = prom<V +>{
      dens8 = ld dens;
      dens9 = force? dens8;
      checkMissing(dens9);
      c66 = `is.object`(dens9);
      if c66 then L1() else L2(dens9);
    L0(dx87):
      return dx87;
    L1():
      dr58 = tryDispatchBuiltin.1("[", dens9);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(dens11):
      cbind1 = ldf cbind;
      p40 = prom<V +>{
        ixm = ld ixm;
        ixm1 = force? ixm;
        checkMissing(ixm1);
        return ixm1;
      };
      p41 = prom<V +>{
        iym = ld iym;
        iym1 = force? iym;
        checkMissing(iym1);
        return iym1;
      };
      r347 = dyn cbind1(p40, p41);
      __19 = ldf `[` in base;
      r348 = dyn __19(dens11, r347);
      goto L0(r348);
    L3():
      dx86 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx86);
    };
    r350 = dyn order(p42);
    check L344() else D91();
  D84():
    deopt 376 [1, r302, x71];
  D91():
    deopt 405 [r350];
  L78(r261, r262, dx55):
    xm4 = ld xm;
    check L308() else D78();
  L305():
    dr42 = tryDispatchBuiltin.1("[", x68);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L307() else L306(1, r254);
  L306(r257, r258):
    __11 = ldf `[` in base;
    r263 = dyn __11(x68, <missing>, 1.0);
    goto L78(r257, r258, r263);
  L325():
    x72 = force? x71;
    checkMissing(x72);
    c62 = `is.object`(x72);
    if c62 then L326() else L327(1, r302);
  L344():
    c67 = `is.object`(r350);
    if c67 then L345() else L346(r350);
  D78():
    deopt 349 [r261, r262, dx55, xm4];
  L83(r309, r310, dx71):
    ym4 = ld ym;
    check L329() else D85();
  L87(dx89):
    st sel = dx89;
    x75 = ld x;
    check L351() else D93();
  L307():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L78(1, r254, dx54);
  L308():
    xm5 = force? xm4;
    checkMissing(xm5);
    c59 = `is.object`(xm5);
    if c59 then L309() else L310(r261, r262, dx55, xm5);
  L326():
    dr50 = tryDispatchBuiltin.1("[", x72);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L328() else L327(1, r302);
  L327(r305, r306):
    __15 = ldf `[` in base;
    r311 = dyn __15(x72, <missing>, 2.0);
    goto L83(r305, r306, r311);
  L345():
    dr60 = tryDispatchBuiltin.1("[", r350);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L347() else L346(dr60);
  L346(r352):
    sym33 = ldf seq_len;
    base33 = ldf seq_len in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L348() else L349();
  D85():
    deopt 381 [r309, r310, dx71, ym4];
  D93():
    deopt 412 [x75];
  L79(r270, r271, dx60, dx61):
    r273 = `-`(dx60, dx61);
    r274 = `*`(r271, r273);
    xm8 = ld xm;
    check L312() else D79();
  L88(r356, r357):
    __20 = ldf `[` in base;
    r359 = dyn __20(r356, r357);
    goto L87(r359);
  L309():
    dr44 = tryDispatchBuiltin.1("[", xm5);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L311() else L310(r261, r262, dx55, dr44);
  L310(r266, r267, dx57, xm7):
    __12 = ldf `[` in base;
    r272 = dyn __12(xm7, 1.0);
    goto L79(r266, r267, dx57, r272);
  L328():
    dx70 = getTryDispatchBuiltinValue(dr50);
    goto L83(1, r302, dx70);
  L329():
    ym5 = force? ym4;
    checkMissing(ym5);
    c63 = `is.object`(ym5);
    if c63 then L330() else L331(r309, r310, dx71, ym5);
  L347():
    dx88 = getTryDispatchBuiltinValue(dr60);
    goto L87(dx88);
  L348():
    nrpoints13 = ld nrpoints;
    check L350() else D92();
  L349():
    r355 = dyn base33(<sym nrpoints>);
    goto L88(r352, r355);
  L351():
    x76 = force? x75;
    checkMissing(x76);
    c68 = `is.object`(x76);
    if c68 then L352() else L353(x76);
  D79():
    deopt 355 [r270, r274, xm8];
  D92():
    deopt 407 [r352, nrpoints13];
  L84(r318, r319, dx76, dx77):
    r321 = `-`(dx76, dx77);
    r322 = `*`(r319, r321);
    ym8 = ld ym;
    check L333() else D86();
  L89(dx91):
    st x = dx91;
    points = ldf points;
    check L356() else D95();
  L311():
    dx59 = getTryDispatchBuiltinValue(dr44);
    goto L79(r261, r262, dx55, dx59);
  L312():
    xm9 = force? xm8;
    checkMissing(xm9);
    c60 = `is.object`(xm9);
    if c60 then L313() else L314(r270, r274, xm9);
  L330():
    dr52 = tryDispatchBuiltin.1("[", ym5);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L332() else L331(r309, r310, dx71, dr52);
  L331(r314, r315, dx73, ym7):
    __16 = ldf `[` in base;
    r320 = dyn __16(ym7, 1.0);
    goto L84(r314, r315, dx73, r320);
  L350():
    nrpoints14 = force? nrpoints13;
    checkMissing(nrpoints14);
    r358 = seq_len(nrpoints14);
    goto L88(r352, r358);
  L352():
    dr62 = tryDispatchBuiltin.1("[", x76);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L354() else L353(dr62);
  L353(x78):
    sel = ld sel;
    check L355() else D94();
  D86():
    deopt 387 [r318, r322, ym8];
  D94():
    deopt 414 [x78, sel];
  D95():
    deopt 423 [];
  L80(r281, r282, dx63):
    xm12 = ld xm;
    check L317() else D81();
  L313():
    dr46 = tryDispatchBuiltin.1("[", xm9);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L315() else L314(r270, r274, dr46);
  L314(r277, r278, xm11):
    nx2 = ld nx;
    check L316() else D80();
  L332():
    dx75 = getTryDispatchBuiltinValue(dr52);
    goto L84(r309, r310, dx71, dx75);
  L333():
    ym9 = force? ym8;
    checkMissing(ym9);
    c64 = `is.object`(ym9);
    if c64 then L334() else L335(r318, r322, ym9);
  L354():
    dx90 = getTryDispatchBuiltinValue(dr62);
    goto L89(dx90);
  L355():
    sel1 = force? sel;
    __21 = ldf `[` in base;
    r360 = dyn __21(x76, sel1, <missing>, FALSE);
    goto L89(r360);
  L356():
    p43 = prom<V +>{
      x79 = ld x;
      x80 = force? x79;
      checkMissing(x80);
      return x80;
    };
    p44 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p45 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p46 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    r365 = dyn points[, pch, cex, col](p43, p44, p45, p46);
    check L357() else D96();
  D80():
    deopt 357 [r277, r278, xm11, nx2];
  D81():
    deopt 359 [r281, r282, dx63, xm12];
  D96():
    deopt 431 [r365];
  L85(r329, r330, dx79):
    ym12 = ld ym;
    check L338() else D88();
  L315():
    dx62 = getTryDispatchBuiltinValue(dr46);
    goto L80(r270, r274, dx62);
  L316():
    nx3 = force? nx2;
    __13 = ldf `[` in base;
    r283 = dyn __13(xm11, nx3);
    goto L80(r277, r278, r283);
  L317():
    xm13 = force? xm12;
    checkMissing(xm13);
    c61 = `is.object`(xm13);
    if c61 then L318() else L319(r281, r282, dx63, xm13);
  L334():
    dr54 = tryDispatchBuiltin.1("[", ym9);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L336() else L335(r318, r322, dr54);
  L335(r325, r326, ym11):
    ny2 = ld ny;
    check L337() else D87();
  L357():
    ret_selection9 = ld `ret.selection`;
    check L358() else D97();
  D87():
    deopt 389 [r325, r326, ym11, ny2];
  D88():
    deopt 391 [r329, r330, dx79, ym12];
  D97():
    deopt 432 [ret_selection9];
  L81(r290, r291, dx68, dx69):
    r293 = `-`(dx68, dx69);
    r294 = `/`(r291, r293);
    as_integer = ldf `as.integer` in base;
    r295 = dyn as_integer(r294);
    check L321() else D82();
  L318():
    dr48 = tryDispatchBuiltin.1("[", xm13);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L320() else L319(r281, r282, dx63, dr48);
  L319(r286, r287, dx65, xm15):
    __14 = ldf `[` in base;
    r292 = dyn __14(xm15, 1.0);
    goto L81(r286, r287, dx65, r292);
  L336():
    dx78 = getTryDispatchBuiltinValue(dr54);
    goto L85(r318, r322, dx78);
  L337():
    ny3 = force? ny2;
    __17 = ldf `[` in base;
    r331 = dyn __17(ym11, ny3);
    goto L85(r325, r326, r331);
  L338():
    ym13 = force? ym12;
    checkMissing(ym13);
    c65 = `is.object`(ym13);
    if c65 then L339() else L340(r329, r330, dx79, ym13);
  L358():
    ret_selection10 = force? ret_selection9;
    checkMissing(ret_selection10);
    c69 = `as.logical`(ret_selection10);
    if c69 then L359() else L90();
  D82():
    deopt 367 [r290, r295];
  L86(r338, r339, dx84, dx85):
    r341 = `-`(dx84, dx85);
    r342 = `/`(r339, r341);
    as_integer1 = ldf `as.integer` in base;
    r343 = dyn as_integer1(r342);
    check L342() else D89();
  L90():
    invisible.0();
    popenv;
    return NULL;
  L320():
    dx67 = getTryDispatchBuiltinValue(dr48);
    goto L81(r281, r282, dx63, dx67);
  L321():
    goto L77(r290, r295);
  L339():
    dr56 = tryDispatchBuiltin.1("[", ym13);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L341() else L340(r329, r330, dx79, dr56);
  L340(r334, r335, dx81, ym15):
    __18 = ldf `[` in base;
    r340 = dyn __18(ym15, 1.0);
    goto L86(r334, r335, dx81, r340);
  L359():
    iS8 = ld iS;
    check L360() else D98();
  D89():
    deopt 399 [r338, r343];
  D98():
    deopt 434 [iS8];
  L341():
    dx83 = getTryDispatchBuiltinValue(dr56);
    goto L86(r329, r330, dx79, dx83);
  L342():
    goto L82(r338, r343);
  L360():
    iS9 = force? iS8;
    checkMissing(iS9);
    c70 = `is.object`(iS9);
    if c70 then L361() else L362(iS9);
  L91(dx93):
    popenv;
    return dx93;
  L361():
    dr64 = tryDispatchBuiltin.1("[", iS9);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L363() else L362(dr64);
  L362(iS11):
    sel2 = ld sel;
    check L364() else D99();
  D99():
    deopt 436 [iS11, sel2];
  L363():
    dx92 = getTryDispatchBuiltinValue(dr64);
    goto L91(dx92);
  L364():
    sel3 = force? sel2;
    __22 = ldf `[` in base;
    r366 = dyn __22(iS11, sel3);
    goto L91(r366);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `^`(x2, 0.25);
    popenv;
    return r;
  }
}