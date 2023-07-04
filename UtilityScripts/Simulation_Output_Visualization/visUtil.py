import sys
import json
import numpy as np

def getArgs():
  indexes = False
  shoulders = False
  shldrLen = 0
  flagCnt = 1
  outpath = "output.gif"
  peds = ""
  obs = ""
  xMin = -1
  yMin = -1
  xMax = 25
  yMax = 4
  fps = 10
  idxColor = False
  pedColor = False
  obsColor = 'k'
  bckColor = 'w'
  dif = None
  difalpha = 0.1

  for arg in sys.argv[1::]:
    if arg == '-idx':
      indexes = True
      flagCnt += 1
    elif arg == '-shldr':
      shldrLen = float(sys.argv[flagCnt + 1])
      shoulders = True
      flagCnt += 2
    elif arg == '-outpath':
      outpath = sys.argv[flagCnt + 1]
      flagCnt += 2
    elif arg == '-peds':
      peds = sys.argv[flagCnt + 1]
      flagCnt += 2
    elif arg == '-obs':
      obs = sys.argv[flagCnt + 1]
      flagCnt += 2
    elif arg == '-xDim':
      dims = sys.argv[flagCnt + 1].split(',')
      xMin = float(dims[0])
      xMax = float(dims[1])
      flagCnt += 2
    elif arg == '-yDim':
      dims = sys.argv[flagCnt + 1].split(',')
      yMin = float(dims[0])
      yMax = float(dims[1])
      flagCnt += 2
    elif arg == '-fps':
      fps = float(sys.argv[flagCnt + 1])
      flagCnt += 2
    elif arg == '-idxClr':
      idxColor = True
      flagCnt += 1
    elif arg == '-pedClr':
      pedColor = True
      flagCnt += 1
    elif arg == '-obsClr':
      obsColor = sys.argv[flagCnt + 1]
      flagCnt += 2
    elif arg == '-bckClr':
      bckColor = sys.argv[flagCnt + 1]
      flagCnt += 2
    elif arg == '-dif':
      dif = sys.argv[flagCnt + 1]
      flagCnt += 2
    elif arg == '-difalpha':
      difalpha = float(sys.argv[flagCnt + 1])
      flagCnt += 2
    else:
      if (arg[0] == '-'):
        print(f'Unknown Flag: {arg}')
        exit(-1)
    

  if peds == "" or obs == "":
    print("The Flags -peds and -obs Are Required")
    exit(-1)

  return dict(
    indexes  = indexes,
    shoulders= shoulders,
    shldrLen = shldrLen,
    outpath  = outpath,
    peds     = peds,
    obs      = obs,
    xDim     = [xMin, xMax],
    yDim     = [yMin, yMax],
    fps      = fps,
    idxColor = idxColor,
    pedColor = pedColor,
    obsColor = obsColor,
    bckColor = bckColor,
    dif = dif,
    difalpha = difalpha,
  )


def getObs(obs):
  obsCoords = json.load(open(obs))
  obsX = []
  obsY = []
  for obj in obsCoords["obstacle"]:
    obsX.append(float(obj["x"]))
    obsY.append(float(obj["y"]))

  return (obsX, obsY)

def getPeds(peds):
    return json.load(open(peds))["timesteps"]


def getPoints(timestep):
  pointsX = []
  pointsY = []
  for key in timestep:
    pointsX.append(key["x"])
    pointsY.append(key["y"])

  return (pointsX, pointsY)

def makeColors(pedCoords, pedColor):
  if pedColor:
    return np.random.rand(len(pedCoords["0"]), 3)
  else:
    return [1,0.5,0]

def plotShoulders(plot, pointsX, pointsY, shldrLen, colors, ax, dif, difalpha):
  if plot:
    for index in range(0, len(pointsX)):
      x = pointsX[index]
      y = pointsY[index]
      ax.plot([x-shldrLen, x+shldrLen], [y, y], color=colors[index], linestyle='-', linewidth=0.5, alpha=difalpha if dif else 1)
      ax.plot([x, x], [y-shldrLen, y+shldrLen], color=colors[index], linestyle='-', linewidth=0.5, alpha=difalpha if dif else 1)

def plotIndexes(plot, pointsX, pointsY, idxColor, pedColors, ax, dif, difalpha):
  if plot:
    for index in range(0, len(pointsX)):
      ax.text(pointsX[index], pointsY[index], index, fontsize=5, c=pedColors[index] if idxColor else 'k', alpha=difalpha if dif else 1)

def plotPeds(pedsX, pedsY, pedColors, ax):
  return ax.scatter(pedsX, pedsY, 2, color=pedColors)

def plotObs(obsX, obsY, color, ax):
  return ax.scatter(obsX, obsY, 1, c=color)

def prepPlot(xDim, yDim, bckColor, ax):
  ax.clear()
  ax.set_xlim(xDim[0], xDim[1])
  ax.set_ylim(yDim[0], yDim[1])
  ax.autoscale(False)
  ax.set_facecolor(bckColor)

percent = 0
def printProgressBar (iteration, total, prefix="Saving", animating=False):
    if not animating:
      percent = ("{0:." + str(1) + "f}").format(100 * (iteration / float(total)))

    filledLength = int(100 * iteration // total)
    bar = '█' * filledLength + '-' * (100 - filledLength)
    print(f'\r{prefix.ljust(9, " ")} :  |{bar}| {percent}%', end = "\r")
    if iteration == total:
        print()

def plotDif(pointsX, pointsY, compX, compY, pedColors, ax, difalpha):
  difXidx = np.where(~np.equal(pointsX, compX))
  difYidx = np.where(~np.equal(pointsY, compY))

  difX = np.array(pointsX)[difXidx]
  difY = np.array(pointsY)[difXidx]
  colors = np.array(pedColors)[difXidx]

  np.append(difX, np.array(pointsX)[difYidx])
  np.append(difY, np.array(pointsY)[difYidx])
  np.append(colors, np.array(pedColors)[difYidx])

  ax.scatter(compX, compY, 2, color=pedColors, alpha=difalpha)
  return ax.scatter(difX, difY, 2, color=colors)