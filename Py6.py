import pandas as pd
import numpy as np

exam_data = {
    "name": [ "Ajay", "Vijay", "Vivek", "Atharv", "Apurva", "Rupal", "Priyal", "Shrushti", "Vishal", "Pranay"],
    "score": [12.5, 9, 16.5, np.nan, 9, 20, 14.5,  np.nan, 8, 19],
    "attempts": [1, 3, 2, 3, 2, 3, 1, 1, 2, 1],
    "qualify": ["yes", "no", "yes", "no", "no", "yes", "yes", "no", "no", "yes"],
    "labels" : ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
    }

#a) Select Name & score
df = pd.DataFrame(exam_data)
print(df.loc[:,["name","score"]])

#b) Select rows with score bet. 15 & 20
score = (df['score']>15) & (df['score']<20)
new_df = df.loc[score]
print(new_df)

#c)Selecting rows with missing score data
missing = df['score'].isna()
print(df.loc[missing])

#d)change score in row d to 11.5
update = (df['labels'] == 'd')
df.loc[update,'score'] = 11.5
print(df)

#e)sum of examination attempts
total_attempts = df['attempts'].sum()
print("The Total Attempts are:" + str(total_attempts))
