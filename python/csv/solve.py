import matplotlib.pyplot as plt
from sklearn.datasets import load_iris
from sklearn.tree import DecisionTreeClassifier as dtc
from sklearn import tree

iris = load_iris()
#print(iris, end = '\n')



classifier = dtc()
classifier.fit(iris.data,iris.target)



print(plt.figure(figsize = (15,10)))
print(tree.plot_tree(classifier,filled = True))






#import pandas as pd
#file_path = 'Iris.xlsx'
#print(type(file_path), end = '\n')
#
##print(file_path, end = '\n')
#xls_df = pd.read_excel(file_path)
#print(type(xls_df), end = '\n')
#
#csv_file = 'convert.csv'
#xls_df.to_csv(csv_file, index = False)
#csv_df = pd.read_csv(csv_file)
#print(type(csv_df), end = '\n')
#
#substr = csv_df.iloc[:15,:3]
#
#p_c = 'partition.csv'
#substr.to_csv(p_c, index = False)
#p_c_print = pd.read_csv(p_c)
#print(p_c_print.head())
