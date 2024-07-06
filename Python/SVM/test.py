from sklearn import datasets
import matplotlib.pyplot as plt

digits = datasets.load_digits()
dir(digits)
# digits.data[1234]
# digits.images[1234]
# digits.target[1234]
plt.imshow(digits.images[0], cmap="Greys")
plt.show()